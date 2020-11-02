%{
#include <stdio.h>
void yyerror(const char* msg) {}
%}

%union{
	int intval;
	char *strval;
}

%token <intval> T_NUM
%token <strval> IF ELSE WHILE

%type <intval>  E
%type <strval>  K

%left '+' '-'
%left '*' '/'

%start S

%%

S   :   SEN '\n'        { printf("S\n"); }
    |   S SEN '\n'      { printf("test\n");         }
    ;

SEN :   E		{ printf("ans = %d\n", $1); }
    |	K		{ printf("str = %s\n",  $1);  }


E   :   E '+' E         { $$ = $1 + $3; }
    |   E '-' E         { $$ = $1 - $3; }
    |   E '*' E         { $$ = $1 * $3; }
    |   E '/' E         { $$ = $1 / $3; }
    |   T_NUM           { $$ = $1; }
    |   '(' E ')'       { $$ = $2; }
    ;

K   :	IF
    |   WHILE
    |   ELSE		{ $$ = $1; }
    ;

%%

int main() {
    return yyparse();
}