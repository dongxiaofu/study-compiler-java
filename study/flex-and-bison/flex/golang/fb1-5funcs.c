#include <stdbool.h>
#include "fb1-5.h"

struct ast *createIfNode(struct ast *con, ExprNode *thenExprNodeListHeader, ExprNode *elseExprNodeListHeader) {
//    reverseLinkedList(thenExprNodeListHeader);
//    reverseLinkedList(elseExprNodeListHeader);

    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
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
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
    node->nodeType = ASSIGN_NODE_TYPE;
    node->expr = expr;

    return node;
}

struct ast *createCallNode(struct ast *funcName, struct paramNode *actualparamNodeListHeader) {
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
    node->nodeType = CALL_NODE_TYPE;
    node->funcName = funcName->stringValue;
    node->paramListHead = *actualparamNodeListHeader;

    actualparamNodeListHeader->next = NULL;

    return node;
}

struct ast *createReturnNode(struct ast *expr) {
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
    node->nodeType = RETURN_NODE_TYPE;
    node->expr = expr;

    return node;
}

// todo 用"继承"struct的作用是，能不让father struct成员量太杂太多。
struct ast *createWhileNode(struct ast *con, ExprNode *thenExprNodeListHeader) {
    WhileNode *node = (WhileNode *) malloc(sizeof(WhileNode));
    struct ast *fatherNode = (struct ast *) node;
    fatherNode->nodeType = WHILE_NODE_TYPE;
    fatherNode->thenExprNodeListHeader = *thenExprNodeListHeader;
    fatherNode->con = con;

    thenExprNodeListHeader->next = NULL;

    return fatherNode;
}

struct ast *createDoWhileNode(struct ast *con, ExprNode *thenExprNodeListHeader) {
    DoWhileNode *node = (DoWhileNode *) malloc(sizeof(WhileNode));
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
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
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
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->thenExprNodeListHeader = *thenExprNodeListHeader;

    thenExprNodeListHeader->next = NULL;
    return node;
}

// todo 未使用
struct ast *createElseBody(ExprNode *elseExprNodeListHeader) {
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
    node->nodeType = ELSE_BODY_NODE_TYPE;
    node->elseExprNodeListHeader = *elseExprNodeListHeader;

    elseExprNodeListHeader->next = NULL;

    return node;
}

// todo nodeType如何使用enum？
struct ast *createExpr(int nodeType, struct ast *l, struct ast *r) {
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
    node->nodeType = nodeType;
    node->l = l;
    node->r = r;
    return node;
}

struct ast *createNum(int num) {
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
    node->nodeType = NUM_NODE_TYPE;
    node->numberValue = num;
    return node;
}

struct ast *createStr(char *str) {
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
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
    // 生成汇编代码使用
    strcpy(funcName, root->funcName);
    char *codeStr = traverseNode(root);
//    printf("%s\n", codeStr);

//    fb1-5funcs.c:206:23: warning: incompatible pointer types passing 'char *[20]' to parameter of type 'char *' [-Wincompatible-pointer-types]
//    generateStartCode(funcName);
    generateStartCode(funcName);
    FuncCode *funcCode = (FuncCode *) malloc(sizeof(FuncCode));
    getFuncCode(funcCode, funcName);
    printf("name:%s\n", funcCode->funcName);
    printf("start:%s\n", funcCode->startCode);
    printf("call:%s\n", funcCode->callCode);
    printf("variable:%s\n", funcCode->variableCode);

    char *startCode = (char *) malloc(strlen(funcCode->startCode) + 1 + strlen(funcCode->callCode) + 1);
    sprintf(startCode, funcCode->startCode, funcCode->callCode, "%");
    char *startStr = ".section .data\n";
    char *fullCodeStr = contactStrBetter(3, startStr, funcCode->variableCode, startCode);
    printf("fullCodeStr:%s\n", fullCodeStr);

    char *filename = "/Users/cg/data/code/study-compiler-java/study/gas/cg.s";
    save2file(filename, fullCodeStr);

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
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
    node->nodeType = PARAM_NODE_TYPE;
    node->paramType = dataType->stringValue;
    node->paramName = name->stringValue;

    return node;
}

struct ast *createActualParam(struct ast *name) {
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
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

void addToActualParamNodeList(struct ast *param, struct paramNode *actualparamNodeListHeader) {
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
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
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
    struct ast *variable = (struct ast *) malloc(sizeof(struct ast));
    variable->nodeType = VARIABLE_NODE_TYPE;
    variable->dataType = dataType->stringValue;
    variable->variableName = variableName->stringValue;
    return variable;
}

// todo 这个文件里的参数、结构体等大部分都使用指针，能不能不要指针？我不愿现在去测试这点。
struct ast *createFunction(struct ast *returnType, struct ast *funcName,
                           struct paramNode *paramListHead, struct ast *funcBody) {
    struct ast *node = (struct ast *) malloc(sizeof(struct ast));
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

    codeStrTable = (CodeHashTable *) malloc(sizeof(CodeHashTable));
    codeStrTable->tableSize = -1;
    codeStrTable->init = 0;

    variableHashTable = (VariableHashTable *) malloc(sizeof(VariableHashTable));
    variableHashTable->tableSize = -1;
    variableHashTable->init = 0;
}

char *contactStr(char *str1, char *str2, char *str3) {
    // todo 不确定，str的长度是否需要加1。
    // todo 能使用(char *）malloc(*)吗？强制类型转换。
    int len = sizeof(str1) + sizeof(str2) + sizeof(str3);
    char *str = (char *) malloc(len + 1);
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
        // 生成汇编代码使用
        // todo 非常奇怪，这个节点，在遍历变量节点之后才遍历。
        // strcpy(funcName, node->funcName);

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

    // todo ASSIGN_NODE_TYPE 类型节点，并无函数名。现在又需要，怎么办？用全局变量保存。
    if (node->nodeType == ASSIGN_NODE_TYPE) {
        // 生成汇编代码--变量，funcName是全局变量
        generateVariableCode(node->expr, funcName);

        char *codeStr1 = traverseNode(node->expr);
        char *oldCodeStr = codeStr;
        codeStr = contactStrBetter(2, oldCodeStr, codeStr1);

        return codeStr;
    }

    if (node->nodeType == CALL_NODE_TYPE) {
        SINGLE_LINKED_LIST_NODE_HEADER header;
        header.paramNode = node->paramListHead;
        // 生成汇编代码callCode start
        generateCallCode(funcName, node->paramListHead.next);
        // 生成汇编代码callCode end
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
        // 生成汇编代码
        addToVariableHashTable(*node);
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

// 存储到函数哈希表中更好？无所谓。由于实参存储在单链表中，放入哈希表或由此函数返回都行。
// 这样的话，函数哈希表就有些浪费了。
// 第二个参数是调用函数的第二个实参
void generateCallCode(char *funcName, struct paramNode *paramNode) {
    char *callCodeTemplate = "    call printf\n";
    char *pushStackCode = "";
    // 反转单链表
    struct paramNode *cur = paramNode;
    while (cur != NULL) {
        struct ast *param = cur->param;
        Variable *variable = (Variable *) malloc(sizeof(Variable));
        getVariable(param->paramName, variable);
        char codeStr[40];
        // 获取参数类型
        if (strcmp("int", variable->type) == 0) {
            sprintf(codeStr, "  pushl $%s\n", variable->value);
        } else if (strcmp("string", variable->type) == 0) {
            char *paramName = contactStrBetter(2, "$", param->paramName);
            sprintf(codeStr, "  pushl %s\n", paramName);
        }
        // todo 前后次序问题，不能很清晰、迅速地心算出来
        pushStackCode = contactStrBetter(2, codeStr, pushStackCode);
        cur = cur->next;
    }
    char *callCode = contactStrBetter(2, pushStackCode, callCodeTemplate);
    addToCodeHashTable(funcName, CALL, callCode);
}

//.section .data
//        str:
//.asciz  "hello,world:%d\n"
//len = . - str
// 遍历assignStmtNode时生成
// assignStmtNode 没有一个头节点，所以，需用一个全局变量存储变量汇编代码。
// 直接用全局变量达成此目的，太简略了，完全不具备复用性。
// 仍然打算用简陋的哈希表完成这个工作。
void generateVariableCode(struct ast *expr, char *funcName) {
    FuncCode *funcCode = (FuncCode *) malloc(sizeof(FuncCode));
    getFuncCode(funcCode, funcName);
    char *variableCodeStr = funcCode->variableCode;
    // 取得expr的左右两边的数据。在这里卡了许久。因为，我这里是简化版，所以，expr->l是变量名，expr->r是值。
    // 可是，我却陷入了旧代码中的处理ASSIGN_NODE_TYPE类型节点的逻辑。看了很久，才发现，我对表达式，是用专门逻辑处理的。
    // 由于，我需要直接在这里获取变量名和变量值，所以，不能在旧代码中插入这里的代码。
    // 将生成汇编代码的代码分散在各个地方，也不好。能集中就尽量集中。
    struct ast *left = expr->l;
    struct ast *right = expr->r;
    char *variableName = left->stringValue;
    char *variableValue;
    if (right->nodeType == NUM_NODE_TYPE) {
        variableValue = int2String(right->numberValue);      // todo 可能是整型，如何处理？整型不需要生成这部分汇编代码。
    } else {
        variableValue = right->stringValue;       // todo 可能是整型，如何处理？整型不需要生成这部分汇编代码。
    }

    // 在哈希表中查找
    // todo 二维数组如何用malloc申请内存？
//    char *variable = (char *) malloc(sizeof(char[100]) * 3);
    // 没办法，只能这样硬编码
    Variable *variable = (Variable *) malloc(sizeof(Variable));
    getVariable(variableName, variable);
    // 字符串类型
    if (strcmp(variable->type, "string") == 0) {
        char *codeTemplate = "%s:\n"
                             "    .asciz  \"%s\"\n"
                             "    len = . - %s\n";
        char *codeStr = (char *) malloc(
                strlen(codeTemplate) + strlen(variableName) * 2 + 2 + strlen(variableValue) + 1);
        sprintf(codeStr, codeTemplate, variableName, variableValue, variableName);
        char *newCodeStr = contactStrBetter(2, variableCodeStr, codeStr);
        // 将结果存储到函数哈希表中
        addToCodeHashTable(funcName, VARIABLE, newCodeStr);
    }
    // 整型，不需要生成变量
    if (strcmp(variable->type, "int") == 0) {
        // do nothing
        // 将结果存储到函数哈希表中
        updateVariable(variableName, variableValue);
    }
}

// 不熟练，连接字符串的代码，我还不能百分百确定它们是正确的。
// todo startCode的长度不能精准确定，只能给出一个大的空间，浪费空间。有更好的方法吗？
// 为了函数哈希表不被浪费，更重要的是，为了在遍历结束之后，再生成汇编代码，我把汇编代码的三个组成
// 部分全部放入函数哈希表中。
void generateStartCode(char *funcName) {
    char *startCodeTemplate = ".section .text\n"
                              ".global _start\n"
                              "_start:\n"
                              "    nop\n"
                              "%s"
                              "    movl $1, %seax\n"
                              "    int $0x80";
    // 放到最后整合 start
    //    char *startCode = (char *) malloc(strlen(startCodeTemplate) + 1
//                                      + strlen(callCode) + 1);
//    sprintf(startCode, startCodeTemplate, callCode);
    // 放到最后整合 end
//    startCode = contactStrBetter(variableCode, startCode);
    // 存储到函数哈希表
    FuncCode *funcCode = (FuncCode *) malloc(sizeof(FuncCode));
    getFuncCode(funcCode, funcName);
    addToCodeHashTable(funcName, START, startCodeTemplate);
}

void addToVariableHashTable(struct ast funcVariableNode) {
    Variable *variable = (Variable *) malloc(sizeof(Variable));
    char *dataType = funcVariableNode.dataType;
    if (strcmp(dataType, "char") == 0) {
        variable->type = "string";
        dataType = "string";
    }

    if (strcmp(dataType, "string") == 0) {
        variable->name = funcVariableNode.variableName;
        char *variableName = funcVariableNode.variableName;
        int len = strlen(variableName);
        if (len >= 1 && variableName[0] == '*') {
            char *str = funcVariableNode.variableName + 1;
            variable->name = str;
        }
    } else {
        variable->name = funcVariableNode.variableName;
        variable->type = funcVariableNode.dataType;
    }
    int tableSize = variableHashTable->tableSize;
    variableHashTable->variableTable[++tableSize] = variable;
    variableHashTable->tableSize = tableSize;
    if (variableHashTable->init == 0) {
        variableHashTable->init = 1;
    }
}

//
//void addToVariableHashTable(struct funcVariableNode *funcVariableNode) {
//    // todo 数组类型哈希表初始化，难点，这种方法，只是暂时的
//    int init = hashTable.init;
//    if (init == 0) {
//        for (int i = 0; i < 10; i++) {
//            for (int j = 0; j < 3; j++) {
//                for (int k = 0; k < 20; k++) {
//                    hashTable.variableHashTable[i][j][k] = '0';
//                }
//            }
//        }
//        hashTable.init = 1;
//    }
//    struct ast *funcVariable = funcVariableNode->funcVariable;
//    char *nodeType = (char *) malloc(sizeof(char) * 10);
//    char *value = (char *) malloc(sizeof(char) * 20);
//
//    // 整型
//    if (funcVariable->nodeType == NUM_NODE_TYPE) {
//        // todo 字符串变量，这样赋值，可以吗？经测试，可行。
//        value = int2String(funcVariable->numberValue);
//        nodeType = 'int';
//    }
//    // 标识符
//    if (funcVariable->nodeType == STR_NODE_TYPE) {
//        value = funcVariable->stringValue;
//        nodeType = 'string';
//    }
//
//    int tableSize = hashTable.tableSize;
////    *hashTable.variableHashTable[tableSize + 1][0] = funcVariable->variableName;
////    *hashTable.variableHashTable[tableSize + 1][1] = nodeType;
////    *hashTable.variableHashTable[tableSize + 1][2] = value;
//
//    *hashTable.variableHashTable[tableSize + 1][0] = "str";
//    *hashTable.variableHashTable[tableSize + 1][1] = "string";
//    *hashTable.variableHashTable[tableSize + 1][2] = "hello:%d";
//
//    hashTable.tableSize++;
//}

void getVariable(char *variableName, Variable *variable) {
    if (variableHashTable->init == 0) {
        return;
    }
    int tableSize = variableHashTable->tableSize;
    for (int i = 0; i <= tableSize; i++) {
        if (strcmp(variableName, variableHashTable->variableTable[i]->name) == 0) {
//            variable = variableHashTable->variableTable[i];
            variable->name = variableHashTable->variableTable[i]->name;
            variable->type = variableHashTable->variableTable[i]->type;
            variable->value = variableHashTable->variableTable[i]->value;

            break;
        }
    }
}

// todo 使用malloc，能不初始化那个结构吗？
void addToCodeHashTable(char *funcName, int codeType, char *codeStr) {
    int init = codeStrTable->init;
    if (init == 0) {
        init = 1;
        codeStrTable->init = init;
    }
    int tableSize = codeStrTable->tableSize;
    // todo 有问题。会重复添加，必须做到：不存在，添加；存在，保存和更新。
    // 查找hash表中是否存在同名函数，若存在，更新；若不存在，加入。
    int index = -1;
    for (int i = 0; i <= tableSize; i++) {
        if (strcmp(codeStrTable->funcCodeTable[i].funcName, funcName) == 0) {
            index = i;
            break;
        }
    }

    // 不存在，加入。
    if (index == -1) {
        index = tableSize + 1;
        strcpy(codeStrTable->funcCodeTable[index].funcName, funcName);
//        codeStrTable->funcCodeTable[index].funcName[strlen(codeStrTable->funcCodeTable[index].funcName) + 1] = '\0';
        codeStrTable->tableSize = index;
    }
    updateFuncCode(codeType, codeStr, &codeStrTable->funcCodeTable[index]);
}

void updateFuncCode(int codeType, char *codeStr, FuncCode *funcCode) {
    if (codeType == CALL) {
//        codeStrTable->funcCodeTable[index].callCode = codeStr;
        strcpy(funcCode->callCode, codeStr);
    } else if (codeType == START) {
//        codeStrTable->funcCodeTable[index].startCode = codeStr;
        strcpy(funcCode->startCode, codeStr);
    } else if (codeType == VARIABLE) {
//        codeStrTable->funcCodeTable[index].variableCode = codeStr;
        strcpy(funcCode->variableCode, codeStr);
    }
}

void updateVariable(char *name, char *value) {
    int init = variableHashTable->init;
    if (init == 0) {
        return;
    }
    int tableSize = variableHashTable->tableSize;
    for (int i = 0; i <= tableSize; i++) {
        if (strcmp(name, variableHashTable->variableTable[i]->name) == 0) {
            variableHashTable->variableTable[i]->value = value;
            break;
        }
    }
}

void getFuncCode(FuncCode *funcCode, char *funcName) {
    int tableSize = codeStrTable->tableSize;
    for (int i = 0; i <= tableSize; i++) {
        if (strcmp(funcName, codeStrTable->funcCodeTable[i].funcName) == 0) {
            // struct 能否用等号赋值？
//            funcCode = &codeStrTable->funcCodeTable[i];
            strcpy(funcCode->funcName, codeStrTable->funcCodeTable[i].funcName);
            strcpy(funcCode->startCode, codeStrTable->funcCodeTable[i].startCode);
            strcpy(funcCode->variableCode, codeStrTable->funcCodeTable[i].variableCode);
            strcpy(funcCode->callCode, codeStrTable->funcCodeTable[i].callCode);
            break;
        }
    }
}

void save2file(char *filename, char *codeStr) {
    FILE *fp = NULL;
    fp = fopen(filename, "w+");
    int errorNo = fprintf(fp, "%s", codeStr);
    fclose(fp);
    if (errorNo < 0) {
        perror("写入数据失败\n");
        exit(1);
    }
}
