%{
#include <stdio.h>
#include "fb1-5.h"


int yyerror(char *s);
int yyparse();
int yylex ();

%}
//
%union{
	int intval;
	char *strval;
	struct ifNode *in;
	struct ast *node;
	struct paramNode *pn;
	struct funcVariableNode *fvn;
	struct funcStmtNode *fsn;

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
%type <node> con then else_body expr compilation_unit stmt func block
%type <node> param  variable identifier number
%type <pn> params
%type <fvn> variables
%type <fsn> stmts
%type <intval> NUMBER
%type <strval> ADD SUB MUL DIV ABS EOL IF ELSE
%type <strval> calclist factor IDENTIFIER
%type <intval> term

%type <strval> tparam test

//%start compilation_unit

%%

compilation_unit:{}
	| test	EOL			{ printf("test = %s\n", $1); }
//	| IF	EOL		   	{ printf("if = %s\n", $1);	}
//	| ELSE	EOL		   	{ printf("else = %s\n", $1);	}
//	| IF con EOL compilation_unit			{ dump($2); }
	| func EOL			{  newCode($1);				}
	| stmt				{  newCode($1); }
//	| IF con then EOL  		{ $$ = createIfNode($2, $3, NULL);  }
//	| IF con then ELSE else_body EOL  { $$ = createIfNode($2, $3, $5);  }
	;

test:
	| tparam ',' test		{ printf("test=%s\n", $1); $$ = contactStr($1, " ", $3); }
	| tparam			{ $$ = $1; }
	;
tparam:
	| identifier identifier	 { printf("tpamra=%s %s\n", $1->stringValue, $2->stringValue); $$ = contactStr($1->stringValue, " ", $2->stringValue);}
	;

//*createFunction(char *returnType, char *funcName,
//                           struct paramNode *paramListHead, struct ast *funcBody)
func:
	| identifier identifier '(' params ')' block	{ $$ = createFunction($1, $2, $4, $6); }
	;

//void *addToParamNodeList(struct ast *param, struct paramNode *paramNodeListHeader)
params:
	| param ',' params	{ $$ = paramNodeListHeader;}
	| param			{ $$ = paramNodeListHeader;}
	;

//createParam(char *dataType, char *name)
param:
	| identifier identifier	 { struct ast *param = createParam($1, $2);  addToParamNodeList(param, paramNodeListHeader); }
	;

//createBlock(struct funcVariableNode *funcVariableListHead,
//                        struct funcStmtNode *funcStmtsListHead)
block:
//	| '{' block '}'			{ $$ = $2; }
	|  variables stmts block 	{ $$ = createBlock(funcVariableNodeListHeader, funcStmtNodeListHeader); }
	|  '{' variables stmts block '}'	{ $$ = createBlock(funcVariableNodeListHeader, funcStmtNodeListHeader); }
	;

//addToFuncVariableNodeList(struct ast *variable,
//                               struct funcVariableNode *funcVariableListHead)
variables:
	| variable	';'	variables	{ $$ = funcVariableNodeListHeader; }
//	| variable				{ $$ = funcVariableNodeListHeader; }
	;

//createVariable(char *dataType, char *variableName)
variable:
	| identifier identifier			{ struct ast *variable = createVariable($1, $2); addToFuncVariableNodeList(variable, funcVariableNodeListHeader); }
	;

//addToFuncStmtNodeList(struct ast *funcStmtNode,
//                           struct funcStmtNode *funcStmtsListHead)
stmts:
	| stmt stmts			{ addToFuncStmtNodeList($1, funcStmtNodeListHeader); }
	;

stmt:
	| then		{ $$ = $1; }
	| IF con then			{ $$ = createIfNode($2, $3, NULL); }
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
	| '(' expr ')'				{ $$ = $2; }
	| identifier				{ $$ = $1; }
	| number				{ $$ = $1; }
	;

identifier:
	| IDENTIFIER				{ $$ = createStr($1); }
	;

number:
	| NUMBER				{ $$ = createNum($1); }
	;
%%

int main(int argc, char **argv)
{
	init();
	return yyparse();
}

int yyerror(char *s)
{
	fprintf(stderr, "error: %s\n", s);
}
