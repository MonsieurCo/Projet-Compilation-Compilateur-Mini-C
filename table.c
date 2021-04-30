#include <stdio.h>
#include "table.h" 
#include "y.tab.h"





symbole *table[TAILLE];
tree *nodes[TAILLE];

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

symbole * inserer( char *nom ) {
  int h;
	symbole *s;
	symbole *precedent; h = hash(nom);
	s = table[h]; precedent = NULL; 
	while ( s != NULL ) {
		if ( strcmp( s->nom, nom ) == 0 ) return s;
			precedent = s;
			s = s->suivant; 
		}
	if ( precedent == NULL ) {
		table[h] = (symbole *) malloc(sizeof(symbole)); s = table[h];
	} else {
		precedent->suivant = (symbole *) malloc(sizeof(symbole));
		s = precedent->suivant; 
	}
	s->nom = strdup(nom); s->suivant = NULL; return s;
}



tree *initialiseTree(char* name, tree *fil){
	struct _tree *t = (tree*)malloc(sizeof(tree));
	t->nom = name;
	t->fil = fil;
	t->suivants = NULL;
	t->node_name = NULL;
	t->typeNode = NUL;

	return t;

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
	char * name;
	name = (char * ) malloc(50 * sizeof(char));
	sprintf(name,"node_%d",n);
	t->node_name = name;
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
	nodes[n]=t;


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

	for (int i=0;i<TAILLE;i++){
		if(nodes[i]!=NULL){
			relieFils(fd,nodes[i],nodes[i]->fil);
		}
	}
	fprintf(fd,"}");
	fclose(fd);



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