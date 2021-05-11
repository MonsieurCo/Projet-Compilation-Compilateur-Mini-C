#include <stdio.h>
#include "table.h" 
#include "y.tab.h"




symbole *table[TAILLE];



tree *initialiseTree(char* name, tree *fil){
	struct _tree *t = (tree*)malloc(sizeof(tree));
	t->nom = name;
	t->fil = fil;
	t->suivants = NULL;
	t->node_name = NULL;
	t->typeNode = NUL;
	t->ts = initialiseTS("...","...");
	t->typeVar=NULE;

	return t;

}


symbole * initialiseTS(char * nom, char* type){
	struct _symbole *ts = (symbole*)malloc(sizeof(symbole));
	ts->nom = nom;
	if(0==strcmp(type,"int")){
		ts->type=TYPE_INT;
	} else if(0==strcmp(type,"void")){
		ts->type=TYPE_VOID;
	}else{
		ts->type=NULE;
	}
	ts->suivants = NULL;
	ts->fil = NULL;
	ts->pere = NULL;
	ts->node_name=NULL;
	ts->nbParam=0;
	return ts;
}





int hash( char *nom ) { 
	int i, r;
	int taille = strlen(nom);
	r = 0;
	for ( i = 0; i < taille; i++ ){
		r = ((r << 8) + nom[i]) % TAILLE;}
	return r; }

void table_reset() { 
	int i;
	for( i = 0; i < TAILLE; i++ ){
		table[i] = NULL;
	}
}

symbole * inserer(char *nom ) {
  int h;
	symbole *s;
	symbole *precedent; 
	h = hash(nom);
	s = table[h]; 
	precedent = NULL; 
	while ( s != NULL ) {
		if ( strcmp( s->nom, nom ) == 0 ) return s;
			precedent = s;
			s = s->suivants; 
		}
	if ( precedent == NULL ) {
		table[h] = (symbole *) malloc(sizeof(symbole)); s = table[h];
	} else {
		precedent->suivants = (symbole *) malloc(sizeof(symbole));
		s = precedent->suivants; 
	}
	s->nom = strdup(nom); s->suivants = NULL; return s;
}




void printTabs(int count)
{
    for (int i = 0; i < count; i++)
    {
        putchar('\t');
    }
}

void printTreeRecursive(tree *node, int level){
	
    while (node != NULL)
    {
        printTabs(level);
        printf("Node: %s\n", node->nom);

        if (node->fil != NULL)
        {	
            printTabs(level);
            printf("Children:\n");
            printTreeRecursive(node->fil, level + 1);
        }

        node = node->suivants;
    }
}

void visualise(tree *node){
	printTreeRecursive(node, 0);		
}




tree *reverse(tree *t)
{
    struct node *revHead;
    if (t == NULL || t->suivants == NULL)
    {
        return t;
    }

    revHead = reverse(t->suivants);
    t->suivants->suivants= t;
    t->suivants = NULL; 

    return revHead;
}





//une fonction permetant de definir un node dans un fichier .dot
void ecritNode(FILE *fichier,tree *t, int n){
	t->node_name = (char * ) malloc(50 * sizeof(char));
	sprintf(t->node_name,"node_%d",n);
	if(0 == strcmp("RETURN",t->nom)){
		fprintf(fichier,"%s [label=\"%s\"shape=trapezium color=blue];\n",t->node_name,t->nom);
	}else if(0 == strcmp("IF",t->nom)){
		fprintf(fichier,"%s [label=\"%s\"shape=diamond];\n",t->node_name,t->nom);
	}else if(0 == strcmp("BREAK",t->nom)){
		fprintf(fichier,"%s [label=\"%s\"shape=box];\n",t->node_name,t->nom);
	}else if(APPEL==t->typeNode){
		fprintf(fichier,"%s [label=\"%s\"shape=septagon];\n",t->node_name,t->nom);
	}else if(FONCTION == t->typeNode){
		fprintf(fichier,"%s [label=\"%s\"shape=invtrapezium color=blue];\n",t->node_name,t->nom);
	}
	else if(0 != strcmp("...",t->nom)){
		
		fprintf(fichier,"%s [label=\"%s\"];\n",t->node_name,t->nom);
		}
	
	
	//printf("%s [label=\"%s\"];\n",t->node_name,t->nom);

}

void relieFils(FILE *fichier, tree *pere,tree* fils){

	if(fils != NULL){
		if (0 != strcmp("...",fils->nom)){
		
		//printf("%s %s\n",fils->nom,fils->node_name);
		fprintf(fichier,"%s -> %s;\n",pere->node_name,fils->node_name);
		}
	}
	
	if(fils != NULL && fils->suivants != NULL ){
		relieFils(fichier,pere,fils->suivants);
	}

}


//focntion ecrivant le dot 
void writeDot(tree *t){

FILE *fd =  fopen("testDOT.dot","w");

	fprintf(fd,"//fichier DOT représentant le graph du fichier c analysé\n");
	fprintf(fd,"digraph test {\n\n");
	tree *node = t;
	

	printdot(fd,node,0);
	relieRecusif(fd,node);
	fprintf(fd,"}");
	fclose(fd);
}



void relieRecusif(FILE * fd , tree * node ){
if (node == NULL){
		return ;
	}
       relieFils(fd,node,node->fil); 
	   
        if (node->fil != NULL)
        {
			
           relieRecusif(fd,node->fil);
		   
        }

        relieRecusif(fd,node->suivants);

}




int printdot(FILE *fd , tree * node,int n){
	
	if (node == NULL){
		return n;
	}
        ecritNode(fd,node,n); 
        if (node->fil != NULL)
        {
			
           n=printdot(fd,node->fil,n+1);
		   
        }

        printdot(fd,node->suivants,n+1);
		
   
}




int sizeFils(tree * t ){
	int ret = 0;
	while(t != NULL){
		if(strcmp(t->nom,"...") != 0){
			ret ++ ;}
		t = t->suivants;
	}
	return ret;
}

void insertSuivant(tree * t1, tree * t2){
	if(t1->suivants == NULL){
		t1->suivants = t2;
	}
	else {
		insertSuivant(t1->suivants, t2);
	}

}

void addType(tree * tree, char* type){
	if(tree != NULL){
		if(0==strcmp("int",type)){
			tree->typeVar = TYPE_INT;
		}
		else{
			tree->typeVar = TYPE_VOID;
		}
		addType(tree->suivants, type);
	}
	
}

void addTypeSymb(symbole * symb, char* type){
	if(symb != NULL){
		if(0==strcmp("int",type)){
			symb->type = TYPE_INT;
		}else if(0==strcmp("void",type)){
			symb->type = TYPE_VOID;
		}else{
			symb->type = NULE;
		}
		addTypeSymb(symb->suivants, type);
	}
	
}

void insertSuivantSymb(symbole * s1, symbole * s2){
	if(s1->suivants == NULL){
		s1->suivants = s2;
	}
	else {
		insertSuivantSymb(s1->suivants, s2);
	}
	
}


/// visualise TABLE SYMBOLE



void printTreeRecursiveSymb(symbole *node, int level){
	
    while (node != NULL)
    {
        printTabs(level);
        printf("Node: %s\n", node->nom);

        if (node->fil != NULL)
        {	
            printTabs(level);
            printf("Children:\n");
            printTreeRecursiveSymb(node->fil, level + 1);
        }

        node = node->suivants;
    }
}

void visualiseSymb(symbole *node){
	printTreeRecursiveSymb(node, 0);		
}




int checkPresence(char * id, symbole *s,int nbPar){
	if(s->pere==NULL){
		return 0;
	}
	s=s->pere->fil;
	
	printf(s->nom);
	if(strcmp(s->nom,id) == 0 && s->nbParam == nbPar ){
			//printf("%s doit avoir: %d\n",id,s->suivants->nbParam);
			symbole *fils= s->suivants->fil;
			int res=0;
			for(int i = 0; i<=nbPar; i = i+1){
				//if(fils!= NULL){
				res=res+checkType(fils->nom,fils,TYPE_INT);
				printf("%s %d\n",fils->nom,res);
				fils = fils->suivants;
				//}
			}
			printf("res = %d\n",res);
			printf("resultat de res==nbPar  %d\n",res==nbPar);
			return res==nbPar;
		}
	while(s->suivants!=NULL){
		printf(s->nom);
		if(strcmp(s->suivants->nom,id) == 0 && s->suivants->nbParam == nbPar ){
			//printf("%s doit avoir: %d\n",id,s->suivants->nbParam);
			symbole *fils= s->suivants->fil;
			int res=0;
			for(int i = 0; i<=nbPar; i = i+1){
				if(fils!= NULL){
				res=res+checkType(fils->nom,fils,TYPE_INT);
				printf("%s %d\n",fils->nom,res);
				fils = fils->suivants;
				}
			}
			printf("res = %d\n",res);
			printf("resultat de res==nbPar  %d\n",res==nbPar);
			return res==nbPar;
		}
		s=s->suivants;
	}
	checkPresence(id,s->pere,nbPar);
	
}

int checkType(char * id, symbole * s,type_var t){
	
	if(s->pere==NULL){
		
		return 0;
	}
	s=s->pere->fil;
	printf("on check %s --> %s\n",id,s->nom);
	
	if(strcmp(s->nom,id) == 0){
			if(s->type == t ){
				//printf("ici on a %s == %s\n",s->suivants->nom,id);
				return 1;
			}
		}

	while(s->suivants!=NULL){
		//printf("2 on check %s --> %s\n",id,s->nom);
		if(strcmp(s->suivants->nom,id) == 0){
			if(s->suivants->type == t ){
				//printf("ici on a %s == %s\n",s->suivants->nom,id);
				return 1;
			}
		}
		s=s->suivants;
	}
	
	
	checkType(id,s->pere,t);
	
}

int checkAffectation(tree * t){

    while (t != NULL){
		printf("check affectation de %s\n",t->nom);
		if(t->typeNode == APPEL){
			//visualiseSymb(t->ts->pere);
			printf("APPEL\n");
			return checkType(t->nom,t->ts,TYPE_INT);
		}


		if (t->fil != NULL){
			checkAffectation(t->fil);
        }
		
        t = t->suivants;
    }
	return 1;
}

void checkDef(tree * t, int n){

    while (t != NULL)
    {		 
    
		if(t->typeNode == VAR){
			//visualiseSymb(t->ts->pere);
			//printf("presence de la variables %s %d\n",t->nom,checkPresence(t->nom,t->ts,0));
		}
		if(t->typeNode == APPEL){
			printf("nb param de %s: %d\n",t->nom,sizeFils(t->fil));
			printf("\n\npresence de l'appel %s %d\n",t->nom,checkPresence(t->nom,t->ts,sizeFils(t->fil)));
			
		}
		if(t->typeNode == AFFECTATION){
			//printf("type de l'affectation %s %s %s == %d\n\n",t->fil->nom,t->nom,t->fil->suivants->nom,checkAffectation(t->fil->suivants));
		}

        //printf("Node: %s\n", t->nom);

        if (t->fil != NULL){
			checkDef(t->fil, n + 1);
        }
		
        t = t->suivants;
    }
}

void reliePere( symbole *pere,symbole* fils){

	if(fils != NULL){
			fils->pere = pere;
	}
	
	if(fils != NULL && fils->suivants != NULL ){
		reliePere(pere, fils->suivants);
	}

}

void pereRecusif(symbole * node ){
	if (node == NULL){
		return ;
	}
	
        reliePere(node,node->fil); 
        if (node->fil != NULL)
        {
			
           pereRecusif(node->fil);
		   
        }

        pereRecusif(node->suivants);

}


void writeDotSymb(symbole *t){

FILE *fd =  fopen("testDOT.dot","w");

	fprintf(fd,"//fichier DOT représentant le graph du fichier c analysé\n");
	fprintf(fd,"digraph test {\n\n");
	symbole *node = t;
	

	printdotSYMB(fd,node,0);
	relieRecusifSYMB(fd,node);
	fprintf(fd,"}");
	fclose(fd);
}



void relieRecusifSYMB(FILE * fd , symbole * node ){
if (node == NULL){
		return ;
	}
       relieFilsSYMB(fd,node,node->fil); 
        if (node->fil != NULL)
        {
			
           relieRecusifSYMB(fd,node->fil);
		   
        }

        relieRecusifSYMB(fd,node->suivants);

}



void relieFilsSYMB(FILE *fichier, symbole *pere,symbole* fils){

	if(fils != NULL){
		if (0 != strcmp("#empty",fils->nom) && 0 != strcmp("...",fils->nom)){
		
		
		fprintf(fichier,"%s -> %s;\n",pere->node_name,fils->node_name);
		}
	}
	
	if(fils != NULL && fils->suivants != NULL ){
		 relieFilsSYMB(fichier,pere,fils->suivants);
	}

}



int printdotSYMB(FILE *fd , symbole * node,int n){
	
	if (node == NULL){
		return n;
	}
        ecritNodeSYMB(fd,node,n); 
        if (node->fil != NULL)
        {
			
           n=printdotSYMB(fd,node->fil,n+1);
		   
        }

        printdotSYMB(fd,node->suivants,n+1);
		
   
}

void ecritNodeSYMB(FILE *fichier,symbole *t, int n){
	t->node_name = (char * ) malloc(50 * sizeof(char));
	sprintf(t->node_name,"node_%d",n);
	if(0 != strcmp("#empty",t->nom) && 0 != strcmp("...",t->nom)){
		char* type = (char * )malloc(50*sizeof(char));
		if(t->type == TYPE_INT){
			 type = "int";
		}
		else if (t->type == TYPE_VOID){
			type = "void";
		}
		else{
			type = "nul";
		}
		fprintf(fichier,"%s [label=\"%s, int\"];\n",t->node_name,t->nom,type);
		}
	
	
	

}
