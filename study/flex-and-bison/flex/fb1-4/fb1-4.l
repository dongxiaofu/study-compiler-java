%{
	enum yytokentype{
		NUMBER = 258,
		ADD = 259,
		SUB = 260,
		TIMES = 261,
		DIV = 262,
		EOL = 263
	};
	int yylval;
%}

%%
"+"		{ return ADD; }
"-"		{ return SUB; }
"*"		{ return TIMES; }
"/"		{ return DIV; }
[0-9]+		{ return NUMBER; }
"[ \t]+"	{ }
\n		{ return EOL; }
.		{ printf("invalid string: %s\n", yytext); }
%%

int main(int argc, char **argv)
{
	int tok;
	while(tok = yylex()){
		printf("%d", tok);
		if(tok == NUMBER) printf(" = %s\n", yytext);
		else printf("\n");
	}
	return 0;
}
