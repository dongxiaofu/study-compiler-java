%{
#include <stdio.h>
#include "fb1-5.h"

int yydebug=1;

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
	struct exprNode *en;
//	ExprNode *en;

}

//%token <intval> NUMBER
//%token <strval> ADD SUB MUL DIV ABS
//%token <strval> EOL


%token  NUMBER
%token ADD SUB MUL DIV ABS
%token  EOL
%token OP CP IF ELSE WHILE DO
%token COMMENT
%token IDENTIFIER

//%type <str1> expr
%type <node> con expr compilation_unit stmt func block while_stmt if_stmt do_while_stmt
%type <node> param  variable identifier number
%type <pn> params
%type <fvn> variables
%type <en> then_exprs else_exprs else_body then
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
	| func EOL			{ printf("code=%s\n", newCode($1));			}
	| stmt EOL				{  newCode($1); }
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
	|  variables stmts block 	{ $$ = createBlock(funcVariableNodeListHeader, $2); }
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
	| stmt stmts			{ $$ =  funcStmtNodeListHeader; }
	;

stmt:
	| if_stmt			{ $$ = $1; }
	| while_stmt			{ $$ = $1; }
	| do_while_stmt			{ $$ = $1; }
	;

while_stmt:
	| WHILE con then		{ struct ast *stmt = (struct ast *)createWhileNode($2, $3); addToFuncStmtNodeList(stmt); }
	;

do_while_stmt:
	| DO then WHILE con ';'		{ struct ast *stmt = (struct ast *)createDoWhileNode($4, $2); addToFuncStmtNodeList(stmt); }
	;

if_stmt:
	| IF con then			{  struct ast *stmt = createIfNode($2, $3, NULL); addToFuncStmtNodeList(stmt); }
	| IF con then ELSE else_body	{ struct ast *stmt  = createIfNode($2, $3, $5); addToFuncStmtNodeList(stmt); }
	;

con:							{}
	| expr						{ $$ = createCon( $1);}

//	| '(' IDENTIFIER '=' NUMBER	')'		{ $$ = createCon('+', $2, $4); }
//	| '(' IDENTIFIER '=' IDENTIFIER	')'		{ $$ = createCon('='); }
	;
//
then:
//	| '{' then_exprs '}'				{ $$ = $2; }
	| '{' then_exprs '}'				{ $$ = thenExprNodeListHeader; }
//	| exprs					{ $$ = $1; printf("exprs = %s\n", $1); }
	;

//
else_body:
//	| '{' else_exprs '}'				{  }
	| '{' else_exprs '}'				{ $$ = elseExprNodeListHeader; }
//	| exprs					{ $$ = $1; printf("exprs = %s\n", $1); }
	;

then_exprs:
	| expr ';' then_exprs			{  addToThenExprNodeList($1, thenExprNodeListHeader); }
	| expr ';' 				{  addToThenExprNodeList($1, thenExprNodeListHeader); }
//	| expr ';' then_exprs			{    }
//	| expr ';'				{    }
	;

else_exprs:
	| expr ';' else_exprs			{  addToElseExprNodeList($1, elseExprNodeListHeader); }
//	| expr ';' else_exprs			{   }
	;


expr:
	| expr	'+'  expr			{ $$ = createExpr('+', $1, $3);  }
	| expr '-'  expr			{ $$ = createExpr('-', $1, $3);  }
	| expr '*'  expr			{ $$ = createExpr('*', $1, $3);  }
	| expr '/'  expr			{ $$ = createExpr('/', $1, $3);  }
	| expr '=' expr				{ $$ = createExpr('=', $1, $3);  }
//	| expr '=' expr				{ $$ = createExpr('=', $1, $3);  }
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
