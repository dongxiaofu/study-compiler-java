%{
#include <stdio.h>
%}
//
//%union{
//	int intval;
//	char *strval;
//}

//%token <intval> NUMBER
//%token <strval> ADD SUB MUL DIV ABS
//%token <strval> EOL


%token  NUMBER
%token ADD SUB MUL DIV ABS
%token  EOL
%token OP CP IF ELSE
%token COMMENT
%token IDENTIFIER

//%type <intval> NUMBER
//%type <strval> ADD SUB MUL DIV ABS EOL
//%type <strval> calclist exp factor
//%type <intval> term

//%start calclist

%%

compilation_unit:
	| import_stmts top_defs EOL  { printf("%s %s\n", $1, $2); }
	;

import_stmts:	import_stmt /*default	$$ = $1*/
	| import_stmts   import_stmt	{ $$ = strcat($1,$2); }
	;

import_stmt:	IDENTIFIER			{  $$ = $1;	}
	| import_stmt IDENTIFIER	{ $$ = strcat($1,$2); }
	;

top_defs:	top_def 			{  $$ = $1;	}
	| top_defs top_def	{ $$ = strcat($1,$2); }
	;

top_def:	IDENTIFIER 			{  $$ = $1;	}
	| top_def IDENTIFIER	{ $$ = strcat($1,$2); }
	;
%%

int main(int argc, char **argv)
{
	return yyparse();
}

yyerror(char *s)
{
	fprintf(stderr, "error: %s\n", s);
}
