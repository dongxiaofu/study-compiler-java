%{
#include "y.tab.h"
int old_status;
%}

%x COMMENT

%%
"if"    { yylval.strval = strdup(yytext); return IF; }
"else"  { yylval.strval = strdup(yytext); return ELSE; }
"+" |
"-" |
"*" |
"/" |
"|" |
"(" |
")" |
"=" |
"{" |
"}" |
"," |
";"    {  return yytext[0]; }
[0-9]+		{ yylval.intval = atoi(yytext); return NUMBER; }
[$a-z_A-Z]*  { yylval.strval = strdup(yytext);  return IDENTIFIER;  }
"//".*  { }
"##"        { return EOL; }
[ \t]+		{ }
[\r\n]		{  }
    /*       [\r\n] { return EOL; }      */

.		{  }
%%

