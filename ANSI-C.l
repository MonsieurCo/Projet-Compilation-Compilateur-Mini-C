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
"break"                 {  return BREAK; }
"case"                  {  return CASE; }
"const"                 { /* return CONSTANTE; */} //surement pas la bonne const
"default"               {  return DEFAULT; }
"else"                  {  return ELSE; }
"extern"                {  return EXTERN; }
"for"                   {  return FOR; }
"if"                    {  return IF; }
"int"                   {  return INT; }
"return"                {  return RETURN; }
"switch"                {  return SWITCH; }
"void"                  {  return VOID;}
"while"                 {  return WHILE;}



{L}({L}|{D})*           {yylval.id = strdup(yytext); return IDENTIFICATEUR; }    // surement identificateur yylval.id = strdup(yytext);

0[xX]{H}+{IS}?          {yylval.id = strdup(yytext); return CONSTANTE;} 
0{D}+{IS}?              {yylval.id = strdup(yytext); return CONSTANTE;} // surement const  yylval.val = atoi(yytext);
{D}+{IS}?               {yylval.id = strdup(yytext); return CONSTANTE; }
L?'(\\.|[^\\'])+'       {/* A completer */ }



{D}+{E}{FS}?            {yylval.id = strdup(yytext);return CONSTANTE; }
{D}*"."{D}+({E})?{FS}?  {/* A completer */ } //float ?
{D}+"."{D}*({E})?{FS}?  {/* A completer */ }

L?\"(\\.|[^\\"])*\"     { /* A completer */ }

"+"                     {return PLUS;}
"-"                     { return MOINS;}
"*"                     { return MUL;}
"/"                     { return DIV;}


"&="                    {  return BAND; }
"|="                    {  return BOR; }
">>"                    {  return RSHIFT; }
"<<"                    {  return LSHIFT; }
"&&"                    {  return LAND; }
"||"                    {  return LOR; }
"<="                    {  return LEQ; }
">="                    {  return GEQ; }
"=="                    {  return EQ; }
"!="                    {  return NEQ; }
">"                     {  return GT; }
"<"                     {  return LT; }
"!"                     {  return NOT;} 


","|";"|":"                 {return yytext[0]; }
"="                     {return yytext[0];}


"{" { return yytext[0];}
"}" { return yytext[0];}    
"[" { return yytext[0];}
"]" { return yytext[0];}
"(" { return yytext[0];}
")" { return yytext[0];}

(\/\/.*)|(\/\*+(.|[\r\n])*[\*\/]) {int count = 0;
                                    for (int i=0; yytext[i]; i++){
                                        count += (yytext[i] == '\n');
                                        }
                                    yylineno+=count;
                                    }



\n                        {  yylineno++;}
[ \t\v\f]                {  }

.                       {printf("Illegal caracter line: %d\n",yylineno);exit(1);}

%%


