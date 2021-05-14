CC=gcc
YC=yacc
FL=flex

TARGET=testeur
FILE=add

all:
	$(YC) -d miniC.y 
	$(FL) ANSI-C.l
	$(CC) -g lex.yy.c y.tab.c table.c -lfl  -o $(TARGET) -w 
	./testeur < Tests/$(FILE).c
	dot -Tpdf DOT.dot -o $(FILE).pdf
	


clean:
	rm $(TARGET)
	rm DOT.dot
	