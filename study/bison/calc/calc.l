%{
#include "y.tab.h"
%}

P_IF if
P_ELSE else




%%
[0-9]+          { yylval.intval = atoi(yytext); return T_NUM; }
{P_IF}             { printf("p = %s\n", yytext);yylval.strval = yytext; return IF;         }
{P_ELSE}             { yylval.strval = yytext; return ELSE;         }
while             { yylval.strval = yytext; return WHILE;         }
[\r\n]*         { return yytext[0]; }
[-/+*()\n]      { return yytext[0]; }
.               { printf("not recginize\n");return 0; /* end when meet everything else */ }
%%

int yywrap(void) {
    return 1;
}