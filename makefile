CC=gcc
YC=yacc
FL=flex

TARGET=testeur
TEST=add

all:
	$(YC) -d miniC.y 
	$(FL) ANSI-C.l
	$(CC) -g lex.yy.c y.tab.c table.c -lfl  -o $(TARGET) -w 
	./testeur < Tests/$(TEST).c
	dot -Tpdf DOT.dot -o $(TEST).pdf


clean:
	rm $(TARGET)
	rm testDOT.dot
	