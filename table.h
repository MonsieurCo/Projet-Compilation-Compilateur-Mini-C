#ifndef _TABLE_H
#define _TABLE_H
#define TAILLE 103 /* nombre premier de préférence */
#define TAILLEDOT 1500 //taille du tableau des noeuds necessaire pour la contruction du .dot 
typedef enum {FONCTION, APPEL,NUL} type_t;
//typedef enum {AFFECTATION,EXPRESSION,FOR, WHILE,PRINT} typeNode;

typedef struct _symbole { 
    char *nom;
    double valeur;
    //type_t type;
    struct _symbole *suivant;
} symbole;

typedef struct _tree {
    //struct _bloc *bloc; 
    char *nom; 
    char *node_name;
    type_t typeNode;
    struct _tree *fil;
    struct _tree *suivants;
} tree;

typedef struct _bloc{
    struct _tree *pere;
    struct _symbol *table;

} bloc;

tree *initialiseTree(char* name, tree *fil);

symbole * inserer( char *nom );

int hash( char *nom );

void table_reset();
void visualise(tree *t, int n, int m);
tree *reverse(tree *t);
void writeDot(tree *t);
int printdot(FILE *fd , tree * node, int n);
void relieFils(FILE *fichier, tree *pere,tree*fils);
void ecritNode(FILE *fichier,tree *t, int n);
int sizeFils(tree * t );
#endif