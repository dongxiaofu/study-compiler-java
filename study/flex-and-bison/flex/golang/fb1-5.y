%{
#include <stdio.h>
#include "fb1-5.h"
%}
//
%union{
	int intval;
	char *strval;
	struct ifNode *in;
	struct ast *node;
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
%type <node> con then else_body expr compilation_unit stmt
%type <intval> NUMBER
%type <strval> ADD SUB MUL DIV ABS EOL IF ELSE  IDENTIFIER
%type <strval> calclist factor
%type <intval> term

//%start compilation_unit

%%

compilation_unit:{}
//	| IF	EOL		   	{ printf("if = %s\n", $1);	}
//	| ELSE	EOL		   	{ printf("else = %s\n", $1);	}
//	| IF con EOL compilation_unit			{ dump($2); }
	| stmt				{  newCode($1); }
//	| IF con then EOL  		{ $$ = createIfNode($2, $3, NULL);  }
//	| IF con then ELSE else_body EOL  { $$ = createIfNode($2, $3, $5);  }
	;
stmt:	{}
	| then		{ $$ = $1; }
	| IF con then EOL		{ $$ = createIfNode($2, $3, NULL); }
	| IF con then ELSE else_body EOL		{ $$ = createIfNode($2, $3, $5); }
	;

con:							{}
	| expr						{ $$ = createCon( $1);}

//	| '(' IDENTIFIER '=' NUMBER	')'		{ $$ = createCon('+', $2, $4); }
//	| '(' IDENTIFIER '=' IDENTIFIER	')'		{ $$ = createCon('='); }
	;
//
then:{}
//	| '{' IDENTIFIER '=' NUMBER ';' '}'	{ $$ = createThen('=', $2, $4); }
//	| IDENTIFIER '=' NUMBER	';'		{ $$ = createThen('=', $1, $3); }
//	| IDENTIFIER ';'			{ $$ = $1; }
	| expr	';' then					{ $$ = createThen( $1);}
	| '{' expr ';' '}'				{ $$ = createThen( $2);}
	;
//
else_body:{}
//	| '{' IDENTIFIER '=' NUMBER ';' '}'	{ $$ = createElseBody('=', $2, $4); }
//	| IDENTIFIER '=' NUMBER	';'		{ $$ = createElseBody('=', $1, $3); }
	| expr	';' else_body					{ $$ = createElseBody( $1);}
	| '{' expr ';' '}'				{ $$ = createElseBody( $2);}
	;

expr:	{}
	| expr	'+'  expr			{ $$ = createExpr('+', $1, $3);  }
	| expr '-'  expr			{ $$ = createExpr('-', $1, $3);  }
	| expr '*'  expr			{ $$ = createExpr('*', $1, $3);  }
	| expr '/'  expr			{ $$ = createExpr('/', $1, $3);  }
	| expr '=' expr				{ $$ = createExpr('=', $1, $3);  }
//	|  expr					{ $$ = $1; }
	| '(' expr ')'				{ $$ = $2; }
	| IDENTIFIER				{ $$ = createStr($1); }
	| NUMBER				{ $$ = createNum($1); }
	;

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
