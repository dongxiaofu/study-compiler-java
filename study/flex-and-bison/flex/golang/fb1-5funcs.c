#include "fb1-5.h"

struct ast *createIfNode(struct ast *con, struct ast *then, struct ast *elseBody) {
    printf("%s\n", "createIfNode===========");
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = 'i';
    node->tl = then;
    node->con = con;
    node->el = elseBody;
    return node;
}

struct ast *createCon(struct ast *con) {
    printf("%s\n", "createCon===========");
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = con->nodeType;
    node->con = con;

    node->l = con->l;
    node->r = con->r;

    return node;
}

struct ast *createThen(int nodeType, struct ast *l, struct ast *r) {
    printf("%s\n", "createThen===========");
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->l = l;
    node->r = r;
    return node;
}

struct ast *createElseBody(int nodeType, struct ast *l, struct ast *r) {
    printf("%s\n", "createElseBody===========");
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->l = l;
    node->r = r;
    return node;
}

struct ast *createExpr(int nodeType, struct ast *l, struct ast *r) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->l = l;
    node->r = r;
    return node;
}

struct ast *createNum(int num) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = 'n';
    node->numberValue = num;
    return node;
}

struct ast *createStr(char *str) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = 's';
    char *temp = (char *) malloc(sizeof(str) + 1);
    strcpy(temp, str + 1);
    temp[strlen(temp) + 1] = '\0';
    node->stringValue = temp;
    return node;
}

int level = 0;

void dump(struct ast *root) {
    if (root == NULL) {
        return;
    }
//    printf("%s\n", "打印AST");
    printIndent(level);
    printf("nodeType = %c\n", root->nodeType);
    int nodeType = root->nodeType;
    switch (nodeType) {
        case 's':
            printIndent(level);
            printf("%s\n", root->stringValue);
            break;
        case 'n':
            printIndent(level);
            printf("%d\n", root->numberValue);
            break;
        default:
            level++;
            dump(root->l);
            dump(root->r);
            dump(root->con);
            dump(root->tl);
            dump(root->el);
    }

//    printIndent(level);
}

void newCode(struct ast *root) {
    char *code = "";
    generateCCode(root, code);
    printf("res = 【%s】\n", code);
}

char *generateCCode(struct ast *root, char *code) {
    char nodeType = root->nodeType;
    if (nodeType == 's') {
        return root->stringValue;
    }
    char *left = generateCCode(root->l, code);
    char *right = generateCCode(root->r, code);
    char *res = (char *) malloc(sizeof(left) + sizeof(right) + sizeof(root->nodeType));
    sprintf(res, "%s%c%s", left, root->nodeType, right);
//    code = (char *)malloc(sizeof(code) + sizeof(root->stringValue));
    printf("res = %s\n", res);
//    return res;
//            left + root->nodeType + right;
    return res;
}

void printIndent(int level) {
    for (int i = 0; i < level; i++) {
        printf("%c", ' ');
    }
}