tCC=gcc
YC=yacc
FL=flex

TARGET=testeur

all:
	$(YC) -d miniC.y
	$(FL) ANSI-C.l
	$(CC) -g lex.yy.c y.tab.c table.c -lfl  -o $(TARGET) -w 
	./testeur < Tests/variables.c
	dot -Tpdf testDOT.dot -o test.pdf


clean:
	rm $(TARGET)
	rm testDOT.dot
	