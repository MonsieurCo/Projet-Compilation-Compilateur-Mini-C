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
 
%type <tree> saut selection instruction variable expression condition affectation bloc liste_instructions liste_declarations liste_expressions expr_liste_creator appel
%type<tree> iteration
%type <id> binary_rel binary_comp binary_op type parm 
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
		liste_declarations liste_fonctions  {$$=initialiseTree("coucou",$1); $$->fil->suivants=reverse($2); visualise($$,0,0);writeDot($$);} //; visualise($$,0,0)
;
liste_declarations	:	
		liste_declarations declaration  {$$ = $2; $$->suivants = $1;}
	|				{$$ = initialiseTree("...",NULL);}
;
liste_fonctions	:	
		liste_fonctions fonction      {$$ = $2; $$->suivants = $1;} 
|               fonction			{$$=$1;}
;
declaration	:	
		type liste_declarateurs ';' {$$=initialiseTree($1,NULL); $$->fil=reverse($2);}
;
liste_declarateurs	:	
		liste_declarateurs ',' declarateur {$$ = $3; $$->suivants = $1;}//{$$ = strcat($1,strcat(",",$3));}
	|	declarateur  {$$ = $1;}
;
declarateur	:	
		IDENTIFICATEUR   { $$ = initialiseTree($1,NULL);}
	|	tableau_declarateur  { $$=initialiseTree("tab",reverse($1));}  //declarateur '[' CONSTANTE ']' 
;
tableau_declarateur:
	IDENTIFICATEUR  {$$ = initialiseTree($1,NULL);}  
	|tableau_declarateur '[' CONSTANTE ']' {$$ = initialiseTree($3,NULL); $$->suivants = $1;}
;

fonction	:	
		type IDENTIFICATEUR '(' liste_parms ')' '{' liste_declarations liste_instructions '}' {$$=initialiseTree("pomme",$4);$$->fil->suivants=reverse($7);$$->fil->suivants->suivants=reverse($8);}
	|	EXTERN type IDENTIFICATEUR '(' liste_parms ')' ';' {$$=initialiseTree("extern",$2);$$->fil->suivants=$3;$$->fil->suivants->suivants=$5;}
;
type	:	
		VOID {$$="void";}
	|	INT {$$ = "int";}
;

params_liste_creator :    //modification de la grammaires en raison des problèmes mis en lumière par le forum
	params_liste_creator ',' parm {$$ = $3; $$->suivants = $1;}
	| parm	{$$ = initialiseTree($1,NULL);}
;

liste_parms	:	
		params_liste_creator {$$=reverse($1);}
	|				{$$ = initialiseTree("...",NULL);}
;

parm	:	 
		INT IDENTIFICATEUR  {$$=initialiseTree("int",initialiseTree($2,NULL));}
;

liste_instructions :	
		liste_instructions instruction {$$ = $2; $$->suivants = $1;}
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
		FOR '(' affectation ';' condition ';' affectation ')' instruction 	{$$=initialiseTree("for",$3); $$->fil->suivants=$5;$$->fil->suivants->suivants=$7;$$->fil->suivants->suivants->suivants=$9;}
	|	WHILE '(' condition ')' instruction {$$=initialiseTree("while",$3); $$->fil->suivants=$5;}
	|   error '\n' {yyerror("reenter last");
                        yyerrok; };
;
selection	:	
		IF '(' condition ')' instruction %prec THEN {$$ = initialiseTree("if",$3);$$->fil->suivants = $5;}
	|	IF '(' condition ')' instruction ELSE instruction {$$ = initialiseTree("if",$3);$$->fil->suivants = $5;$$->fil->suivants->suivants = initialiseTree("else",$7);} 
	|	SWITCH '(' expression ')' instruction {$$ = initialiseTree("switch",$3); $$->fil->suivants = $5;}
	|	CASE CONSTANTE ':' instruction {$$ = initialiseTree("case",$1); $$->fil->suivants = $4;}//
	|	DEFAULT ':' instruction {$$ = initialiseTree("default",$3);}
;
saut	:	
		BREAK ';' {$$=initialiseTree("break",NULL);}
	|	RETURN ';' {$$ = initialiseTree("return",NULL);}
	|	RETURN expression ';' {$$ = initialiseTree("return",$2);}
;
affectation	:	 
		variable '=' expression  {$$ = initialiseTree("=",$1);$$->fil->suivants = $3;} // {	struct Tree t = initialiseTree("=");t->fil = $1 ;t->fil->suivants = $2; $$ =t;}
;
bloc	:	
		'{' liste_declarations liste_instructions '}' { $$ = initialiseTree("bloc",initialiseTree("decla",NULL)); ;$$->fil->suivants = reverse($3);}
;
appel	:	
		IDENTIFICATEUR '(' liste_expressions ')' ';' {$$=initialiseTree($1,NULL);$$->fil=reverse($3);}
;
variable	:	
		IDENTIFICATEUR  {$$ = initialiseTree($1,NULL);}  
	|	tableau_variable { $$=initialiseTree("tab",reverse($1));}
;
tableau_variable	:
	IDENTIFICATEUR  {$$ = initialiseTree($1,NULL);}  
	|tableau_variable '[' expression ']' {$$ = $3; $$->suivants = $1;}
;
expression	:	
		'(' expression ')'	{$$ = $2;}                       
	
	|	expression PLUS expression	{$$ = initialiseTree("+",$1); $$->fil->suivants = $3;} //t->fil->suivants = $3; 
	|	expression MOINS expression	{$$ = initialiseTree("-",$1); $$->fil->suivants = $3;} //t->fil->suivants = $3; 			
	|	expression DIV expression{$$ = initialiseTree("/",$1); $$->fil->suivants = $3;} //t->fil->suivants = $3; 				
	|	expression MUL expression	{$$ = initialiseTree("*",$1); $$->fil->suivants = $3;} //t->fil->suivants = $3; 			
	|	expression RSHIFT expression	{$$ = initialiseTree(">>",$1); $$->fil->suivants = $3;} //t->fil->suivants = $3; 			
	|	expression LSHIFT expression	{$$ = initialiseTree("<<",$1); $$->fil->suivants = $3;} //t->fil->suivants = $3; 			
	|	expression BAND expression	{$$ = initialiseTree("&=",$1); $$->fil->suivants = $3;} //t->fil->suivants = $3; 			
	|	expression BOR expression	{$$ = initialiseTree("|=",$1); $$->fil->suivants = $3;} //t->fil->suivants = $3; 			
	|	MOINS expression %prec MUL	{$$ = initialiseTree("-",$2);}                                   
	|	CONSTANTE       {$$ = initialiseTree($1,NULL);}                                                 							
	|	variable	 {$$ =  $1;}                                  
	|	IDENTIFICATEUR '(' liste_expressions ')' {$$ = initialiseTree(NULL,NULL);}                                  
;
//cf correction de Fissore Davide merci à lui 
liste_expressions :      // pour accepter epsilon ou une liste d'expressions
    expr_liste_creator {$$ = $1;}
    | 			{$$ = initialiseTree("...",NULL);}
;
expr_liste_creator :                         // création de la liste d'expressions valide
    expr_liste_creator ',' expression {$$ = $3; $$->suivants = $1;} // liste à n éléments
    | expression                   {$$=$1;}           // liste à un seul élément
;
condition	:	
		NOT '(' condition ')' {$$ = initialiseTree("not",$3);}
	|	condition binary_rel condition %prec REL {$$ = initialiseTree($2,$1); $$->fil->suivants = $3;}
	|	'(' condition ')' { $$ = $2;}
	|	expression binary_comp expression {$$ = initialiseTree($2,$1); $$->fil->suivants = $3;}
;
binary_op	:	
		PLUS  {$$="+";}// $$ = new node(nom=PLUS, fils=[null]) struct tree t = initialiseTree($1); 
	|   MOINS	{$$="-";} // void visualise(tree *t) printf("-"); printf("*"); printf("/"); printf("<<"); printf(">>"); printf("|="); printf("&="); printf("&&"); printf("<");
	|	MUL	{$$="*";}
	|	DIV	{$$ = "/";}
	|   LSHIFT	{$$ = "<<";}
	|   RSHIFT	{$$ = ">>"; }
	|	BAND	{$$="&=";}
	|	BOR	{$$="|=";}
;
binary_rel	:	
		LAND {$$ = "&&"; } 
	|	LOR	{$$ = "||"; } //printf("||"); printf(">"); printf(">="); printf("<="); printf("="); printf("!=");
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


