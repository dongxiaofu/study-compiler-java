#include "fb1-5.h"

struct ast *createIfNode(struct ast *con, struct ast *then, struct ast *elseBody) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = 'i';
    node->tl = then;
    node->con = con;
    node->el = elseBody;
    return node;
}

struct ast *createCon(struct ast *con) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = con->nodeType;
    node->con = con;
    if (con->nodeType == 's' || con->nodeType == 'n') {
        node->nodeType = 'e';
        node->l = con;
    } else {
        node->l = con->l;
    }
    node->r = con->r;

    return node;
}

// todo then和else都是简化版的二元表达式。
struct ast *createThen(struct ast *e) {
    int nodeType = e->nodeType;
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->l = e->l;
    node->r = e->r;
    return node;
}

struct ast *createElseBody(struct ast *e) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = e->nodeType;
    node->l = e->l;
    node->r = e->r;
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
    int len = strlen(str);
    // 仅仅以$开头的标识符才去掉首字符
    if (len > 1) {
        char c = str[0];
        if (c == '$') {
            strcpy(temp, str + 1);
            temp[strlen(temp) + 1] = '\0';
            node->stringValue = temp;
        } else {
            node->stringValue = str;
        }
        node->stringValue = str;
    } else {
        node->stringValue = str;
    }

    return node;
}

int level = 0;

void dump(struct ast *root) {
    if (root == NULL) {
        return;
    }
//    printf("%s\n", "打印AST");
    printf("%c\n", root->nodeType);
    printIndent(level);
    if (root->nodeType == 'a') {
        return;
    }
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
            if (root == NULL) {
                break;
            }
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
}

char *generateCCode(struct ast *root, char *code) {
    // 必须再最前面，否则，当root是NULL时，下面的root->nodeType等会报错。
    if (root == NULL) {
        return "";
    }
    char nodeType = root->nodeType;
    if (nodeType == 's') {
        return root->stringValue;
    }
    if (nodeType == 'n') {
        return int2String(root->numberValue);
    }
    char *res;
    // ifNode
    if (nodeType == 'i') {
        char *con = generateCCode(root->con, code);
        char *tl = generateCCode(root->tl, code);
        char *el = generateCCode(root->el, code);

        res = (char *) malloc(sizeof(con) + sizeof(tl) + sizeof(el));
        sprintf(res, "%s%s%s", con, tl, el);
        printf("if res = %s\n", res);
    } else {
        char *left = generateCCode(root->l, code);
        char *right = generateCCode(root->r, code);
        res = (char *) malloc(sizeof(left) + sizeof(right) + sizeof(root->nodeType));
        // 当nodeType的作用是占位符、无实际作用时，将其替换为空白，参与到最终结果中
        char operator;
        if (nodeType == 'e') {
            operator = ' ';
        } else {
            operator = nodeType;
        }
        sprintf(res, "%s%c%s", left, operator, right);
//    code = (char *)malloc(sizeof(code) + sizeof(root->stringValue));
        printf("res = %s\n", res);
    }
//    return res;
//            left + root->nodeType + right;
    return res;
}

void printIndent(int level) {
    for (int i = 0; i < level; i++) {
        printf("%c", ' ');
    }
}

char *int2String(int num) {
    // todo str占用内存如何精确确定大小？乘以8，是我随便定的。
    char *str = (char *) malloc(sizeof(char) * 8);
    sprintf(str, "%d", num);
    return str;
}

struct ast *createParam(struct ast *dataType, struct ast *name) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = 'p';       // p表示参数
    node->paramType = dataType->stringValue;
    node->paramName = name->stringValue;

    return node;
}

void addToParamNodeList(struct ast *param, struct paramNode *paramNodeListHeader) {
    // todo 不能使用malloc初始化paramNode,只能如此声明。会出问题吗？
//    struct paramNode *cur = {NULL, NULL};
    struct paramNode *cur = (struct paramNode *) malloc(sizeof(struct paramNode));
    cur->param = param;
    cur->next = NULL;
    paramNodeCur->next = cur;
    paramNodeCur = cur;
    if (paramNodeListHeader->next == NULL) {
        paramNodeListHeader->next = paramNodeCur;
    }
    return;
}

struct ast *createBlock(struct funcVariableNode *funcVariableListHead,
                        struct funcStmtNode *funcStmtsListHead) {
    struct ast *node = malloc(sizeof(struct ast));
    // todo 后期优化。在Java，结点类名自身就是识别符号
    node->nodeType = 'f';
    node->funcVariableListHead = funcVariableNodeListHeader;
    node->funcStmtsListHead = funcStmtNodeListHeader;
    return node;
}

void addToFuncVariableNodeList(struct ast *variable,
                               struct funcVariableNode *funcVariableListHead) {
    struct funcVariableNode *cur = (struct funcVariableNode *)malloc(sizeof(struct funcVariableNode));
    cur->funcVariable = variable;
    cur->next = NULL;
    funcVariableNodeCur = cur;
    if (funcVariableListHead->next == NULL) {
        funcVariableListHead->next = funcVariableNodeCur;
    }
}

void addToFuncStmtNodeList(struct ast *funcStmtNode,
                           struct funcStmtNode *funcStmtsListHead) {
    struct funcStmtNode *cur = (struct funcStmtNode *)malloc(sizeof(struct funcStmtNode));
    cur->funcStmtNode = funcStmtNode;
    cur->next = NULL;
    funcStmtNodeCur = cur;
    if (funcStmtsListHead->next == NULL) {
        funcStmtsListHead->next = funcStmtNodeCur;
    }
}

struct ast *createVariable(struct ast *dataType, struct ast  *variableName) {
    struct ast *variable = malloc(sizeof(struct ast));
    variable->nodeType = 'v';
    variable->dataType = dataType->stringValue;
    variable->variableName = variableName->stringValue;
    return variable;
}

struct ast *createFunction(struct ast *returnType, struct ast *funcName,
                           struct paramNode *paramListHead, struct ast *funcBody) {
    struct ast *node = malloc(sizeof(struct ast));
    node->returnType = returnType->stringValue;
    node->funcName = funcName->stringValue;
    node->paramListHead = paramListHead;
    node->funcBody = funcBody;

    return node;
}

void init() {
    paramNodeListHeader = (struct paramNode *) malloc(sizeof(struct paramNode));
    paramNodeCur = (struct paramNode *) malloc(sizeof(struct paramNode));

    funcVariableNodeListHeader = (struct funcVariableNode *) malloc(sizeof(struct funcVariableNode));
    funcVariableNodeCur = (struct funcVariableNode *) malloc(sizeof(struct funcVariableNode));

    funcStmtNodeListHeader = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));
    funcStmtNodeCur = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));
}

char *contactStr(char *str1, char *str2, char *str3){
    // todo 不确定，str的长度是否需要加1。
    // todo 能使用(char *）malloc(*)吗？强制类型转换。
    int len = sizeof(str1) + sizeof(str2) + sizeof(str3);
    char *str = malloc( len+ 1);
    sprintf(str, "%s%s%s", str1, str2, str3);
    str[len + 1] = '\0';
    return str;
}