#include <stdio.h>
#include "table.h" 
#include "y.tab.h"




tree *initialiseTree(char* name, tree *fil, int line){
	struct _tree *t = (tree*)malloc(sizeof(tree));
	t->nom = name;
	t->fil = fil;
	t->suivants = NULL;
	t->node_name = NULL;
	t->typeNode = NUL;
	t->ts = initialiseTS("...","...");
	t->typeVar=NULE;
	t->nbLine=line;
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
	ts->dimension=0;
	ts->tailles = NULL;
	ts->suivants = NULL;
	ts->fil = NULL;
	ts->pere = NULL;
	ts->node_name=NULL;
	ts->nbParam=0;
	return ts;
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
	}else if(FONCTION == t->typeNode || EXTER == t->typeNode){
		fprintf(fichier,"%s [label=\"%s\"shape=invtrapezium color=blue];\n",t->node_name,t->nom);
	}
	else if(0 != strcmp("...",t->nom)){
		
		fprintf(fichier,"%s [label=\"%s\"];\n",t->node_name,t->nom);
		}

}

void relieFils(FILE *fichier, tree *pere,tree* fils){

	if(fils != NULL){
		if (0 != strcmp("...",fils->nom)){
		fprintf(fichier,"%s -> %s;\n",pere->node_name,fils->node_name);
		}
	}
	if(fils != NULL && fils->suivants != NULL ){
		relieFils(fichier,pere,fils->suivants);
	}
	
}


//focntion ecrivant le dot 
void writeDot(tree *t){
	FILE *fd =  fopen("DOT.dot","w");
	fprintf(fd,"//fichier DOT représentant le graph du fichier c analysé\n");
	fprintf(fd,"digraph mygraph {\n\n");
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
		if(strcmp(node->nom,"extern") != 0){
       relieFils(fd,node,node->fil); 
	   
        if (node->fil != NULL)
        {
			
           relieRecusif(fd,node->fil);
		   
        }
		}
        relieRecusif(fd,node->suivants);

}




int printdot(FILE *fd , tree * node,int n){	
	if (node == NULL){
		return n;
	}
		if(strcmp(node->nom,"extern") != 0){
        ecritNode(fd,node,n); 
        if (node->fil != NULL){
           n=printdot(fd,node->fil,n+1);
        }
		}
        printdot(fd,node->suivants,n+1);  
}

int sizeFilsSymb(symbole * t ){
	int ret = 0;
	while(t != NULL){
		if(strcmp(t->nom,"...") != 0){
			ret ++ ;}
		t = t->suivants;
	}
	return ret;
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
		}else if(0==strcmp("tab",type)){
			tree->typeVar = TYPE_TAB;
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
    while (node != NULL){
        printTabs(level);
        printf("Node: %s\n", node->nom);
        if (node->fil != NULL){	
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
	
	if(strcmp(s->nom,id) == 0 && s->nbParam == nbPar ){
			symbole *fils= s->suivants->fil;
			int res=0;
			for(int i = 0; i<=nbPar; i = i+1){
				if(fils!= NULL){
					if(strcmp(fils->nom,"TAB") == 0 ){
						res=res+checkPresenceTAB(fils->fil->nom,fils,fils->dimension,fils->tailles);
					}else{
						res=res+checkType(fils->nom,fils,TYPE_INT);
					}
				fils = fils->suivants;
				}
			}
			return res==nbPar;
		}
	while(s->suivants!=NULL){
		if(strcmp(s->suivants->nom,id) == 0 && s->suivants->nbParam == nbPar ){
			symbole *fils= s->suivants->fil;
			int res=0;
			for(int i = 0; i<=nbPar; i = i+1){
				if(fils!= NULL){
					if(strcmp(fils->nom,"TAB") == 0 ){
						res=res+checkPresenceTAB(fils->fil->nom,fils,fils->dimension,fils->tailles);
					}else{
						res=res+checkType(fils->nom,fils,TYPE_INT);
					}
				fils = fils->suivants;
				}
			}
			return res==nbPar;
		}
		s=s->suivants;
	}
	checkPresence(id,s->pere,nbPar);
	
}

int checkPresenceTAB(char * id, symbole *s,int nbPar, int *tailles){
	if(s->pere==NULL){
		return 0;
	}
	s=s->pere->fil;
	if(strcmp(s->nom,"TAB") == 0  && strcmp(s->fil->nom,id) == 0 && s->dimension == nbPar ){
			return checkTaille(s->tailles,tailles,nbPar);
		}

	while(s->suivants!=NULL){
		if(strcmp(s->suivants->nom,"TAB") == 0   && strcmp(s->suivants->fil->nom,id) == 0 && s->suivants->dimension == nbPar ){
			return checkTaille(s->suivants->tailles,tailles,nbPar);
		}
		s=s->suivants;
	}
	checkPresenceTAB(id,s->pere,nbPar,tailles);	
}

int checkPresenceFonc(char * id, symbole *s , int add){
	if(s->pere==NULL){
		return add;
	}
	s=s->pere->fil;
	if(strcmp(s->nom,id) == 0){
			add+=1;
		}

	while(s->suivants!=NULL){
		if(strcmp(s->suivants->nom,id) == 0){
			add+=1;
		}
		s=s->suivants;
	}
	add+=checkPresenceFonc(id,s->pere, add);
}

int checkTaille(int * tab1,int *tab2,int size){
	for(int i = 0; i < size ; i++ ){
		if( tab2[i] >= tab1[i]){
			return 0;
		}
	}
	return 1;
}



int checkType(char * id, symbole * s,type_var t){
	if(s->pere==NULL){
		return 0;
	}
	s=s->pere->fil;

	if(strcmp(s->nom,id) == 0){
			if(s->type == t ){
				return 1;
			}
		}

	while(s->suivants!=NULL){
		if(strcmp(s->suivants->nom,id) == 0){
			if(s->suivants->type == t ){
				return 1;
			}
		}
		s=s->suivants;
	}
	
	checkType(id,s->pere,t);
}

int min(int a , int b ){
	if(a > b ){
		return b;
	}
	else{
		return a;
	}
}

int max(int a , int b ){
	if(a > b ){
		return a;
	}
	else{
		return b;
	}
}

int checkAffectation(tree * t, int b){
    while (t != NULL){
		if(t->typeNode == APPEL){
			b= min(b, checkType(t->nom,t->ts,TYPE_INT));
		}
		if(t->typeVar == TYPE_TAB){
			b= min(b, checkPresenceTAB(t->fil->nom,t->ts,t->ts->dimension,t->ts->tailles));
		}

		if (t->fil != NULL){
			b= min(b,checkAffectation(t->fil,b));
        }
        t = t->suivants;
    }
	return b;
}

int checkRetour(tree * t,type_var type, int b ){
    while (t != NULL){
		if(t->typeNode == RET){
			if(t->fil!=NULL){
					b= min(b, checkAffectation(t->fil,1));
			}
			else{
				b=min(b,1);
			}
		}

		if (t->fil != NULL){
			b=min(b,checkRetour(t->fil,type,b));
        }
		
        t = t->suivants;
    }
	return b;
}

void checkDef(tree * t, int n){
    while (t != NULL){		 	
		if(t->typeNode == FONCTION){
			if (checkPresenceFonc(t->ts->nom,t->fil->ts,0) >= 2){
				char* s = (char*)malloc(300 * sizeof(char));
				sprintf(s,"redéfinition de la fonction %s",t->ts->nom);
				raiseError(s,t->fil->nbLine);
				free(s);
			}

			if(t->typeVar==TYPE_INT){
				int res = checkRetour(t->fil,t->ts->type,2);
				if (res > 1 ){
					res = 0;
				}
				if(res == 0){
					raiseError(t->nom,t->fil->nbLine);
				}
			}else{ 
				if(checkRetour(t->fil,t->ts->type,2) == 1 ){
					fprintf(stderr,"Warning : return dans une fonction void line: %d\n",t->fil->nbLine);
				}
			}
		}
    
		if(t->typeNode == VAR){
			if(t->typeVar == TYPE_TAB){
				int res = checkPresenceTAB(t->fil->nom,t->ts,t->ts->dimension,t->ts->tailles);
				if(res == 0){
					raiseError(t->fil->nom,t->fil->nbLine);
				}
			}
			else{
				int res = checkPresence(t->nom,t->ts,0);
				if(res == 0){
					raiseError(t->nom,t->nbLine);
				}
			}}

		if(t->typeNode == APPEL){
			if(checkPresence(t->nom,t->ts,sizeFils(t->fil)) == 0){
					raiseError(t->nom,t->nbLine);
				}
		}

		if(t->typeNode == AFFECTATION){
			if(checkAffectation(t->fil->suivants,1) == 0){
				if(strcmp(t->fil->nom, "TAB")==0){
					raiseError(t->fil->fil->nom,t->nbLine);
				}else{
					raiseError(t->fil->nom,t->fil->nbLine);
				}
			}
		}

		if(t->typeNode == COMP){
			if(checkAffectation(t->fil,1) == 0){
				if(strcmp(t->fil->nom, "TAB")==0){
					raiseError(t->fil->fil->nom,t->nbLine);
				}else{
				raiseError(t->fil->nom,t->fil->nbLine);
				}	
			}
		}

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
	if (node->fil != NULL){
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
	if (node->fil != NULL){
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
	if (node->fil != NULL){
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


void raiseError(char * s,int line){
	fprintf(stderr,"erreur de sémantique %s à la ligne %d\n",s,line);
	exit(1);
}

void warning(char * s){
	fprintf(stderr,s);
}

void initTAB(int* p,symbole * f,int index){
	if(f !=NULL){
		p[index] = atoi(f->nom);
		initTAB(p,f->suivants,index+1);
	}
}





