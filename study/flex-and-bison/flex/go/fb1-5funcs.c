#include <stdio.h>
#include <stdlib.h>
#include "fb1-5.h"

struct ifNode *createIfNode(struct ast *con, struct ast *then, struct ast *elseBody) {
    printf("%s\n", "createIfNode===========");
    struct ifNode *ifNode1 = malloc(sizeof(struct ifNode));
    ifNode1->thenBody = then;
    ifNode1->con = con;
    ifNode1->elseBody = elseBody;
    return ifNode1;
}

struct ast *createCon(int nodeType, struct str *l, struct number *r) {
    printf("%s\n", "createCon===========");
    struct ast *con = malloc(sizeof(struct ast));
    con->nodeType = nodeType;
//    con->l = l;
//    con->r = r;
//    printf("l size = %d\n", sizeof(l));
//    printf("createCon l = %s\n", l->value);
//    struct str *rf = (struct str *)r;
//    printf("con = 【%s%c】\n", l->value, nodeType);
    return con;
}

struct ast *createThen(int nodeType, struct str *l, struct number *r) {
    printf("%s\n", "createThen===========");
    struct ast *con = malloc(sizeof(struct ast));
    con->nodeType = nodeType;
//    con->l = l;
//    con->r = r;
    return con;
}

struct ast *createElseBody(int nodeType, struct ast *l, struct ast *r) {
    printf("%s\n", "createElseBody===========");
    struct ast *con = malloc(sizeof(struct ast));
    con->nodeType = nodeType;
    con->l = l;
    con->r = r;
    return con;
}

struct number *createNum(int num) {
    struct number *number1 = malloc(sizeof(struct number));
    number1->nodeType = 'n';
    number1->value = num;
    printf("num = %d\n", num);
    return number1;
}

struct str *createStr(char *strs) {
    struct str *str1 = malloc(sizeof(struct str));
    str1->nodeType = 's';
    str1->value = strs;
    printf("str222 = %s\n", str1->value);
    return str1;
}