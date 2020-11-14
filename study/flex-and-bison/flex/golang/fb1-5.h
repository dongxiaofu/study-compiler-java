// todo 奇怪的struct，用自己定义自己。
struct ast{
    int nodeType;
    struct ast *l;
    struct ast *r;
    struct ast *tl;
    struct ast *con;
    struct ast *el;
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
struct ast * createCon(int nodeType,  struct ast *l, struct ast *r);
struct ast *createThen(int nodeType, struct ast *l, struct ast  *r);
struct ast *createElseBody(int nodeType, struct ast *l, struct ast *r);
struct ast *createNum(int num);
struct ast *createStr(char *str);