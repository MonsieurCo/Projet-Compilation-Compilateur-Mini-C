%{
#include <stdio.h> 
#include <stdlib.h>
#include <stdio.h> "table.h"


#define TAILLE 103 /* nombre premier de préférence */

extern int chars;


void yyerror (char *s);
void table_reset();
%}

%union{
	int val;
	char* id;
}
 

%token VOID INT 
%token PLUS MOINS MUL DIV LSHIFT RSHIFT BAND BOR LAND LOR LT GT 
%token GEQ LEQ EQ NEQ
%left PLUS MOINS
%left MUL DIV
%left LSHIFT RSHIFT
%left BOR BAND
%left LAND LOR
%nonassoc THEN
%nonassoc ELSE
%left OP
%left REL
%start programme

%token <id> WHILE
%token <id> FOR
%token <id> IF
%token <id> THEN
%token <id> ELSE
%token <id> NOT 
%token <id> IDENTIFICATEUR
%token <id> CONSTANTE
%token <id> BREAK
%token <id> RETURN
%token <id> DEFAULT
%token <id> CASE
%token <id> SWITCH
%token <id> EXTERN

%type <id> binary_rel
%type <id> binary_comp
%type <id> binary_op
%type <id> type
%type <id> expression
%type <id> variable 
%type <id> affectation
%type <id> condition
%type <id> parm
%type <id> appel
%type <id> bloc
%type <id> saut
%type <id> selection
%type <id> iteration
%type <id> liste_declarateurs 
%type <id> declarateur 
%type <id> instruction
%type <id> declaration
%type <id> expr_liste_creator
%type <id> liste_expressions
%type <id> liste_instructions
%type <id> liste_parms
%type <id> params_liste_creator
%type <id> fonction
%type <id> liste_fonctions	
%type <id> liste_declarations
%type <id> programme


%%
programme	:	
		liste_declarations liste_fonctions  {$$=$1;}
;
liste_declarations	:	
		liste_declarations declaration  {$$=$2;}
	|				{$$=" ";}
;
liste_fonctions	:	
		liste_fonctions fonction      {$$=$1;} 
|               fonction			{$$=$1;}
;
declaration	:	
		type liste_declarateurs ';' {$$ = $1;}
;
liste_declarateurs	:	
		liste_declarateurs ',' declarateur {$$=$1;}//{$$ = strcat($1,strcat(",",$3));}
	|	declarateur  {$$ = $1; }
;
declarateur	:	
		IDENTIFICATEUR   { $$ = $1;}
	|	declarateur '[' CONSTANTE ']'  {$$="0";}  
;
fonction	:	
		type IDENTIFICATEUR '(' liste_parms ')' '{' liste_declarations liste_instructions '}' {$$=$1;}
	|	EXTERN type IDENTIFICATEUR '(' liste_parms ')' ';' {$$=EXTERN;}
;
type	:	
		VOID {$$ = "void";}
	|	INT {$$ = "int";}
;

params_liste_creator :    //modification de la grammaires en raison des problèmes mis en lumière par le forum
	params_liste_creator ',' parm {$$=$3;}
	| parm	{$$=$1;}
;

liste_parms	:	
		params_liste_creator {$$=$1;}
	|				{$$=" ";}
;

parm	:	 
		INT IDENTIFICATEUR  {$$ = $2;}
;

liste_instructions :	
		liste_instructions instruction {$$=$2;}
	|				{$$=" ";}
;
instruction	:	
		iteration {$$=$1;}
	|	selection {$$=$1;}
	|	saut {$$=$1;}
	|	affectation ';' {$$=$1;}
	|	bloc {$$=$1;}
	|	appel {$$=$1;}
;
iteration	:	
		FOR '(' affectation ';' condition ';' affectation ')' instruction 	{$$=FOR;}
	|	WHILE '(' condition ')' instruction {$$= WHILE;}
	|   error '\n' {yyerror("reenter last");
                        yyerrok; };
;
selection	:	
		IF '(' condition ')' instruction %prec THEN {$$=IF;}
	|	IF '(' condition ')' instruction ELSE instruction {$$=ELSE;}
	|	SWITCH '(' expression ')' instruction {$$=SWITCH;}
	|	CASE CONSTANTE ':' instruction {$$=CASE;}
	|	DEFAULT ':' instruction {$$=DEFAULT;}
;
saut	:	
		BREAK ';' {$$=BREAK;}
	|	RETURN ';' {$$=RETURN;}
	|	RETURN expression ';' {$$=RETURN;}
;
affectation	:	 
		variable '=' expression   {$$ = $3;}
;
bloc	:	
		'{' liste_declarations liste_instructions '}' {$$="0";}
;
appel	:	
		IDENTIFICATEUR '(' liste_expressions ')' ';' {$$=$1;}
;
variable	:	
		IDENTIFICATEUR  {$$ = $1;}
	|	variable '[' expression ']' {$$ ="0";/* $$ = $1[$3] ;*/}
;
expression	:	
		'(' expression ')'	{$$ = $2;}                      
	|	expression binary_op expression %prec OP	{$$="0";}
	|	MOINS expression	{$$ = $2;}                                   
	|	CONSTANTE       {$$=$1;}                                                  							
	|	variable	 {$$ = $1;}                                 
	|	IDENTIFICATEUR '(' liste_expressions ')' {$$ = $1;}                                  
;
//cf correction de Fissore Davide merci à lui 
liste_expressions :      // pour accepter epsilon ou une liste d'expressions
    expr_liste_creator {$$=$1;}
    | 			{$$=" ";}
;
expr_liste_creator :                         // création de la liste d'expressions valide
    expr_liste_creator ',' expression {$$=$1;} // liste à n éléments
    | expression                   {$$=$1;}           // liste à un seul élément
;
condition	:	
		NOT '(' condition ')' {printf("!%s",$3);$$ = $3;}
	|	condition binary_rel condition %prec REL {$$="0";}
	|	'(' condition ')' {printf("(%s)",$2); $$ = $2;}
	|	expression binary_comp expression {$$ = $1;}
;
binary_op	:	
		PLUS  {$$ = "+"; }
	|   MOINS	{$$ = "-"; }
	|	MUL	{$$ = "*"; }
	|	DIV	{$$ = "/"; }
	|   LSHIFT	{$$ = "<<"; }
	|   RSHIFT	{$$ = ">>"; }
	|	BAND	{$$ = "&="; }
	|	BOR	{$$ = "|="; }
;
binary_rel	:	
		LAND {$$ = "&&"; }
	|	LOR	{$$ = "||"; }
;
binary_comp	:	
		LT	{$$ = "<"; }
	|	GT	{$$ = ">"; }
	|	GEQ	{$$ = ">="; }
	|	LEQ	{$$ = "<="; }
	|	EQ	{$$ = "="; }
	|	NEQ	{$$ = "!="; }
;

%%



extern int yylineno;
void yyerror(char *s){
	 fprintf(stderr, " line %d: %s\n", yylineno, s);
	 exit(1);
}

int yywrap() {
	return 1;
} 
int main(void) {
	//table_reset();
	while(yyparse());
}


