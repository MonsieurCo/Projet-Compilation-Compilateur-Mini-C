D                       [0-9]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+
FS                      (f|F|l|L)
IS                      (u|U|l|L)*
T                       (D|L|H|E|FS|IS)+
P                       (\(T\) | \{T\} | \[T\] | \(P\) | \{P\} | \[P\])+


%{
#include <stdio.h>
#include "y.tab.h"
// P                       ("("(D|L|H|E|FS|IS)+")"|"{"(D|L|H|E|FS|IS)+"}"|"["(D|L|H|E|FS|IS)+"]")
//"("*")"|"{"*"}"

/* Ne g�re pas les commentaires. A rajouter */
/* Supprimer les lignes dont vous n'avez pas besoin. */


%}

%%
"break"                 { printf(yytext); return BREAK; }
"case"                  { printf(yytext); return CASE; }
"const"                 { printf(yytext); return CONSTANTE; } //surement pas la bonne const
"default"               { printf(yytext); return DEFAULT; }
"else"                  { printf(yytext); return ELSE; }
"extern"                { printf(yytext); return EXTERN; }
"for"                   { printf(yytext); return FOR; }
"if"                    { printf(yytext); return IF; }
"int"                   { printf(yytext); return INT; }
"return"                { printf(yytext); return RETURN; }
"switch"                { printf(yytext); return SWITCH; }
"void"                  { printf(yytext); return VOID;}
"while"                 { printf(yytext); return WHILE;}



{L}({L}|{D})*           { printf(yytext); return IDENTIFICATEUR; }    // surement identificateur 

0[xX]{H}+{IS}?          {printf(yytext); return CONSTANTE;}
0{D}+{IS}?              {printf(yytext); return CONSTANTE;} // surement const
{D}+{IS}?               {printf(yytext); return CONSTANTE; }
L?'(\\.|[^\\'])+'       {/* A completer */ }



{D}+{E}{FS}?            {printf(yytext); return CONSTANTE; }
{D}*"."{D}+({E})?{FS}?  {/* A completer */ } //float ?
{D}+"."{D}*({E})?{FS}?  {/* A completer */ }

L?\"(\\.|[^\\"])*\"     { /* A completer */ }

"+"                     {printf(yytext); return PLUS;}
"-"                     {printf(yytext); return MOINS;}
"*"                     {printf(yytext); return MUL;}
"/"                     {printf(yytext); return DIV;}


"&="                    { printf(yytext); return BAND; }
"|="                    { printf(yytext); return BOR; }
">>"                    { printf(yytext); return RSHIFT; }
"<<"                    { printf(yytext); return LSHIFT; }
"&&"                    { printf(yytext); return LAND; }
"||"                    { printf(yytext); return LOR; }
"<="                    { printf(yytext); return LEQ; }
">="                    { printf(yytext); return GEQ; }
"=="                    { printf(yytext); return EQ; }
"!="                    { printf(yytext); return NEQ; }
">"                     { printf(yytext); return GT; }
"<"                     { printf(yytext); return LT; }
"!"                     {printf(yytext); return NOT;} 


","|";"|":"                 {printf(yytext);return yytext[0]; }
"="                     {printf(yytext);return yytext[0];}


"{" {printf(yytext); return yytext[0];}
"}" {printf(yytext); return yytext[0];}    
"[" {printf(yytext); return yytext[0];}
"]" {printf(yytext); return yytext[0];}
"(" {printf(yytext); return yytext[0];}
")" {printf(yytext); return yytext[0];}

(\/\/.*)|(\/\*+(.|[\r\n])*[\*\/]) {int count = 0;
                                    for (int i=0; yytext[i]; i++){
                                        count += (yytext[i] == '\n');
                                        }
                                    yylineno+=count;
                                    printf(yytext);}



\n                        {printf(yytext);  yylineno++;}
[ \t\v\f]                { printf(yytext); }

.                       {printf("Illegal caracter line: %d\n",yylineno);exit(1);}

%%


