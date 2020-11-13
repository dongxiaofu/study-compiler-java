// todo 奇怪的struct，用自己定义自己。
struct ast{
    int nodeType;
    struct ast *l;
    struct ast *r;
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
    int nodeType;
    char *value;
};

struct ifNode *createIfNode(struct ast *con, struct ast *then, struct ast *elseBody);
struct ast *createCon(int nodeType, struct str *l, struct number *r);
struct ast *createThen(int nodeType, struct str *l, struct number *r);
struct ast *createElseBody(int nodeType, struct ast *l, struct ast *r);
struct number *createNum(int num);
struct str *createStr(char *str);