#ifndef _TABLE_H
#define _TABLE_H
#define TAILLE 103 /* nombre premier de préférence */

//typedef enum {INT, VOID} type_t;
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
    //type_t typeNode;
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
void printdot(FILE *fd , tree * node, int n );
void relieFils(FILE *fichier, tree *pere,tree*fils,int n);
void ecritNode(FILE *fichier,tree *t,int n);
char* node_name(char * name);

#endif