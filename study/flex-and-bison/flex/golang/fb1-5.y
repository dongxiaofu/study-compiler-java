%{
#include <stdio.h>
#include "fb1-5.h"
%}
//
%union{
	int intval;
	char *strval;
	struct ifNode *in;
	struct str *str1;
	char c;
}

//%token <intval> NUMBER
//%token <strval> ADD SUB MUL DIV ABS
//%token <strval> EOL


%token  NUMBER
%token ADD SUB MUL DIV ABS
%token  EOL
%token OP CP IF ELSE
%token COMMENT
%token IDENTIFIER

//%type <str1> expr
//%type <c> con
%type <intval> NUMBER
%type <strval> ADD SUB MUL DIV ABS EOL IF ELSE  then else_body IDENTIFIER con
%type <strval> calclist factor
%type <intval> term
%type <in>	compilation_unit

//%start compilation_unit

%%

compilation_unit:{}
//	| IF	EOL		   { printf("if = %s\n", $1);	}
//	| ELSE	EOL		   { printf("else = %s\n", $1);	}
	| IF con EOL		{ printf("IF = %s###con = %s\n", $1, $2); }
//	| IF con then EOL  	{ $$ = createIfNode($2, $3, NULL);  }
//	| IF con then ELSE else_body EOL  { $$ = createIfNode($2, $3, $5);  }
	;

con:					{}
	| '(' IDENTIFIER ')'		{ printf("%s\n", $2);}
//	| IDENTIFIER '=' NUMBER	';'		{ $$ = createThen('=', $1, $3); }
	| '(' IDENTIFIER '=' IDENTIFIER	')'		{ printf("createCon = %s\n", createCon('='));$$ = createCon('='); }
	;
//
//then:{}
////	| '{' IDENTIFIER '=' NUMBER ';' '}'	{ $$ = $2; }
////	| IDENTIFIER '=' NUMBER			{ $$ = $1; }
//	| IDENTIFIER '=' NUMBER	';'		{ $$ = createThen('=', $1, $3); }
////	| IDENTIFIER ';'			{ $$ = $1; }
//	;
//
//else_body:{}
//	| '{' IDENTIFIER '=' NUMBER ';' '}'	{ $$ = createElseBody('=', $2, $4); }
//	| IDENTIFIER '=' NUMBER	';'		{ $$ = createElseBody('=', $1, $3); }
//	;

//expr:
//	| IDENTIFIER			{ $$ = createStr($1); }
////	| NUMBER expr				{ $$ = createNum($1); }
//	;

//
//import_stmts:	import_stmt /*default	$$ = $1*/
//	| import_stmts   import_stmt	{ $$ = strcat($1,$2); }
//	;
//
//import_stmt:	IDENTIFIER			{  $$ = $1;	}
//	| import_stmt IDENTIFIER	{ $$ = strcat($1,$2); }
//	;
//
//top_defs:	top_def 			{  $$ = $1;	}
//	| top_defs top_def	{ $$ = strcat($1,$2); }
//	;
//
//top_def:	IDENTIFIER 			{  $$ = $1;	}
//	| top_def IDENTIFIER	{ $$ = strcat($1,$2); }
//	;
%%

int main(int argc, char **argv)
{
	return yyparse();
}

yyerror(char *s)
{
	fprintf(stderr, "error: %s\n", s);
}
