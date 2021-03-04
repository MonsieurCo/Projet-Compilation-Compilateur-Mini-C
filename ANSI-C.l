D                       [0-9]
L                       [a-zA-Z_]
H                       [a-fA-F0-9]
E                       [Ee][+-]?{D}+
FS                      (f|F|l|L)
IS                      (u|U|l|L)*

%{
#include <stdio.h>
#include "y.tab.h"


/* Ne g�re pas les commentaires. A rajouter */
/* Supprimer les lignes dont vous n'avez pas besoin. */

%}

%%
"auto"                  { /* A completer */ }
"break"                 { return BREAK; }
"case"                  { return CASE; }
"char"                  { /* A completer */ } 
"const"                 { return CONSTANTE; } //surement pas la bonne const
"continue"              { /* A completer */ }
"default"               { return DEFAULT; }
"do"                    { /* A completer */ }
"double"                { /* A completer */ }
"else"                  { return ELSE; }
"enum"                  { /* A completer */ }
"extern"                { /* A completer */ }
"float"                 { /* A completer */ }
"for"                   { return FOR; }
"goto"                  { /* A completer */ }
"if"                    { return IF; }
"int"                   { return INT; }
"long"                  { /* A completer */ }
"register"              { /* A completer */ }
"return"                { return RETURN; }
"short"                 { /* A completer */ }
"signed"                { /* A completer */ }
"sizeof"                { /* A completer */ }
"static"                { /* A completer */ }
"struct"                { /* A completer */ }
"switch"                { return SWITCH; }
"typedef"               { /* A completer */ }
"union"                 { /* A completer */ }
"unsigned"              { /* A completer */ }
"void"                  { return VOID;}
"volatile"              { /* A completer */ }
"while"                 { return WHILE;}

{L}({L}|{D})*           { return IDENTIFICATEUR; }    // surement identificateur 

0[xX]{H}+{IS}?          { printf(yytext);/* A completer */ }
0{D}+{IS}?              { printf(yytext);/* A completer */ } // surement const
{D}+{IS}?               { printf(yytext);/* A completer */ }
L?'(\\.|[^\\'])+'       { printf(yytext);/* A completer */ }

{D}+{E}{FS}?            { printf(yytext);/* A completer */ }
{D}*"."{D}+({E})?{FS}?  { printf(yytext);/* A completer */ } //float ?
{D}+"."{D}*({E})?{FS}?  { printf(yytext);/* A completer */ }

L?\"(\\.|[^\\"])*\"     { /* A completer */ }

"..."                   { /* A completer */ }
">>="                   { /* A completer */ }
"<<="                   { /* A completer */ }
"+="                    { /* A completer */ }
"-="                    { /* A completer */ }
"*="                    { /* A completer */ }
"/="                    { /* A completer */ }
"%="                    { /* A completer */ }
"&="                    { return BAND; }
"^="                    { /* A completer */ }
"|="                    { return BOR; }
">>"                    { return RSHIFT; }
"<<"                    { return LSHIFT; }
"++"                    { /* A completer */ }
"--"                    { /* A completer */ }
"->"                    { /* A completer */ }
"&&"                    { return LAND; }
"||"                    { return LOR; }
"<="                    { return LEQ; }
">="                    { return GEQ; }
"=="                    { return EQ; }
"!="                    { return NEQ; }

[ \t\v\n\f]             { return yytext; }
.                       { return ; }
%%



