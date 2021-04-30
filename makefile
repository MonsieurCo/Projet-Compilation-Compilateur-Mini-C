CC=gcc
YC=yacc
FL=flex

TARGET=testeur

all:
	$(YC) -d miniC.y
	$(FL) ANSI-C.l
	$(CC) -g lex.yy.c y.tab.c table.c -ll  -o $(TARGET) -w 
	./testeur < Tests/testdyl.c

clean:
	rm $(TARGET)
	