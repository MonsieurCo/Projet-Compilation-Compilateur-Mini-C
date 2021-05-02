%{
#include <stdio.h> 
#include <stdlib.h>
#include  "table.h"


#define TAILLE 103 /* nombre premier de préférence */

extern int chars;




void yyerror (char *s);
void table_reset();
%}

%union{
	int val;
	char* id;
	struct _tree *tree;
}
 
%token <id> IDENTIFICATEUR CONSTANTE 
%token <id> VOID INT FOR WHILE IF ELSE SWITCH CASE DEFAULT
%token <id> BREAK RETURN PLUS MOINS MUL DIV LSHIFT RSHIFT BAND BOR LAND LOR LT GT 
%token <id> GEQ LEQ EQ NEQ NOT EXTERN
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
 
%type <tree> saut selection instruction variable expression condition affectation bloc liste_instructions liste_declarations liste_expressions expr_liste_creator appel
%type<tree> iteration parm 
%type <id> binary_rel binary_comp binary_op type 
%type <tree> liste_declarateurs 
%type <tree> declarateur 
%type <tree> declaration
%type <tree> liste_parms
%type <tree> params_liste_creator
%type <tree> fonction
%type <tree> liste_fonctions	
%type <tree> programme
%type <tree> tableau_variable tableau_declarateur

%%
programme	:	
		liste_declarations liste_fonctions  {$$=initialiseTree("PROGRAM",$2); visualise($2,0,0); writeDot($2);}
;
liste_declarations	:	
		liste_declarations declaration  {$$ = $1; insertSuivant($1,$2);}
	|				{$$ = initialiseTree("...",NULL);}
;
liste_fonctions	:	
		liste_fonctions fonction      {$$ = $1; insertSuivant($1,$2);} 
|               fonction			{$$=$1;}
;
declaration	:	
		type liste_declarateurs ';' {$$=initialiseTree($1,NULL); $$->fil=$2;}
;
liste_declarateurs	:	
		liste_declarateurs ',' declarateur {$$ = $1; insertSuivant($1,$3);}
	|	declarateur  {$$ = $1;}
;
declarateur	:	
		IDENTIFICATEUR   { $$ = initialiseTree($1,NULL);}
	|	tableau_declarateur  { $$=initialiseTree("tab",$1);} 
;
tableau_declarateur:
	IDENTIFICATEUR  {$$ = initialiseTree($1,NULL);}  
	|tableau_declarateur '[' CONSTANTE ']' {$$ = $1; insertSuivant($1,initialiseTree($3,NULL));}
;

fonction	:	
		type IDENTIFICATEUR '(' liste_parms ')' bloc {	char * name;
																		name = (char * ) malloc(15 * sizeof(char));
																		sprintf(name,"%s , %s",$2,$1);
																		$$=initialiseTree(name,$4);insertSuivant($$->fil,$6);
																		$$->typeNode=FONCTION;}
	|	EXTERN type IDENTIFICATEUR '(' liste_parms ')' ';' {$$=initialiseTree("extern",initialiseTree($2,NULL));
															$$->fil->suivants=initialiseTree($3,NULL);
															$$->fil->suivants->fil=$5;
															$$->typeNode=FONCTION;}
;
type	:	
		VOID {$$="void";}
	|	INT {$$ = "int";}
;

params_liste_creator :    //modification de la grammaires en raison des problèmes mis en lumière par le forum
	params_liste_creator ',' parm {$$ = $1; insertSuivant($$,$3);}
	| parm	{$$ =$1;}
;

liste_parms	:	
		params_liste_creator {$$=$1;}
	|				{$$ = initialiseTree("...",NULL);}
;

parm	:	 
		INT IDENTIFICATEUR  {$$=initialiseTree("int",initialiseTree($2,NULL));}
;

liste_instructions :	
		liste_instructions instruction {$$ = $1; insertSuivant($1,$2);}
	|				{$$ = initialiseTree("...",NULL);}
;
instruction	:	
		iteration {$$=$1;}
	|	selection {$$ = $1;}
	|	saut { $$ = $1;}
	|	affectation ';' { $$ = $1;}
	|	bloc {$$=$1;}
	|	appel {$$=$1;}
;
iteration	:	
		FOR '(' affectation ';' condition ';' affectation ')' instruction 	{$$=initialiseTree("FOR",$3); $$->fil->suivants=$5;
																			$$->fil->suivants->suivants=$7;$$->fil->suivants->suivants->suivants=$9;}
	|	WHILE '(' condition ')' instruction {$$=initialiseTree("WHILE",$3); $$->fil->suivants=$5;}
	|   error '\n' {yyerror("reenter last");
                        yyerrok; };
;
selection	:	
		IF '(' condition ')' instruction %prec THEN {$$ = initialiseTree("IF",$3);$$->fil->suivants = $5;}
	|	IF '(' condition ')' instruction ELSE instruction {$$ = initialiseTree("IF",$3);$$->fil->suivants = $5;$$->fil->suivants->suivants = initialiseTree("ELSE",$7);} 
	|	SWITCH '(' expression ')' instruction {$$ = initialiseTree("SWITCH",$3); $$->fil->suivants = $5->fil;}
	|	CASE CONSTANTE ':' liste_instructions selection {$$ = initialiseTree("CASE",initialiseTree($2,NULL)); $$->fil->suivants = $4; $$->suivants=$5;}
	|	DEFAULT ':' instruction {$$ = initialiseTree("DEFAULT",$3);}
;
saut	:	
		BREAK ';' {$$=initialiseTree("BREAK",NULL);}
	|	RETURN ';' {$$ = initialiseTree("return",NULL);}
	|	RETURN expression ';' {$$ = initialiseTree("RETURN",$2);}
;
affectation	:	 
		variable '=' expression  {$$ = initialiseTree(":=",$1);$$->fil->suivants = $3;} 
;
bloc	:	
		'{' liste_declarations liste_instructions '}' {if (sizeFils($3) <= 2){ $$ = $3;
													}else{		$$ = initialiseTree("BLOC",$3);}}
;
appel	:	//forme a faire
	IDENTIFICATEUR '(' liste_expressions ')' ';' {$$=initialiseTree($1,$3);$$->typeNode=APPEL;}
;
variable	:	
		IDENTIFICATEUR  {$$ = initialiseTree($1,NULL);}  
	|	tableau_variable { $$=initialiseTree("TAB",$1);}
;
tableau_variable	:
	IDENTIFICATEUR  {$$ = initialiseTree($1,NULL);}  
	|tableau_variable '[' expression ']' {$$ = $1; insertSuivant($$,$3);}
;
expression	:	
		'(' expression ')'	{$$ = $2;}                       
	
	|	expression PLUS expression	{$$ = initialiseTree("+",$1); $$->fil->suivants = $3;} 
	|	expression MOINS expression	{$$ = initialiseTree("-",$1); $$->fil->suivants = $3;} 			
	|	expression DIV expression{$$ = initialiseTree("/",$1); $$->fil->suivants = $3;} 				
	|	expression MUL expression	{$$ = initialiseTree("*",$1); $$->fil->suivants = $3;} 			
	|	expression RSHIFT expression	{$$ = initialiseTree(">>",$1); $$->fil->suivants = $3;}  			
	|	expression LSHIFT expression	{$$ = initialiseTree("<<",$1); $$->fil->suivants = $3;} 			
	|	expression BAND expression	{$$ = initialiseTree("&=",$1); $$->fil->suivants = $3;} 			
	|	expression BOR expression	{$$ = initialiseTree("|=",$1); $$->fil->suivants = $3;} 			
	|	MOINS expression %prec MUL	{$$ = initialiseTree("-",$2);}                                   
	|	CONSTANTE       {$$ = initialiseTree($1,NULL);}                                                 							
	|	variable	 {$$ =  $1;}                                 
	|	IDENTIFICATEUR '(' liste_expressions ')' {$$ = initialiseTree($1,$3); $$->typeNode=APPEL;}                                  
;
//cf correction de Fissore Davide merci à lui 
liste_expressions :      // pour accepter epsilon ou une liste d'expressions
    expr_liste_creator {$$ = $1;}
    | 			{$$ = initialiseTree("...",NULL);}
;
expr_liste_creator :                         // création de la liste d'expressions valide
    expr_liste_creator ',' expression {$$ = $1 ;insertSuivant($$,$3);} // liste à n éléments
    | expression                   {$$=$1;}           // liste à un seul élément
;
condition	:	
		NOT '(' condition ')' {$$ = initialiseTree("not",$3);}
	|	condition binary_rel condition %prec REL {$$ = initialiseTree($2,$1); $$->fil->suivants = $3;}
	|	'(' condition ')' { $$ = $2;}
	|	expression LT expression {$$ = initialiseTree("<",$1); $$->fil->suivants = $3;}
	|	expression GT expression {$$ = initialiseTree(">",$1); $$->fil->suivants = $3;}
	|	expression GEQ expression {$$ = initialiseTree(">=",$1); $$->fil->suivants = $3;}
	|	expression LEQ expression {$$ = initialiseTree("<=",$1); $$->fil->suivants = $3;}
	|	expression EQ expression {$$ = initialiseTree("==",$1); $$->fil->suivants = $3;}
	|	expression NEQ expression {$$ = initialiseTree("!=",$1); $$->fil->suivants = $3;}
;
binary_op	:	
		PLUS  {$$="+";}
	|   MOINS	{$$="-";} 
	|	MUL	{$$="*";}
	|	DIV	{$$ = "/";}
	|   LSHIFT	{$$ = "<<";}
	|   RSHIFT	{$$ = ">>"; }
	|	BAND	{$$="&=";}
	|	BOR	{$$="|=";}
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
	|	EQ	{$$ = "=="; }
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


