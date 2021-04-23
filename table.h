#define TAILLE 103 /* nombre premier de préférence */

typedef struct _symbole { 
    char *nom;
    double valeur;
    struct _symbole *suivant;
} symbole;

symbole * inserer( char *nom );

int hash( char *nom );

void table_reset();
