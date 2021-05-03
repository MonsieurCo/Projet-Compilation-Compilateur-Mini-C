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
	t->ts = NULL;
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

void visualise(tree *node,int x,int y){
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
	
	
	printf("%s [label=\"%s\"];\n",t->node_name,t->nom);

}

void relieFils(FILE *fichier, tree *pere,tree* fils){

	if(fils != NULL){
		if (0 != strcmp("...",fils->nom)){
		
		printf("%s %s\n",fils->nom,fils->node_name);
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
		ret ++ ;
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
	return;
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
	return;
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
	return;
}

void insertSuivantSymb(symbole * s1, symbole * s2){
	if(s1->suivants == NULL){
		s1->suivants = s2;
	}
	else {
		insertSuivantSymb(s1->suivants, s2);
	}
	return;
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

void visualiseSymb(symbole *node,int x,int y){
	printTreeRecursiveSymb(node, 0);		
}