//
// Created by chugang on 2020/12/17.
//
#include "../fb1-5.h"

int main(int argc, char **argv) {
    init();
    struct ast *funcVariableNode = (struct ast *)malloc(sizeof(struct ast));
    funcVariableNode->variableName = "test";
    funcVariableNode->dataType = "char";
    addToVariableHashTable(*funcVariableNode);

    funcVariableNode->variableName = "num";
    funcVariableNode->dataType = "int";
    addToVariableHashTable(*funcVariableNode);

    char *name = "test";
    Variable *variable = (Variable *) malloc(sizeof(Variable));
    getVariable(name, variable);

    generateStartCode("hello");
    struct ast *expr = (struct ast *)malloc(sizeof(struct ast));
    struct ast *l = (struct ast *)malloc(sizeof(struct ast));
    l->nodeType = STR_NODE_TYPE;
    l->stringValue = "test";
    struct ast *r = (struct ast *)malloc(sizeof(struct ast));
    r->nodeType = STR_NODE_TYPE;
    r->stringValue = "hello:%d";
    expr->l = l;
    expr->r = r;
    generateVariableCode(expr, "hello");

//    struct paramNode *paramNode = (struct paramNode *)malloc(sizeof(struct paramNode));
//    paramNode->param =
//    generateCallCode("hello", );

    return 0;
}

