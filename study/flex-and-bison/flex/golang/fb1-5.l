%{
#include "y.tab.h"
int old_status;
%}

%x COMMENT

%%
"if"    { yylval.strval = strdup(yytext); return IF; }
"else"  { yylval.strval = strdup(yytext); return ELSE; }
"while"  { yylval.strval = strdup(yytext); return WHILE; }
"do"  { yylval.strval = strdup(yytext); return DO; }
"return"  { yylval.strval = strdup(yytext); return RETURN; }
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
":" |
"%" |  {  return SPECIAL_CHAR; };
[0-9]+		{ yylval.intval = atoi(yytext); return NUMBER; }
[$a-z_A-Z*]*  { yylval.strval = strdup(yytext);  return IDENTIFIER;  }
[a-z_A-Z0-9:%=\\n]*  { yylval.strval = strdup(yytext);  return STR;  }
"//".*  { }
"##"        { return EOL; }
[ \t]+		{ }
[\r\n]		{  }
    /*       [\r\n] { return EOL; }      */

.		{  }
%%

