 CC=gcc
YC=yacc
FL=flex

TARGET=testeur

all:
	$(YC) -d miniC.y
	$(FL) ANSI-C.l
	$(CC) -g lex.yy.c y.tab.c -ll  -o $(TARGET) -w
	./testeur < Tests/add.c ; ./testeur < Tests/break.c ; ./testeur < Tests/compteur.c ; ./testeur < Tests/cond.c ; ./testeur < Tests/expr.c ; ./testeur < Tests/functions.c ; ./testeur < Tests/loops.c ; ./testeur < Tests/lsh.c ; ./testeur < Tests/mul.c ; ./testeur < Tests/neg.c ; ./testeur < Tests/rsh.c ; ./testeur < Tests/sub.c ; ./testeur < Tests/switch.c ; ./testeur < Tests/tableaux-multi.c ; ./testeur < Tests/tableaux.c ; ./testeur < Tests/variables.c 
clean:
	rm $(TARGET)
	