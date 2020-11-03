%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void yyerror(const char*);
//#define YYSTYPE char *
%}

%union{
	int intval;
	char *strval;
}

%token <strval> T_IF
%token <strval> T_WHILE
%token <strval> T_BLOCK
%token <strval> T_IntConstant T_Identifier

%type <strval> T_CON


%left '+' '-'
%left '*' '/'
%right U_neg

%%

S   :   Stmt
    |   S Stmt
    ;

Stmt:   T_Identifier '=' E ';'  { printf("pop %s\n\n", $1); }
    |	T_IF			{ printf("%s\n\n", $1); }
    |	T_WHILE	';'		{ printf("%s\n\n", $1); }
    |   T_CON			{ printf("T_CON:%s\n\n", $1); }
    |   T_BLOCK ';'			{ printf("T_CON:%s\n\n", $1); }
    ;

E   :   E '+' E                 { printf("add\n"); }
    |   E '-' E                 { printf("sub\n"); }
    |   E '*' E                 { printf("mul\n"); }
    |   E '/' E                 { printf("div\n"); }
    |   '-' E %prec U_neg       { printf("neg\n"); }
    |   T_IntConstant           { printf("push %s\n", $1); }
    |   T_Identifier            { printf("push %s\n", $1); }
    |   '(' E ')'               { /* empty */ }
    ;

T_CON:	T_IF '(' T_Identifier ')' { $$ = strcat($1, $3); }
    ;
%%

int main() {
    return yyparse();
}