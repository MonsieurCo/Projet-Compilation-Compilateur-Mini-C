CC=gcc
YC=yacc
FL=flex

TARGET=testeur

all:
	$(YC) -d miniC.y
	$(FL) ANSI-C.l
	$(CC) -g lex.yy.c y.tab.c table.c -lfl  -o $(TARGET) -w 
	./testeur < Tests/functions.c
	dot -Tpdf testDOT.dot -o testsymbol.pdf


clean:
	rm $(TARGET)
	rm testDOT.dot
	