#include <stdbool.h>
#include "fb1-5.h"

struct ast *createIfNode(struct ast *con, ExprNode *thenExprNodeListHeader, ExprNode *elseExprNodeListHeader) {
//    reverseLinkedList(thenExprNodeListHeader);
//    reverseLinkedList(elseExprNodeListHeader);

    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = IF_NODE_TYPE;
    node->thenExprNodeListHeader = *thenExprNodeListHeader;
    node->con = con;
    // 改了好几次，很小的判断。粗心！
    // todo 其他地方，以后再检查
    if (elseExprNodeListHeader != NULL) {
        node->elseExprNodeListHeader = *elseExprNodeListHeader;
    }
    // todo 这两个以及其他地方的类似情况，是否也需要做类似容错处理？
    thenExprNodeListHeader->next = NULL;
    if (elseExprNodeListHeader != NULL) {
        elseExprNodeListHeader->next = NULL;
    }
    // 耗时4个多小时，才通过猜测+尝试 解决 链表结点次序颠倒 + 写出这句。防止出现重复元素。
    thenExprNodeCur = (ExprNode *) malloc(sizeof(ExprNode));

    return node;
}

struct ast *createAssignNode(struct ast *expr) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = ASSIGN_NODE_TYPE;
    node->expr = expr;

    return node;
}

struct ast *createCallNode(struct ast *funcName, struct paramNode *actualparamNodeListHeader) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = CALL_NODE_TYPE;
    node->funcName = funcName->stringValue;
    node->paramListHead = *actualparamNodeListHeader;

    actualparamNodeListHeader->next = NULL;

    return node;
}

struct ast *createReturnNode(struct ast *expr){
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = RETURN_NODE_TYPE;
    node->expr = expr;

    return node;
}

// todo 用"继承"struct的作用是，能不让father struct成员量太杂太多。
struct ast *createWhileNode(struct ast *con, ExprNode *thenExprNodeListHeader) {
    WhileNode *node = malloc(sizeof(WhileNode));
    struct ast *fatherNode = (struct ast *) node;
    fatherNode->nodeType = WHILE_NODE_TYPE;
    fatherNode->thenExprNodeListHeader = *thenExprNodeListHeader;
    fatherNode->con = con;

    thenExprNodeListHeader->next = NULL;

    return fatherNode;
}

struct ast *createDoWhileNode(struct ast *con, ExprNode *thenExprNodeListHeader) {
    DoWhileNode *node = malloc(sizeof(WhileNode));
    struct ast *fatherNode = (struct ast *) node;
    fatherNode->nodeType = DO_WHILE_NODE_TYPE;
    fatherNode->thenExprNodeListHeader = *thenExprNodeListHeader;
    fatherNode->con = con;

    thenExprNodeListHeader->next = NULL;

    return fatherNode;
}

// todo 后期从整个项目中删除这个con结点
struct ast *createCon(struct ast *con) {
    return con;
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = con->nodeType;
    node->con = con;
    if (con->nodeType == STR_NODE_TYPE || con->nodeType == NUM_NODE_TYPE) {
//        无法匹配 ab = 5 + 4 这样的表达式
// todo 后期，我要删除这个con节点，把它当普通的表达式
//        node->nodeType = EXPR_NODE_TYPE;
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
    int nodeType = THEN_NODE_TYPE;
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->thenExprNodeListHeader = *thenExprNodeListHeader;

    thenExprNodeListHeader->next = NULL;
    return node;
}

// todo 未使用
struct ast *createElseBody(ExprNode *elseExprNodeListHeader) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = ELSE_BODY_NODE_TYPE;
    node->elseExprNodeListHeader = *elseExprNodeListHeader;

    elseExprNodeListHeader->next = NULL;

    return node;
}

// todo nodeType如何使用enum？
struct ast *createExpr(int nodeType, struct ast *l, struct ast *r) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->l = l;
    node->r = r;
    return node;
}

struct ast *createNum(int num) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = NUM_NODE_TYPE;
    node->numberValue = num;
    return node;
}

struct ast *createStr(char *str) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = STR_NODE_TYPE;
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

char *newCode(struct ast *root) {
//    signal(SIGILL,sigillDeal);//----------------------------------注册SIGILL对应的处理函数
    char *code = "";
//    generateCCode(root, code);
    char *codeStr = traverseNode(root);
//    printf("%s\n", codeStr);
    return codeStr;
//    return "codeStr";
//    test(codeStr);

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

// todo 该函数通过局部变量char *str返回字符串，为何能行？
char *int2String(int num) {
    // todo str占用内存如何精确确定大小？乘以8，是我随便定的。
    char *str = (char *) malloc(sizeof(char) * 8);
    sprintf(str, "%d", num);
    return str;
}

// todo struct ast *node 也是局部变量，为何能作为函数返回值？
struct ast *createParam(struct ast *dataType, struct ast *name) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = PARAM_NODE_TYPE;
    node->paramType = dataType->stringValue;
    node->paramName = name->stringValue;

    return node;
}

struct ast *createActualParam(struct ast *name) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = ACTUAL_PARAM_NODE_TYPE;
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

void addToActualParamNodeList(struct ast *param, struct paramNode *actualparamNodeListHeader){
    struct paramNode *cur = (struct paramNode *) malloc(sizeof(struct paramNode));
    cur->param = param;
    cur->next = NULL;
    actualparamNodeCur->next = cur;
    actualparamNodeCur = cur;
    if (actualparamNodeListHeader->next == NULL) {
        actualparamNodeListHeader->next = actualparamNodeCur;
    }
    return;
}

//ExprNode *thenExprNodeListHeader;
//ExprNode *thenExprNodeCur;
void addToThenExprNodeList(struct ast *expr, ExprNode *thenExprNodeListHeader) {
    ExprNode *cur = (ExprNode *) malloc(sizeof(ExprNode));
    cur->expr = expr;
    cur->next = NULL;
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
    cur->next = NULL;
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
    node->nodeType = BLOCK_NODE_TYPE;
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
    variable->nodeType = VARIABLE_NODE_TYPE;
    variable->dataType = dataType->stringValue;
    variable->variableName = variableName->stringValue;
    return variable;
}

// todo 这个文件里的参数、结构体等大部分都使用指针，能不能不要指针？我不愿现在去测试这点。
struct ast *createFunction(struct ast *returnType, struct ast *funcName,
                           struct paramNode *paramListHead, struct ast *funcBody) {
    struct ast *node = malloc(sizeof(struct ast));
    node->nodeType = FUNC_NODE_TYPE;
    node->returnType = returnType->stringValue;
    node->funcName = funcName->stringValue;
    node->paramListHead = *paramListHead;
    node->funcBody = funcBody;

    paramListHead->next = NULL;

    return node;
}

void init() {
    paramNodeListHeader = (struct paramNode *) malloc(sizeof(struct paramNode));
    paramNodeListHeader->next = NULL;
    paramNodeCur = (struct paramNode *) malloc(sizeof(struct paramNode));

    actualparamNodeListHeader = (struct paramNode *) malloc(sizeof(struct paramNode));
    actualparamNodeListHeader->next = NULL;
    actualparamNodeCur = (struct paramNode *) malloc(sizeof(struct paramNode));

    funcVariableNodeListHeader = (struct funcVariableNode *) malloc(sizeof(struct funcVariableNode));
    funcVariableNodeListHeader->next = NULL;
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

char *traverseNode(struct ast *node) {
    char *codeStr = "";
    if (node == NULL) {
        return codeStr;
    }
    // 整型
    if (node->nodeType == NUM_NODE_TYPE) {
        char *str = int2String(node->numberValue);
        char *oldCodeStr = codeStr;
        codeStr = contactStrBetter(2, oldCodeStr, str);
        return codeStr;
    }
    // 标识符
    if (node->nodeType == STR_NODE_TYPE) {
        char *str = node->stringValue;
        char *oldCodeStr = codeStr;
        codeStr = contactStrBetter(2, oldCodeStr, str);
        return codeStr;
    }


//    node->returnType = returnType->stringValue;
//    node->funcName = funcName->stringValue;
//    node->paramListHead = *paramListHead;
//    node->funcBody = funcBody;
    // 函数节点
    // 对该节点的每个子节点（有的子元素不是节点）进行处理，字符串直接合并到结果字符串，node类型进行节点遍历，链表类型进行单链表遍历。
    // todo 这里的所有逻辑都相同，和cbc中的访问者模式有相似性？
    if (node->nodeType == FUNC_NODE_TYPE) {
        SINGLE_LINKED_LIST_NODE_HEADER header;
        header.paramNode = node->paramListHead;
        char *codeStr1 = traverseLinkedList(header, PARAM_HEADER);
        char *codeStr2 = traverseNode(node->funcBody);
        char *oldCodeStr = codeStr;
        codeStr = contactStrBetter(5, oldCodeStr, node->returnType, node->funcName, codeStr1, codeStr2);

        return codeStr;
    }

//    node->nodeType = BLOCK_NODE_TYPE;
//    node->funcVariableListHead = *funcVariableNodeListHeader;
//    node->funcStmtsListHead = *funcStmtNodeListHeader;
    // 函数体节点
    if (node->nodeType == BLOCK_NODE_TYPE) {
        SINGLE_LINKED_LIST_NODE_HEADER header;
        header.funcVariableNode = node->funcVariableListHead;
        char *codeStr2 = traverseLinkedList(header, FUNC_VARIABLE_HEADER);
        header.funcStmtNode = node->funcStmtsListHead;
        char *codeStr3 = traverseLinkedList(header, FUNC_STMT_HEADER);

        codeStr = contactStrBetter(2, codeStr2, codeStr3);

        return codeStr;
    }
    // if 结构节点
    if (node->nodeType == IF_NODE_TYPE) {
//        reverseLinkedList(&node->thenExprNodeListHeader);
//        reverseLinkedList(&node->elseExprNodeListHeader);
        return traverseIfNode(node);
    }
    // while结构节点
    if (node->nodeType == WHILE_NODE_TYPE) {
        char *codeStr1 = traverseNode(node->con);
        SINGLE_LINKED_LIST_NODE_HEADER header;
//        reverseLinkedList(&node->thenExprNodeListHeader);
        header.exprNode = node->thenExprNodeListHeader;
        char *codeStr2 = traverseLinkedList(header, EXPR_HEADER);

        char *oldCodeStr = codeStr;
        codeStr = contactStrBetter(3, oldCodeStr, codeStr1, codeStr2);

        return codeStr;
    }

    // if(con)中的con节点。
    // todo 这个分支永远不会进入，con的nodeType已经在creteConNode中被设置为了表达式
    if (node->nodeType == CON_NODE_TYPE) {
        traverseNode(node->con);
        return codeStr;
    }
    // do-while结构节点
    if (node->nodeType == DO_WHILE_NODE_TYPE) {
        SINGLE_LINKED_LIST_NODE_HEADER header;
//        reverseLinkedList(&node->thenExprNodeListHeader);
        header.exprNode = node->thenExprNodeListHeader;
        char *codeStr1 = traverseLinkedList(header, EXPR_HEADER);
        char *codeStr2 = traverseNode(node->con);
        char *oldCodeStr = codeStr;
        codeStr = contactStrBetter(3, oldCodeStr, codeStr1, codeStr2);

        return codeStr;
    }

    if (node->nodeType == ASSIGN_NODE_TYPE) {
        char *codeStr1 = traverseNode(node->expr);
        char *oldCodeStr = codeStr;
        codeStr = contactStrBetter(2, oldCodeStr, codeStr1);

        return codeStr;
    }

    if (node->nodeType == CALL_NODE_TYPE) {
        SINGLE_LINKED_LIST_NODE_HEADER header;
        header.paramNode = node->paramListHead;
        char *codeStr1 = traverseLinkedList(header, ACTUAL_PARAM_HEADER);
        char *oldCodeStr = codeStr;
        // 第一个参数是3，而不是2。断点调试很久，才找到这个问题。代码不是特别多，找错误就如此麻烦了。
        codeStr = contactStrBetter(3, oldCodeStr, node->funcName, codeStr1);

        return codeStr;
    }

    if (node->nodeType == RETURN_NODE_TYPE) {
        char *codeStr1 = traverseNode(node->expr);
        char *oldCodeStr = codeStr;
        codeStr = contactStrBetter(4, oldCodeStr, "return", " ", codeStr1);

        return codeStr;
    }

    // 对单链表，已经在函数体节点类型中处理了
//    VARIABLE_NODE_TYPE
//    if (node->nodeType == VARIABLE_NODE_TYPE) {
//        SINGLE_LINKED_LIST_NODE_HEADER header;
//        header.exprNode = node->thenExprNodeListHeader;
//        traverseLinkedList(header, EXPR_HEADER, codeStr);
//        traverseNode(node->con, codeStr);
//
//        return;
//    }
    // todo 这个逻辑，居然还需要想两三分钟！需要对我自己一两天前写的数据结构更熟悉啊，这依赖记忆力。
    // 思路：参数由两个结点构成，都是ast，一个是参数类型，一个是参数名，我要做的，就是把二者拼接起来
    if (node->nodeType == PARAM_NODE_TYPE) {
        // 已经拼接好的codeStr + 参数类型 + " " + 参数名
        codeStr = contactStrBetter(4, codeStr, node->paramType, " ", node->paramName);
        return codeStr;
    }
    // 实参
    if (node->nodeType == ACTUAL_PARAM_NODE_TYPE) {
        codeStr = contactStrBetter(2, codeStr, node->paramName);
        return codeStr;
    }

    if (node->nodeType == VARIABLE_NODE_TYPE) {
        // 已经拼接好的codeStr + 变量类型 + " " + 变量名
        codeStr = contactStrBetter(4, codeStr, node->dataType, " ", node->variableName);
        return codeStr;
    }

//    node->nodeType = nodeType;
//    node->l = l;
//    node->r = r;
// 上面的注释来源于createExprNode，它是下面变量子元素的依据。
// todo 这是漏掉之后补充的逻辑。事先做好设计，挺违背我的习惯的，我喜欢马上动手写。先想好，再做；边做边想，孰优孰劣？
    int nodeType = node->nodeType;
    if (isExprNode((char) nodeType) == 1) {
        return traverseExprNode(node);
    }

    // 加减乘除等节点
    //    IF = 'A', WHILE, DO_WHILE, CON, THEN, ELSE_BODY, EXPR, NUM, STR, PLUS = 43, SUB = 45, TIMES = 42, EQUAL = 61
//    int nodeType = node->nodeType;
    char operator = nodeType;
    // todo 把字符转为字符串。正确性未知。
    char operatorStr[2];
    operatorStr[0] = operator;
    operatorStr[1] = '\0';

    char *oldCodeStr = codeStr;
    codeStr = contactStrBetter(2, oldCodeStr, operatorStr);

    return codeStr;
}

// a = ab + 5都认为是表达式
enum _BOOL isExprNode(int nodeType) {
    return nodeType == EXPR_NODE_TYPE ||
           nodeType == PLUS_NODE_TYPE ||
           nodeType == SUB_NODE_TYPE || nodeType == TIMES_NODE_TYPE || nodeType == EQUAL_NODE_TYPE;
}

char *traverseExprNode(const struct ast *node) {
    char str1[2];
    str1[0] = node->nodeType;
    str1[1] = '\0';
    char *str2 = traverseNode(node->l);
    char *str3 = traverseNode(node->r);
    // 表达式：ab = 5 + 4;
// 根本无需拼接已经存在的字符串，那不是在这个环节完成的，是在递归的上层完成的。
    char *codeStr = contactStrBetter(3, str2, str1, str3);
    return codeStr;
}

void test(char *codeStr) {
    // do nothing
    // 断点使用。
    int a = 5;
}

char *traverseIfNode(const struct ast *node) {
    char *codeStr1 = traverseNode(node->con);
    SINGLE_LINKED_LIST_NODE_HEADER header;
//    reverseLinkedList(&node->thenExprNodeListHeader);
    header.exprNode = node->thenExprNodeListHeader;
    char *codeStr2 = traverseLinkedList(header, EXPR_HEADER);
//    reverseLinkedList(&node->elseExprNodeListHeader);
    header.exprNode = node->elseExprNodeListHeader;
    char *codeStr3 = traverseLinkedList(header, EXPR_HEADER);

    char *codeStr = contactStrBetter(3, codeStr1, codeStr2, codeStr3);

    return codeStr;
}

// todo 复制粘贴，大量冗余代码，调试正确后，需要优化
//FUNC_STMT_HEADER = 'A',EXPR_HEADER,PARAM_HEADER,FUNC_VARIABLE_HEADER
char *traverseLinkedList(SINGLE_LINKED_LIST_NODE_HEADER header, int headerType) {
    char *codeStr = "";
    if (headerType == FUNC_STMT_HEADER) {
        // 终止条件
        if (header.funcStmtNode.next == NULL) {
            codeStr = "";
            return codeStr;
        }
        // todo 不使用malloc初始化是否可以？
//        struct funcStmtNode *cur = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));
        struct funcStmtNode *cur = header.funcStmtNode.next;
        while (cur != NULL) {
            char *str = traverseNode(cur->funcStmtNode);
            char *oldCodeStr = codeStr;
            codeStr = contactStrBetter(2, oldCodeStr, str);
            cur = cur->next;
        }
        return codeStr;
    }

    if (headerType == EXPR_HEADER) {
        // 不能放在这里，会导致多条if语句丢失元素。我不能心算出为何会出错。
//        reverseLinkedList(&header.exprNode);
        // 终止条件
        if (header.exprNode.next == NULL) {
            return "";
        }
        // todo 不使用malloc初始化是否可以？
//        struct funcStmtNode *cur = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));
        struct exprNode *cur = header.exprNode.next;
        while (cur != NULL) {
            char *oldCodeStr = codeStr;
            char *str = traverseNode(cur->expr);
            codeStr = contactStrBetter(2, oldCodeStr, str);
            cur = cur->next;
        }
        return codeStr;
    }

    if (headerType == PARAM_HEADER) {
        // 终止条件
        if (header.paramNode.next == NULL) {
            return "";
        }
        // todo 不使用malloc初始化是否可以？
//        struct funcStmtNode *cur = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));
        struct paramNode *cur = header.paramNode.next;
        while (cur != NULL) {
            char *oldCodeStr = codeStr;
            char *str = traverseNode(cur->param);
            codeStr = contactStrBetter(2, oldCodeStr, str);
            cur = cur->next;
        }
        return codeStr;
    }

    if (headerType == ACTUAL_PARAM_HEADER) {
        // 终止条件
        if (header.paramNode.next == NULL) {
            return "@@@@@@";
        }
        // todo 不使用malloc初始化是否可以？
//        struct funcStmtNode *cur = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));
        struct paramNode *cur = header.paramNode.next;
        while (cur != NULL) {
            char *oldCodeStr = codeStr;
            char *str = traverseNode(cur->param);
            codeStr = contactStrBetter(2, oldCodeStr, str);
            cur = cur->next;
        }
        return codeStr;
    }

    if (headerType == FUNC_VARIABLE_HEADER) {
        // 终止条件
        if (header.funcVariableNode.next == NULL) {
            return "";
        }
        // todo 不使用malloc初始化是否可以？
//        struct funcStmtNode *cur = (struct funcStmtNode *) malloc(sizeof(struct funcStmtNode));
        struct funcVariableNode *cur = header.funcVariableNode.next;
        while (cur != NULL) {
            // todo 不使用oldCodeStr这个中间变量行不行？
            char *oldCodeStr = codeStr;
            char *str = traverseNode(cur->funcVariable);
            codeStr = contactStrBetter(2, oldCodeStr, str);
            cur = cur->next;
        }
        return codeStr;
    }

    return codeStr;
}

// todo 为什么，这个函数能够使用局部变量返回字符串？
char *contactStrBetter(int num, ...) {
    va_list valist;
    int i;
    char *codeStr = "";

    /* 为 num 个参数初始化 valist */
    va_start(valist, num);

    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < num; i++) {
        char *str = va_arg(valist, char *);
//        printf("str:%s\n", str);
//        printf("str%d = %s\n", i, str);
        char *oldCodeStr = codeStr;
//        printf("old = %s\n", oldCodeStr);
        // 旧代码是：codeStr = (char *) malloc(strlen(str) + strlen(oldCodeStr));
        // Illegal instruction: 4，耗费三个下午的时间才解决这个问题
        codeStr = (char *) malloc(strlen(str) + strlen(oldCodeStr) + 2);
        strcat(codeStr, oldCodeStr);
//        printf("codeStr1 = %s\n", codeStr);
        strcat(codeStr, str);
//        printf("codeStr2 = %s\n", codeStr);
    }
    /* 清理为 valist 保留的内存 */
    va_end(valist);

    return codeStr;
}

void sigillDeal(int sig) {
    if (sig == SIGILL) {
        printf("\nGot SIGILL(Illegal Instruction)\n");
        system("vmmap `pidof AiApp`");//-----------------获取进程的maps信息。
        raise(SIGSEGV);//-----------------------------------------将当前进程的内存存入coredump中，便于后续通过gdb分析导出内存内容。
    }
}

// 反转链表，想不到好方法。
// 思路：1. 先将节点存储到数组。2. 倒序遍历数组，构造新链表。
void reverseLinkedList(ExprNode *oldHead) {
    int count = 0;
    ExprNode *cur = (ExprNode *) malloc(sizeof(ExprNode));
    cur = oldHead->next;
    while (cur != NULL) {
        count++;
        cur = cur->next;
    }
    ExprNode *arr[count];
    cur = oldHead->next;
    int j = 0;
    while (cur != NULL) {
        arr[j++] = cur;
        cur = cur->next;
    }
    oldHead->next = NULL;
    // 连这种常规操作，我都需要想一想。不熟练啊。
    for (int i = count - 1; i >= 0; i--) {
        cur = arr[i];
        if (i - 1 >= 0) {
            cur->next = arr[i] - 1;
        } else {
            cur->next = NULL;
        }
        if (oldHead->next == NULL) {
            oldHead->next = cur;
        }
    }
}