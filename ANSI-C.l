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

int nbaccolade = 0;
int lastopenACC;
int lastopenCRO;
int lastopenPAR;

int nbcrochet = 0;
int nbparenthese = 0;

%}

%%
"auto"                  { /* A completer */ }
"break"                 { printf(yytext); return BREAK; }
"case"                  { printf(yytext); return CASE; }
"char"                  { /* A completer */ } 
"const"                 { printf(yytext); return CONSTANTE; } //surement pas la bonne const
"continue"              { /* A completer */ }
"default"               { printf(yytext); return DEFAULT; }
"do"                    { /* A completer */ }
"double"                { /* A completer */ }
"else"                  { printf(yytext); return ELSE; }
"enum"                  { /* A completer */ }
"extern"                { printf(yytext); return EXTERN; }
"float"                 { /* A completer */ }
"for"                   { printf(yytext); return FOR; }
"goto"                  { /* A completer */ }
"if"                    { printf(yytext); return IF; }
"int"                   { printf(yytext); return INT; }
"long"                  { /* A completer */ }
"register"              { /* A completer */ }
"return"                { printf(yytext); return RETURN; }
"short"                 { /* A completer */ }
"signed"                { /* A completer */ }
"sizeof"                { /* A completer */ }
"static"                { /* A completer */ }
"struct"                { /* A completer */ }
"switch"                { printf(yytext); return SWITCH; }
"typedef"               { /* A completer */ }
"union"                 { /* A completer */ }
"unsigned"              { /* A completer */ }
"void"                  { printf(yytext); return VOID;}
"volatile"              { /* A completer */ }
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

"..."                   { /* A completer */ }
">>="                   { /* A completer */ }
"<<="                   { /* A completer */ }
"+="                    { /* A completer */ }
"-="                    { /* A completer */ }
"*="                    { /* A completer */ }
"/="                    { /* A completer */ }
"%="                    { /* A completer */ }
"&="                    { printf(yytext); return BAND; }
"^="                    { /* A completer */ }
"|="                    { printf(yytext); return BOR; }
">>"                    { printf(yytext); return RSHIFT; }
"<<"                    { printf(yytext); return LSHIFT; }
"++"                    { /* A completer */ }
"--"                    { /* A completer */ }
"->"                    { /* A completer */ }
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

(\/\/.*)|(\/\*+(.|[\r\n])*[\*\/]) {printf(yytext);}



\n                        {printf(yytext);  yylineno++;}
[ \t\v\f]                { printf(yytext); }

.                       {printf("erreur ligne %d",yylineno);exit(1);}

%%



