CC=gcc
YC=yacc
FL=flex

TARGET=a.out
FILE=add

all:
	$(YC) -d miniC.y 
	$(FL) ANSI-C.l
	$(CC) -g lex.yy.c y.tab.c table.c -lfl  -o $(TARGET) -w 
	./$(TARGET) < Tests/$(FILE).c
	mv DOT.dot ./DOT/$(FILE).dot
	dot -Tpdf ./DOT/$(FILE).dot -o ./PDF/$(FILE).pdf



clean:
	rm $(TARGET)
	rm DOT.dot
	