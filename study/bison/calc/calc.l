%{
#include "y.tab.h"
%}

%%
[0-9]+          { yylval.intval = atoi(yytext); return T_NUM; }
if             { yylval.strval = yytext; return IF;         }
else             { yylval.strval = yytext; return ELSE;         }
while             { yylval.strval = yytext; return WHILE;         }
[\r\n]*         { return yytext[0]; }
[-/+*()\n]      { return yytext[0]; }
.               { return 0; /* end when meet everything else */ }
%%

int yywrap(void) {
    return 1;
}