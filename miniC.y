%{
#include <stdio.h> 
#include <stdlib.h>
#include  "table.h"


#define TAILLE 103 /* nombre premier de préférence */

extern int chars;




void yyerror (char *s);
void table_reset();
//struct tree *t;
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


%type <id> binary_rel
%type <id> binary_comp
%type <id> binary_op
%type <id> type
%type <tree> expression
%type <tree> variable 
%type <tree> affectation
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
		liste_declarations liste_fonctions  {}
;
liste_declarations	:	
		liste_declarations declaration  {}
	|				{}
;
liste_fonctions	:	
		liste_fonctions fonction      {} 
|               fonction			{}
;
declaration	:	
		type liste_declarateurs ';' {}
;
liste_declarateurs	:	
		liste_declarateurs ',' declarateur {}//{$$ = strcat($1,strcat(",",$3));}
	|	declarateur  {}
;
declarateur	:	
		IDENTIFICATEUR   { $$ = IDENTIFICATEUR;}
	|	declarateur '[' CONSTANTE ']'  {}  
;
fonction	:	
		type IDENTIFICATEUR '(' liste_parms ')' '{' liste_declarations liste_instructions '}' {}
	|	EXTERN type IDENTIFICATEUR '(' liste_parms ')' ';' {}
;
type	:	
		VOID {}
	|	INT {}
;

params_liste_creator :    //modification de la grammaires en raison des problèmes mis en lumière par le forum
	params_liste_creator ',' parm {}
	| parm	{}
;

liste_parms	:	
		params_liste_creator {}
	|				{}
;

parm	:	 
		INT IDENTIFICATEUR  {}
;

liste_instructions :	
		liste_instructions instruction {}
	|				{}
;
instruction	:	
		iteration {}
	|	selection {}
	|	saut {}
	|	affectation ';' {}
	|	bloc {}
	|	appel {}
;
iteration	:	
		FOR '(' affectation ';' condition ';' affectation ')' instruction 	{}
	|	WHILE '(' condition ')' instruction {}
	|   error '\n' {yyerror("reenter last");
                        yyerrok; };
;
selection	:	
		IF '(' condition ')' instruction %prec THEN {}
	|	IF '(' condition ')' instruction ELSE instruction {}
	|	SWITCH '(' expression ')' instruction {}
	|	CASE CONSTANTE ':' instruction {}
	|	DEFAULT ':' instruction {}
;
saut	:	
		BREAK ';' {}
	|	RETURN ';' {}
	|	RETURN expression ';' {}
;
affectation	:	 
		variable '=' expression  {printf(" %s =  %s %s %s\n ",$1->nom,$3->fil->nom,$3->nom,$3->fil->suivants->nom);} // {	struct Tree t = initialiseTree("=");t->fil = $1 ;t->fil->suivants = $2; $$ =t;}
;
bloc	:	
		'{' liste_declarations liste_instructions '}' {}
;
appel	:	
		IDENTIFICATEUR '(' liste_expressions ')' ';' {}
;
variable	:	
		IDENTIFICATEUR  {$$ = initialiseTree($1,NULL);}  //$$ = "0";
	|	variable '[' expression ']' {}
;
expression	:	
		'(' expression ')'	{$$ = $2;}                       
	|	expression binary_op expression %prec OP	{$$ = initialiseTree($2,$1); $$->fil->suivants = $3;} //t->fil->suivants = $3; 
	|	MOINS expression	{$$ = initialiseTree("-",$2);}                                   
	|	CONSTANTE       {$$ = initialiseTree($1,NULL);}                                                 							
	|	variable	 {$$ =  $1;}                                  
	|	IDENTIFICATEUR '(' liste_expressions ')' {$$ = initialiseTree(NULL,NULL);}                                  
;
//cf correction de Fissore Davide merci à lui 
liste_expressions :      // pour accepter epsilon ou une liste d'expressions
    expr_liste_creator {}
    | 			{}
;
expr_liste_creator :                         // création de la liste d'expressions valide
    expr_liste_creator ',' expression {} // liste à n éléments
    | expression                   {}           // liste à un seul élément
;
condition	:	
		NOT '(' condition ')' {}
	|	condition binary_rel condition %prec REL {}
	|	'(' condition ')' {}
	|	expression binary_comp expression {}
;
binary_op	:	
		PLUS  {$$="+";}// $$ = new node(nom=PLUS, fils=[null]) struct tree t = initialiseTree($1); 
	|   MOINS	{$$="-";}
	|	MUL	{$$="*";}
	|	DIV	{$$ = "/";}
	|   LSHIFT	{$$ = "<<";}
	|   RSHIFT	{$$ = ">>"; }
	|	BAND	{$$="|=";}
	|	BOR	{$$="&=";}
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


