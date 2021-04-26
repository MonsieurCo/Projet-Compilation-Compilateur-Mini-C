#define TAILLE 103 /* nombre premier de préférence */

typedef enum {INT, VOID} type_t;

typedef struct _symbole { 
    char *nom;
    //double valeur;
    //type_t type;
    struct _symbole *suivant;
} symbole;

typedef struct _tree {
    char *nom; 
    struct _tree *suivants;
} tree;



symbole * inserer( char *nom );

int hash( char *nom );

void table_reset();
