%{
#include "y.tab.h"
int old_status;
%}

%x COMMENT

%%
"if"    { return IF; }
"else"  { return ELSE; }
"+"		{ return ADD; }
"-"		{ return SUB; }
"*"		{ return MUL; }
"/"		{ return DIV; }
[0-9]+		{ yylval = atoi(yytext); return NUMBER; }
"|"		{ return ABS;	}
"("     {  return OP;  }
")"     {  return CP;  }
"//".*  { }
[ \t]+		{ }
\n		{ return EOL; }

"/*"    { BEGIN COMMENT; }
<COMMENT>"*/"   { ECHO; return 0;}


.		{  }
%%

