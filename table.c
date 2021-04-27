#include <stdio.h>
#include "table.h" 
#include "y.tab.h"


//typedef struct _symbole { 
 //   char *nom;
 //   double valeur;
 //   type_t type;
 //   struct _symbole *suivant;
//} symbole;

//typedef struct _tree {
 //   struct _bloc *bloc; 
 //   char *nom; 
 //   type_t typeNode;
 //   struct _tree *fil;
 //   struct _tree *suivants;
//} tree;

//typedef struct _bloc{
 ///   struct _tree *pere;
 ///   struct _symbol *table;

//} bloc;


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

//tree * insererTree(struct tree *node ){
//	int h = hash(node->nom);
//	nodes[h] = node;
//	tree *precedent;
//	return node;
//}

tree *initialiseTree(char* name, tree *fil){
	struct _tree *t = (tree*)malloc(sizeof(tree));
	t->nom = name;//t->nom = name;
	//t->bloc = NULL;
	t->fil = fil;//(tree*)malloc(sizeof(tree));
	t->suivants = NULL;//(tree*)malloc(sizeof(tree));
	//t->typeNode = NULL;

	return t;

}

// void visualise(tree *t,int n, int m){
// 	//for(int i =0 ; i < n ;i++){
// 	//	printf(" ");
// 	//}
	
// 	printf("\n");
	
// 	tree *suivants = t->suivants;
// 	while(suivants != NULL){
// 		printf("\t");
// 		visualise(suivants,n,m+1);
// 		suivants = suivants->suivants;
// 	}
// 	if(t->fil != NULL){
// 		visualise(t->fil,n+1,m);
// 	}

	
// 	printf("|%d %d: ",n,m);
// 	printf(t->nom);

// }

void printTabs(int count)
{
    for (int i = 0; i < count; i++)
    {
        putchar('\t');
    }
}

void printTreeRecursive(tree *node, int level)
{
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

void visualise(tree *node,int x,int y)
{
	printTreeRecursive(node, 0);
	
}


// tree *reverse2(tree *t){
// 	visualise(t,0,0);
// 	tree *current = t;
// 	tree *prev , *next = NULL;
// 	while(current != NULL){
// 		next = current->suivants;
// 		current->suivants = prev;
// 		prev = current;
// 		current = next;
// 	}
// 	t = prev;
// 	return prev;
// }


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



void visualiseTree2(tree *t){
	printf(t->nom);
	printf("\n");
	tree *suivant = t->suivants;
	while(suivant != NULL){
		visualiseTree2(suivant);
		suivant = suivant->suivants;
	}
	printf("\n");
	if(t->fil != NULL){
		visualiseTree2(t->fil);
	}
	return;
	
}

