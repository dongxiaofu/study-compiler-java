#include "fb1-5.h"

struct ast *createIfNode(struct ast *con, ExprNode *thenExprNodeListHeader, ExprNode *elseExprNodeListHeader) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = 'i';
    node->thenExprNodeListHeader = *thenExprNodeListHeader;
    node->con = con;
    node->elseExprNodeListHeader = *elseExprNodeListHeader;
    // todo 尝试一下
    thenExprNodeListHeader->next = NULL;
    elseExprNodeListHeader->next = NULL;

    return node;
}

// todo 用"继承"struct的作用是，能不让father struct成员量太杂太多。
struct ast *createWhileNode(struct ast *con, ExprNode *thenExprNodeListHeader) {
    WhileNode *node = malloc(sizeof(WhileNode));
    struct ast *fatherNode = (struct ast *)node;
    fatherNode->nodeType = 'w';
    fatherNode->thenExprNodeListHeader = *thenExprNodeListHeader;
    fatherNode->con = con;

    thenExprNodeListHeader->next = NULL;

    return fatherNode;
}

struct ast *createDoWhileNode(struct ast *con, ExprNode *thenExprNodeListHeader){
    DoWhileNode *node = malloc(sizeof(WhileNode));
    struct ast *fatherNode = (struct ast *)node;
    fatherNode->nodeType = 'd';
    fatherNode->thenExprNodeListHeader = *thenExprNodeListHeader;
    fatherNode->con = con;

    thenExprNodeListHeader->next = NULL;

    return fatherNode;
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
// todo 未使用
struct ast *createThen(ExprNode *thenExprNodeListHeader) {
    int nodeType = 'e';
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->thenExprNodeListHeader = *thenExprNodeListHeader;

    thenExprNodeListHeader->next = NULL;
    return node;
}

// todo 未使用
struct ast *createElseBody(ExprNode *elseExprNodeListHeader) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = 'e';
    node->elseExprNodeListHeader = *elseExprNodeListHeader;

    elseExprNodeListHeader->next = NULL;

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
//            dump(root->tl);
//            dump(root->el);
    }

//    printIndent(level);
}

void newCode(struct ast *root) {
    char *code = "";
    generateCCode(root, code);
}

char *generateCCode(struct ast *root, char *code) {
    return "";
//    // 必须再最前面，否则，当root是NULL时，下面的root->nodeType等会报错。
//    if (root == NULL) {
//        return "";
//    }
//    char nodeType = root->nodeType;
//    if (nodeType == 's') {
//        return root->stringValue;
//    }
//    if (nodeType == 'n') {
//        return int2String(root->numberValue);
//    }
//    char *res;
//    // ifNode
//    if (nodeType == 'i') {
//        char *con = generateCCode(root->con, code);
////        char *tl = generateCCode(root->tl, code);
////        char *el = generateCCode(root->el, code);
//
//        res = (char *) malloc(sizeof(con) + sizeof(tl) + sizeof(el));
//        sprintf(res, "%s%s%s", con, tl, el);
//        printf("if res = %s\n", res);
//    } else {
//        char *left = generateCCode(root->l, code);
//        char *right = generateCCode(root->r, code);
//        res = (char *) malloc(sizeof(left) + sizeof(right) + sizeof(root->nodeType));
//        // 当nodeType的作用是占位符、无实际作用时，将其替换为空白，参与到最终结果中
//        char operator;
//        if (nodeType == 'e') {
//            operator = ' ';
//        } else {
//            operator = nodeType;
//        }
//        sprintf(res, "%s%c%s", left, operator, right);
////    code = (char *)malloc(sizeof(code) + sizeof(root->stringValue));
//        printf("res = %s\n", res);
//    }
////    return res;
////            left + root->nodeType + right;
//    return res;
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

//ExprNode *thenExprNodeListHeader;
//ExprNode *thenExprNodeCur;
void addToThenExprNodeList(struct ast *expr, ExprNode *thenExprNodeListHeader) {
    ExprNode *cur = (ExprNode *) malloc(sizeof(ExprNode));
    cur->expr = expr;
    thenExprNodeCur->next = cur;
    thenExprNodeCur = cur;
    if (thenExprNodeListHeader->next == NULL) {
        thenExprNodeListHeader->next = thenExprNodeCur;
    }
    char *tmp = "hello";
}

//ExprNode *elseExprNodeListHeader;
//ExprNode *elseExprNodeCur;
void addToElseExprNodeList(struct ast *expr, ExprNode *elseExprNodeListHeader) {
    ExprNode *cur = (ExprNode *) malloc(sizeof(ExprNode));
    cur->expr = expr;
    elseExprNodeCur->next = cur;
    elseExprNodeCur = cur;
    if (elseExprNodeListHeader->next == NULL) {
        elseExprNodeListHeader->next = elseExprNodeCur;
    }
}

struct ast *createBlock(struct funcVariableNode *funcVariableListHead,
                        struct funcStmtNode *funcStmtsListHead) {
    struct ast *node = malloc(sizeof(struct ast));
    // todo 后期优化。在Java，结点类名自身就是识别符号
    node->nodeType = 'f';
    node->funcVariableListHead = *funcVariableNodeListHeader;
    node->funcStmtsListHead = *funcStmtNodeListHeader;

    // todo 行不通。执行设置为NULL后，node的对应成员的值也是NULL。
    funcVariableNodeListHeader->next = NULL;
    funcStmtNodeListHeader->next = NULL;

    return node;
}

// todo 构造单链表。因为我发现，看到自己两个多小时前写的逻辑一致的代码addToParamNodeList，居然需要看看才理解。
// todo 所以，我觉得需要补上详细注释。
void addToFuncVariableNodeList(struct ast *variable,
                               struct funcVariableNode *funcVariableListHead) {
    // 用要加入的变量结点构造单链表中的结点，新当前结点
    struct funcVariableNode *cur = (struct funcVariableNode *) malloc(sizeof(struct funcVariableNode));
    cur->funcVariable = variable;
    cur->next = NULL;
    // 目前的当前结点，将它指向新的当前结点。
    funcVariableNodeCur->next = cur;
    // 更新当前结点为新的当前结点。
    funcVariableNodeCur = cur;
    // 若头结点没有指向第一个结点，将头结点指向当前结点。
    if (funcVariableListHead->next == NULL) {
        funcVariableListHead->next = funcVariableNodeCur;
    }
}

// todo addToFuncVariableNodeList、addToParamNodeList 逻辑一致，找机会消除重复代码。
void addToFuncStmtNodeList(struct ast *funcStmtNode) {
    struct funcStmtNode *cur = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));
    cur->funcStmtNode = funcStmtNode;
    cur->next = NULL;
    funcStmtNodeCur->next = cur;
    funcStmtNodeCur = cur;
    if (funcStmtNodeListHeader->next == NULL) {
        funcStmtNodeListHeader->next = funcStmtNodeCur;
    }
}

struct ast *createVariable(struct ast *dataType, struct ast *variableName) {
    struct ast *variable = malloc(sizeof(struct ast));
    variable->nodeType = 'v';
    variable->dataType = dataType->stringValue;
    variable->variableName = variableName->stringValue;
    return variable;
}

// todo 这个文件里的参数、结构体等大部分都使用指针，能不能不要指针？我不愿现在去测试这点。
struct ast *createFunction(struct ast *returnType, struct ast *funcName,
                           struct paramNode *paramListHead, struct ast *funcBody) {
    struct ast *node = malloc(sizeof(struct ast));
    node->returnType = returnType->stringValue;
    node->funcName = funcName->stringValue;
    node->paramListHead = *paramListHead;
    node->funcBody = funcBody;

    paramListHead->next = NULL;

    return node;
}

void init() {
    paramNodeListHeader = (struct paramNode *) malloc(sizeof(struct paramNode));
    paramNodeCur = (struct paramNode *) malloc(sizeof(struct paramNode));

    funcVariableNodeListHeader = (struct funcVariableNode *) malloc(sizeof(struct funcVariableNode));
    funcVariableNodeCur = (struct funcVariableNode *) malloc(sizeof(struct funcVariableNode));

    funcStmtNodeListHeader = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));
    funcStmtNodeListHeader->next = NULL;
    funcStmtNodeCur = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));

    thenExprNodeListHeader = (ExprNode *) malloc(sizeof(ExprNode));
    thenExprNodeListHeader->next = NULL;
    thenExprNodeCur = (ExprNode *) malloc(sizeof(ExprNode));

    elseExprNodeListHeader = (ExprNode *) malloc(sizeof(ExprNode));
    elseExprNodeListHeader->next = NULL;
    elseExprNodeCur = (ExprNode *) malloc(sizeof(ExprNode));
}

char *contactStr(char *str1, char *str2, char *str3) {
    // todo 不确定，str的长度是否需要加1。
    // todo 能使用(char *）malloc(*)吗？强制类型转换。
    int len = sizeof(str1) + sizeof(str2) + sizeof(str3);
    char *str = malloc(len + 1);
    sprintf(str, "%s%s%s", str1, str2, str3);
    str[len + 1] = '\0';
    return str;
}

void printExpr(struct ast *expr) {
    char nodeType = expr->nodeType;
    if (nodeType == 'e') {
        printExpr(expr->l);
        printExpr(expr->r);
    } else {
        // todo 先简化处理，固定表达式是 ab=5，右边是整型。
        printf("\nexpr = %s %c %d\n", expr->l->stringValue, expr->nodeType, expr->r->numberValue);
    }
}