#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <signal.h>

enum NODE_TYPE {
    IF_NODE_TYPE = 'A', WHILE_NODE_TYPE, DO_WHILE_NODE_TYPE, CON_NODE_TYPE, THEN_NODE_TYPE,
    ELSE_BODY_NODE_TYPE, EXPR_NODE_TYPE, NUM_NODE_TYPE, STR_NODE_TYPE, PARAM_NODE_TYPE, ACTUAL_PARAM_NODE_TYPE,
    BLOCK_NODE_TYPE, VARIABLE_NODE_TYPE, FUNC_NODE_TYPE, ASSIGN_NODE_TYPE, CALL_NODE_TYPE, RETURN_NODE_TYPE,
    PLUS_NODE_TYPE = 43,
    SUB_NODE_TYPE = 45, TIMES_NODE_TYPE = 42, EQUAL_NODE_TYPE = 61,

};

// todo EXPR_HEADER 等不能重复，它们的值能重复吗？
enum HEADER_TYPE {
    FUNC_STMT_HEADER = 'A', EXPR_HEADER, PARAM_HEADER, ACTUAL_PARAM_HEADER, FUNC_VARIABLE_HEADER
};

enum _BOOL {
    FALSE = 0, TRUE
};

//./fb1-5.h:27:13: warning: multi-character character constant [-Wmultichar]
//START = 'START',
//enum CODE_STR_TYPE {
//    VARIABLE = 'VARIABLE',
//    START = 'START',
//    CALL = 'CALL',
//};

enum CODE_STR_TYPE {
    VARIABLE = 0, START, CALL
};


struct param {
    char *paramType;
    char *paramName;
};

// todo 为了traverseLinkedList传参方便而新建
struct singleLinkedListNode {
//    struct ast *linkedListNode;
};

// 函数表达式结点，整体，如if结构、while结构
struct funcStmtNode {
    struct singleLinkedListNode parent;
    struct ast *funcStmtNode;
    struct funcStmtNode *next;
};

// todo 必须放在ast的前面
// 暂不改成继承父struct
// 表达式结点，如ab=55;
typedef struct exprNode {
    struct singleLinkedListNode parent;
//    struct ast *linkedListNode;
    struct ast *expr;
    // error: error: incomplete type 'ExprNode' where a complete type is required
    //note: forward declaration of 'ExprNode'
//    struct ExprNode *next;
    struct exprNode *next;
} ExprNode;

// 函数参数结点
struct paramNode {
    struct singleLinkedListNode parent;
//    struct ast *linkedListNode;
    struct ast *param;
    struct paramNode *next;
};
// 函数体变量结点
struct funcVariableNode {
    struct singleLinkedListNode parent;
//    struct ast *linkedListNode;
    struct ast *funcVariable;
    struct funcVariableNode *next;
};
// todo 方便在traverseLinkedList使用一个参数
typedef union header {
    struct funcStmtNode funcStmtNode;
    ExprNode exprNode;
    struct paramNode paramNode;
    struct funcVariableNode funcVariableNode;
} SINGLE_LINKED_LIST_NODE_HEADER;

struct ifNode {
    struct ast *thenBody;
    struct ast *con;
    struct ast *elseBody;
};

struct number {
    int nodeType;
    int value;
};

struct str {
    char nodeType;
    char *value;
};

// todo 奇怪的struct，用自己定义自己。
struct ast {
//    int nodeType;
    enum NODE_TYPE nodeType;
    struct ast *l;
    struct ast *r;
    struct ast *con;
    struct ast *expr;
    // 表达式链表 start
    // thenBody
    ExprNode thenExprNodeListHeader;
    // elseBody
    ExprNode elseExprNodeListHeader;
    // 表达式链表 end

    struct singleLinkedListNode linkedListNode;

    // 函数元素 start
    // 返回数据类型。使用stringValue
    char *returnType;
    char *funcName;
    // 用链表来存储
    struct paramNode paramListHead;
    struct ast *funcBody;
    // 函数名。使用stringValue
    // 参数。多个参数、可变参数怎么存储？
    // 函数体。函数体，怎么存储？
    // 函数元素 end

    // 函数参数
    char *paramType;
    char *paramName;

    // 变量
    char *dataType;
    char *variableName;

    // 函数体
    // 函数体中，变量和表达式交叉排列，怎么存储？
    struct funcVariableNode funcVariableListHead;
    struct funcStmtNode funcStmtsListHead;

    int numberValue;
    char *stringValue;

    // todo struct的最后一个成员可以是变长数组
//    // 函数元素 。已经用替代方案"链表"实现。
//    struct linkedListNode params[0];
};

typedef struct whileNode {
    struct ast node;

} WhileNode;

typedef struct doWhileNode {
    struct ast node;

} DoWhileNode;

struct paramNode *paramNodeListHeader;
struct paramNode *paramNodeCur;

struct paramNode *actualparamNodeListHeader;
struct paramNode *actualparamNodeCur;

struct funcVariableNode *funcVariableNodeListHeader;
struct funcVariableNode *funcVariableNodeCur;

struct funcStmtNode *funcStmtNodeListHeader;
struct funcStmtNode *funcStmtNodeCur;

ExprNode *thenExprNodeListHeader;
ExprNode *thenExprNodeCur;

ExprNode *elseExprNodeListHeader;
ExprNode *elseExprNodeCur;

struct ast *createIfNode(struct ast *con, ExprNode *thenExprNodeListHeader, ExprNode *elseExprNodeListHeader);

struct ast *createAssignNode(struct ast *expr);

struct ast *createCallNode(struct ast *funcName, struct paramNode *paramListHead);

struct ast *createReturnNode(struct ast *expr);

struct ast *createWhileNode(struct ast *con, ExprNode *thenExprNodeListHeader);

struct ast *createDoWhileNode(struct ast *con, ExprNode *thenExprNodeListHeader);

struct ast *createCon(struct ast *con);

struct ast *createThen(ExprNode *thenExprNodeListHeader);

struct ast *createElseBody(ExprNode *elseExprNodeListHeader);

struct ast *createExpr(int nodeType, struct ast *l, struct ast *r);

struct ast *createNum(int num);

struct ast *createStr(char *str);

void dump(struct ast *root);

char *newCode(struct ast *root);

char *generateCCode(struct ast *root, char *res);

void printIndent(int level);

char *int2String(int num);

struct ast *createParam(struct ast *dataType, struct ast *name);

struct ast *createActualParam(struct ast *name);

void addToParamNodeList(struct ast *param, struct paramNode *paramNodeListHeader);

void addToActualParamNodeList(struct ast *param, struct paramNode *actualparamNodeListHeader);

//ExprNode *thenExprNodeListHeader;
//ExprNode *thenExprNodeCur;
void addToThenExprNodeList(struct ast *expr, ExprNode *thenExprNodeListHeader);

//ExprNode *elseExprNodeListHeader;
//ExprNode *elseExprNodeCur;
void addToElseExprNodeList(struct ast *expr, ExprNode *elseExprNodeListHeader);

struct ast *createBlock(struct funcVariableNode *funcVariableListHead,
                        struct funcStmtNode *funcStmtsListHead);

void addToFuncVariableNodeList(struct ast *variable,
                               struct funcVariableNode *funcVariableListHead);

void addToFuncStmtNodeList(struct ast *funcStmtNode);

struct ast *createVariable(struct ast *dataType, struct ast *variableName);

struct ast *createFunction(struct ast *returnType, struct ast *funcName,
                           struct paramNode *paramListHead, struct ast *funcBody);

void init();

// 连接两个字符串
char *contactStr(char *str1, char *str2, char *str3);

void printExpr(struct ast *expr);

// 遍历AST start
char *traverseNode(struct ast *node);

char *traverseLinkedList(SINGLE_LINKED_LIST_NODE_HEADER header, int headerType);
// 遍历AST end

// 优化版拼接字符串函数
char *contactStrBetter(int num, ...);

// 遍历ifNode
char *traverseIfNode(const struct ast *node);

char *traverseExprNode(const struct ast *node);

void test(char *codeStr);

enum _BOOL isExprNode(int nodeType);

void sigillDeal(int sig);

void reverseLinkedList(ExprNode *oldHead);

// 生成最简单的汇编代码 start
// 函数名
char funcName[20];
//遍历哈希表
typedef struct {
    char *type;
    char *name;
    char *value;
} Variable;
typedef struct {
    Variable *variableTable[10];
    int tableSize;
    int init;
} VariableHashTable;

typedef struct {
    // 函数名
    char funcName[500];
    // 汇编代码_start
    char startCode[500];
    // 汇编代码变量
    char variableCode[500];
    // 汇编代码函数调用
    char callCode[500];
} FuncCode;
typedef struct {
    FuncCode funcCodeTable[10];
    int tableSize;
    int init;
} CodeHashTable;
//./fb1-5.h:296:24: warning: incompatible pointer to integer conversion initializing 'char' with an expression of type 'void *' [-Wint-conversion]
//HashTable hashTable = {NULL, -1, 0};
//HashTable hashTable = {NULL, -1, 0};
//CodeHashTable codeStrTable = {NULL, -1, 0};
//char *codeStrTable = (char *) malloc(sizeof(char));
CodeHashTable *codeStrTable;
VariableHashTable *variableHashTable;


void generateCallCode(char *funcName, struct paramNode *paramNode);

void generateVariableCode(struct ast *expr, char *funcName);

void generateStartCode(char *funcName);

//写成struct funcVariableNode funcVariableNode行吗
void addToVariableHashTable(struct ast funcVariableNode);

// 查找变量
void getVariable(char *variableName, Variable *variable);

void addToCodeHashTable(char *funcName, int codeType, char *codeStr);

// 更新 FuncCode
void updateFuncCode(int codeType, char *codeStr, FuncCode *funcCode);

// 更新 Variable
void updateVariable(char *name, char *value);

// 获取FuncCode，是用函数返回还是用指针参数返回？不确定啊。
void getFuncCode(FuncCode *funcCode, char *funcName);
// 存储到文件中
void save2file(char *filename, char *codeStr);
// 生成最简单的汇编代码 end


