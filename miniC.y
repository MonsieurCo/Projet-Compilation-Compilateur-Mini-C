%{
#include <stdio.h> 
#include <stdlib.h>
#include  "table.h"



extern int yylineno;



void yyerror (char *s);
void table_reset();
%}

%union{
	char* id;
	struct _tree *tree;
	struct _symbole *symb;
}
 
%token <id> IDENTIFICATEUR CONSTANTE  
%token <id> VOID INT FOR WHILE IF ELSE SWITCH CASE DEFAULT
%token <id> BREAK RETURN PLUS MOINS MUL DIV LSHIFT RSHIFT BAND BOR LAND LOR LT GT 
%token <id> GEQ LEQ EQ NEQ NOT EXTERN
%left MUL DIV 
%left PLUS MOINS 


%left LSHIFT RSHIFT
%left BOR BAND
%left LAND LOR
%nonassoc THEN
%nonassoc ELSE
%left REL 

%start programme

%type <symb> liste_declarations declaration declarateur liste_declarateurs 
%type <tree> saut selection instruction variable expression condition affectation bloc liste_instructions  liste_expressions expr_liste_creator appel
%type<tree> iteration parm tableau_variable tableau_declarateur programme liste_fonctions fonction
%type <tree> liste_parms params_liste_creator

%type <id> binary_rel type 




%%
programme	:	
		liste_declarations liste_fonctions  {$$=initialiseTree("PROGRAM",$2,0); $$->ts = initialiseTS("programme","");$$->ts->fil=$1; insertSuivantSymb($$->ts->fil,$2->ts); 
											pereRecusif($$->ts);
											checkDef($$,0);
											writeDot($2);
											
										}
;
liste_declarations	:	
		liste_declarations declaration  {$$=$1; insertSuivantSymb($$,$2);}
	|				{$$=initialiseTS("#empty","");}
;
liste_fonctions	:	
		liste_fonctions fonction      {$$ = $1; insertSuivant($1,$2); insertSuivantSymb($1->ts,$2->ts);} 
|               fonction			{$$=$1;}
;
declaration	:	
		type liste_declarateurs ';' {if(0==strcmp($1,"int")){
										$$ = $2 ; addTypeSymb($$,$1);
										
									} else{
										yyerror("Typecheck");
									}}
;
liste_declarateurs	:	
		liste_declarateurs ',' declarateur {$$ = $1; insertSuivantSymb($1,$3);}
	|	declarateur  {$$ = $1;}
;
declarateur	:	
		IDENTIFICATEUR   {$$ = initialiseTS($1,"undef");}
	|	tableau_declarateur  { $$=initialiseTS("TAB","int"); $$->fil=$1;
								$$->dimension = sizeFilsSymb($$->fil)-1; 
								$$->tailles = (int *) malloc(($$->dimension) * sizeof(int));
								initTAB($$->tailles,$$->fil->suivants,0);
								$$->type=TYPE_TAB;
								} 
;
tableau_declarateur:
	IDENTIFICATEUR  {$$=initialiseTS($1,"...");}  
	|tableau_declarateur '[' CONSTANTE ']' {$$=$1; insertSuivantSymb($$,initialiseTS($3,"int"));}
;

fonction	:	
		type IDENTIFICATEUR '(' liste_parms ')' bloc {	char * name;
																		name = (char * ) malloc(15 * sizeof(char));
																		sprintf(name,"%s , %s",$2,$1);
																		$$=initialiseTree(name,$4,yylineno);insertSuivant($$->fil,$6);
																		$$->typeNode=FONCTION;

																		$$->ts = initialiseTS($2,$1);

																		if(strcmp($1,"int") == 0 ){
																			
																			$$->typeVar = TYPE_INT;
																			
																		} else if (strcmp($1,"void") == 0){
																			$$->typeVar = TYPE_VOID;
																			
																		}else{$$->typeVar = NULE;
																		}
																		if(sizeFils($4) > 0 ){
																			$$->ts->nbParam=sizeFils($4)-1;
																		}
																		$$->ts->fil = $4->ts;
																		insertSuivantSymb($4->ts,$6->ts);}						
	|	EXTERN type IDENTIFICATEUR '(' liste_parms ')' ';' {$$=initialiseTree("extern",initialiseTree($2,NULL,yylineno),yylineno);
															$$->ts = initialiseTS($3,$2);
															$$->ts->nbParam=sizeFils($5);
															
															$$->ts->fil = $5->ts;

														 	$$->fil->suivants=initialiseTree($3,NULL,yylineno);
															$$->fil->suivants->fil=$5;
															$$->typeNode=EXTER;
																if(strcmp($2,"int") == 0 ){
																			$$->typeVar = TYPE_INT;
																		}else if (strcmp($2,"void") == 0)
																		{$$->typeVar = TYPE_VOID;}
																		else{$$->typeVar = NULE;}
																		}
;
type	:	
		VOID {$$="void";}
	|	INT {$$ = "int";}
;


params_liste_creator :    //modification de la grammaires en raison des problèmes mis en lumière par le forum
	params_liste_creator ',' parm {$$ = $1; insertSuivant($$,$3); insertSuivantSymb($$->ts,$3->ts);}
	| parm	{$$ =$1;}
;

liste_parms	:	
		params_liste_creator {$$=$1;}
	|				{$$ = initialiseTree("...",NULL,yylineno); $$->ts=initialiseTS("#empty","");}
;

parm	:	 
		INT IDENTIFICATEUR  {$$=initialiseTree("int",initialiseTree($2,NULL,yylineno),yylineno); $$->typeVar = TYPE_INT; $$->ts=initialiseTS($$->fil->nom,"int"); }//
;

liste_instructions :	
		liste_instructions instruction {$$ = $1; insertSuivant($1,$2);insertSuivantSymb($1->ts,$2->ts);}
	|				{$$ = initialiseTree("...",NULL,yylineno);$$->ts = initialiseTS("#empty","undef");}
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
		FOR '(' affectation ';' condition ';' affectation ')' instruction 	{$$=initialiseTree("FOR",$3,yylineno); $$->fil->suivants=$5;
																			$$->fil->suivants->suivants=$7;$$->fil->suivants->suivants->suivants=$9; 
																			$$->ts = $9->ts; 
																			insertSuivantSymb($$->ts,$3->ts);
																			insertSuivantSymb($$->ts,$5->ts);
																			insertSuivantSymb($$->ts,$7->ts);}
	|	WHILE '(' condition ')' instruction {$$=initialiseTree("WHILE",$3,yylineno); $$->fil->suivants=$5; 
											$$->ts->fil = $5->ts;
											insertSuivantSymb($$->ts,$3->ts);}
	|   error '\n' {yyerror("reenter last");
                        yyerrok; };
;
selection	:	
		IF '(' condition ')' instruction %prec THEN {$$ = initialiseTree("IF",$3,yylineno);
													if(strcmp($5->nom,"BLOC")==0){
														$5->nom = "THEN";	
													}
													$$->fil->suivants = $5;
													$$->ts=$5->ts;
													insertSuivantSymb($$->ts,$3->ts);
													$$->typeNode=COMP;}
	|	IF '(' condition ')' instruction ELSE instruction {$$ = initialiseTree("IF",$3,yylineno);
														if(strcmp($5->nom,"BLOC")==0){
															$5->nom = "THEN";	
														}
														$$->fil->suivants = $5;$$->fil->suivants->suivants = initialiseTree("ELSE",$7,yylineno);
															$$->ts=$3->ts;
															insertSuivantSymb($$->ts,$5->ts);
															insertSuivantSymb($$->ts,$7->ts);
															$$->typeNode=COMP;} 
	|	SWITCH '(' expression ')' instruction {$$ = initialiseTree("SWITCH",$3,yylineno); $$->fil->suivants = $5->fil;
												$$->ts=$3->ts;
												insertSuivantSymb($$->ts,$5->ts);
												$$->typeNode=COMP;}
	|	CASE CONSTANTE ':' liste_instructions selection {$$ = initialiseTree("CASE",initialiseTree($2,NULL,yylineno),yylineno); $$->fil->suivants = $4; $$->suivants=$5; 
														$$->ts=$4->ts;
														insertSuivantSymb($$->ts,$5->ts);}
	|	DEFAULT ':' instruction {$$ = initialiseTree("DEFAULT",$3,yylineno);$$->ts = $3->ts;}
;
saut	:	
		BREAK ';' {$$=initialiseTree("BREAK",NULL,yylineno);}
	|	RETURN ';' {$$ = initialiseTree("return",NULL,yylineno);
					$$->typeNode=RET;}
	|	RETURN expression ';' {$$ = initialiseTree("RETURN",$2,yylineno); 
								$$->ts=$2->ts;
								$$->typeNode=RET;
								}
;
affectation	:	 
		variable '=' expression  {$$ = initialiseTree(":=",$1,yylineno);$$->fil->suivants = $3; 
								 
								$$->ts->fil = $1->ts;
								$$->ts->fil->suivants = $3->ts;
								$$->typeNode=AFFECTATION;} 
;
bloc	:	
		'{' liste_declarations liste_instructions '}' {if (sizeFils($3) <= 1){ $$ = $3;
													}else{		$$ = initialiseTree("BLOC",$3,yylineno);}
													insertSuivantSymb ($2,$3->ts);
													$$->ts= initialiseTS("BLOC","");
													$$->ts->fil = $2;}
;
appel	:
	IDENTIFICATEUR '(' liste_expressions ')' ';' {$$=initialiseTree($1,$3,yylineno);$$->typeNode=APPEL;$$->ts = $3->ts; 
												}
;
variable	:	
		IDENTIFICATEUR  {$$ = initialiseTree($1,NULL,yylineno);$$->typeNode=VAR;}  
	|	tableau_variable { $$=initialiseTree("TAB",$1,yylineno);addType($$,"tab");$$->typeNode=VAR;
							$$->ts=$1->ts;
							$$->ts->dimension = sizeFilsSymb($$->fil)-1; 
								$$->ts->tailles = (int *) malloc(($$->ts->dimension) * sizeof(int));
								initTAB($$->ts->tailles,$$->fil->suivants,0);
								$$->typeVar=TYPE_TAB;
			
							}
;
tableau_variable	:
	IDENTIFICATEUR  {$$ = initialiseTree($1,NULL,yylineno);}  
	|tableau_variable '[' expression ']' {$$ = $1; insertSuivant($$,$3);}
;
expression	:	
		'(' expression ')'	{$$ = $2;}                       
	
	|	expression PLUS expression	{$$ = initialiseTree("+",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;
									}
	|	expression MOINS expression	{$$ = initialiseTree("-",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;
									}		
	|	expression DIV expression	{$$ = initialiseTree("/",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;
									}				
	|	expression MUL expression 	{$$ = initialiseTree("*",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;
									}			
	|	expression RSHIFT expression	{$$ = initialiseTree(">>",$1,yylineno); $$->fil->suivants = $3;
										$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;}  			
	|	expression LSHIFT expression	{$$ = initialiseTree("<<",$1,yylineno); $$->fil->suivants = $3;
										$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;}			
	|	expression BAND expression	{$$ = initialiseTree("&=",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;}			
	|	expression BOR expression	{$$ = initialiseTree("|=",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;} 			
	|	MOINS expression %prec MUL	{$$ = initialiseTree("-",$2,yylineno);
									$$->ts = $2->ts;}                                   
	|	CONSTANTE       {$$ = initialiseTree($1,NULL,yylineno);$$->typeVar = TYPE_INT;}                                                 							
	|	variable	 {$$ =  $1;}                           
	|	IDENTIFICATEUR '(' liste_expressions ')' {$$ = initialiseTree($1,$3,yylineno); $$->typeNode=APPEL;
												$$->ts->fil=$3->ts;
									}                                  
;
//cf correction de Fissore Davide merci à lui 
liste_expressions :      // pour accepter epsilon ou une liste d'expressions
    expr_liste_creator {$$ = $1;}
    | 			{$$ = initialiseTree("...",NULL,yylineno);$$->ts=initialiseTS("#empty","");}
;
expr_liste_creator :                         // création de la liste d'expressions valide
    expr_liste_creator ',' expression {$$ = $1 ;insertSuivant($$,$3); insertSuivantSymb($$->ts,$3->ts);} // liste à n éléments
    | expression                   {$$=$1;}           // liste à un seul élément
;

condition	:	
		NOT '(' condition ')' {$$ = initialiseTree("not",$3,yylineno);}
	|	condition binary_rel condition %prec REL {$$ = initialiseTree($2,$1,yylineno); $$->fil->suivants = $3;
													$$->ts->fil=$1->ts;
													$$->ts->fil->suivants=$3->ts;}
	|	'(' condition ')' { $$ = $2;}
	|	expression LT expression {$$ = initialiseTree("<",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;}
	|	expression GT expression {$$ = initialiseTree(">",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;}
	|	expression GEQ expression {$$ = initialiseTree(">=",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;}
	|	expression LEQ expression {$$ = initialiseTree("<=",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;}
	|	expression EQ expression {$$ = initialiseTree("==",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;}
	|	expression NEQ expression {$$ = initialiseTree("!=",$1,yylineno); $$->fil->suivants = $3;
									$$->ts->fil=$1->ts;
									$$->ts->fil->suivants=$3->ts;}
;

binary_rel	:	
		LAND {$$ = "&&"; } 
	|	LOR	{$$ = "||"; } 
;


%%




void yyerror(char *s){
	 fprintf(stderr, " line %d: %s\n", yylineno, s);
	 exit(1);
}

int yywrap() {
	return 1;
} 
int main(void) {
	while(yyparse());
}


