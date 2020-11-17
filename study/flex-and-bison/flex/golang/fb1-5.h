#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct param {
    char *paramType;
    char *paramName;
};

// todo 必须放在ast的前面
// 表达式结点，如ab=55;
typedef struct exprNode {
    struct ast *expr;
    struct exprNode *next;
} ExprNode;

// 函数表达式结点，整体，如if结构、while结构
struct funcStmtNode {
    struct ast *funcStmtNode;
    struct funcStmtNode *next;
};

// 函数参数结点
struct paramNode {
    struct ast *param;
    struct paramNode *next;
};
// 函数体变量结点
struct funcVariableNode {
    struct ast *funcVariable;
    struct funcVariableNode *next;
};

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
    int nodeType;
    struct ast *l;
    struct ast *r;
    struct ast *con;
    // 表达式链表 start
    // thenBody
    ExprNode thenExprNodeListHeader;
    // elseBody
    ExprNode elseExprNodeListHeader;
    // 表达式链表 end

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
//    struct param params[0];
};

struct paramNode *paramNodeListHeader;
struct paramNode *paramNodeCur;

struct funcVariableNode *funcVariableNodeListHeader;
struct funcVariableNode *funcVariableNodeCur;

struct funcStmtNode *funcStmtNodeListHeader;
struct funcStmtNode *funcStmtNodeCur;

ExprNode *thenExprNodeListHeader;
ExprNode *thenExprNodeCur;

ExprNode *elseExprNodeListHeader;
ExprNode *elseExprNodeCur;

struct ast *createIfNode(struct ast *con, ExprNode *thenExprNodeListHeader, ExprNode *elseExprNodeListHeader);

struct ast *createCon(struct ast *con);

struct ast *createThen(ExprNode *thenExprNodeListHeader);

struct ast *createElseBody(ExprNode *elseExprNodeListHeader);

struct ast *createExpr(int nodeType, struct ast *l, struct ast *r);

struct ast *createNum(int num);

struct ast *createStr(char *str);

void dump(struct ast *root);

void newCode(struct ast *root);

char *generateCCode(struct ast *root, char *res);

void printIndent(int level);

char *int2String(int num);

struct ast *createParam(struct ast *dataType, struct ast *name);

void addToParamNodeList(struct ast *param, struct paramNode *paramNodeListHeader);

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

