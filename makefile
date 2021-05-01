CC=gcc
YC=yacc
FL=flex

TARGET=testeur

all:
	$(YC) -d miniC.y
	$(FL) ANSI-C.l
	$(CC) -g lex.yy.c y.tab.c table.c -ll  -o $(TARGET) -w 
	./testeur < Tests/switch.c
	dot -Tpdf testDOT.dot -o test.pdf

clean:
	rm $(TARGET)
	rm testDOT.dot
	