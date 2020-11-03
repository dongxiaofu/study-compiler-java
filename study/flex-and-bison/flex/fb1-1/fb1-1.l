%{
int lines = 0;
int chars = 0;
int words = 0;
int leftBrackets = 0;
int rightBrackets = 0;
%}

%%
[a-zA-Z_]+               {words++;chars += strlen(yytext);}
\{                       { leftBrackets++;  }
\}                       { rightBrackets++; }
[\n]                    {lines++;}
.                       {chars++;}
%%

int main(int argc, char **argv)
{
    yylex();
    printf("%d %d %d%8d%8d\n", words, chars, lines, leftBrackets, rightBrackets);

    return 0;
}
