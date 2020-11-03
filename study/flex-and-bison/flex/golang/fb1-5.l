%{
#include "y.tab.h"
int old_status;
%}

%x COMMENT

%%
"if"    { return IF; }
"else"  { return ELSE; }
[+]* { return 0; }
[0-9]+		{ yylval = atoi(yytext); return NUMBER; }
[a-z_A-Z]*  { yylval = yytext;  return IDENTIFIER;  }
"//".*  { }
[ \t]+		{ }
\n		{ return EOL; }

"/*"    { BEGIN COMMENT; }
<COMMENT>"*/"   { ECHO; return 0;}
<COMMENT>"*/"   { ECHO; return 0;}


.		{  }
%%

