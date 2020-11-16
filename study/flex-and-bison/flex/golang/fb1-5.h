#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct param {
    char *paramType;
    char *paramName;
};

// todo 奇怪的struct，用自己定义自己。
struct ast {
    int nodeType;
    struct ast *l;
    struct ast *r;
    struct ast *tl;
    struct ast *con;
    struct ast *el;

    // 函数元素 start
    // 返回数据类型。使用stringValue
    char *returnType;
    char *funcName;
    // 用链表来存储
    struct paramNode *paramListHead;
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
    // 函数体重，变量和表达式交叉排列，怎么存储？
    struct funcVariableNode *funcVariableListHead;
    struct funcStmtNode *funcStmtsListHead;

    int numberValue;
    char *stringValue;

    // todo struct的最后一个成员可以是变长数组
//    // 函数元素 。已经用替代方案"链表"实现。
//    struct param params[0];
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
// 函数表达式结点
struct funcStmtNode {
    struct ast *funcStmtNode;
    struct funcStmtNode *next;
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

struct paramNode *paramNodeListHeader;
struct paramNode *paramNodeCur;

struct funcVariableNode *funcVariableNodeListHeader;
struct funcVariableNode *funcVariableNodeCur;

struct funcStmtNode *funcStmtNodeListHeader;
struct funcStmtNode *funcStmtNodeCur;

struct ast *createIfNode(struct ast *con, struct ast *then, struct ast *elseBody);

struct ast *createCon(struct ast *con);

struct ast *createThen(struct ast *l);

struct ast *createElseBody(struct ast *e);

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

struct ast *createBlock(struct funcVariableNode *funcVariableListHead,
                        struct funcStmtNode *funcStmtsListHead);

void addToFuncVariableNodeList(struct ast *variable,
                               struct funcVariableNode *funcVariableListHead);

void addToFuncStmtNodeList(struct ast *funcStmtNode,
                           struct funcStmtNode *funcStmtsListHead);

struct ast *createVariable(struct ast *dataType, struct ast *variableName);

struct ast *createFunction(struct ast *returnType, struct ast *funcName,
                           struct paramNode *paramListHead, struct ast *funcBody);

void init();
// 连接两个字符串
char *contactStr(char *str1, char *str2, char *str3);

void printExpr(struct ast *expr);

