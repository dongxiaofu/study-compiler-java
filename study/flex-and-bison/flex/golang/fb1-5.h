#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// todo 奇怪的struct，用自己定义自己。
struct ast{
    int nodeType;
    struct ast *l;
    struct ast *r;
    struct ast *tl;
    struct ast *con;
    struct ast *el;

    // 返回数据类型。使用stringValue
    // 函数名。使用stringValue
    // 参数。多个参数、可变参数怎么存储？
    // 函数体。函数体，怎么存储？

    int numberValue;
    char *stringValue;
};

struct ifNode{
    struct ast *thenBody;
    struct ast *con;
    struct ast *elseBody;
};

struct number{
    int nodeType;
    int value;
};

struct str{
    char nodeType;
    char *value;
};

struct ast *createIfNode(struct ast *con, struct ast *then, struct ast *elseBody);
struct ast * createCon(struct ast *con);
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