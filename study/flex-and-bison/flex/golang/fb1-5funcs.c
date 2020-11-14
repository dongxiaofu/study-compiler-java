#include <stdio.h>
#include <stdlib.h>
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

struct ast *createCon(int nodeType, struct ast *l, struct ast *r) {
    printf("%s\n", "createCon===========");
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->l = l;
    node->r = r;
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

struct ast *createNum(int num) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = 'n';
    node->numberValue = num;
    return node;
}

struct ast *createStr(char *str) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = "s";
    node->stringValue = str;
    return node;
}