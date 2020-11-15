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
    char *str = (char *)malloc(sizeof(char) * 8);
    sprintf(str, "%d", num);
//    printf("=====str======:%s\n", str);
    return str;
}