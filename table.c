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