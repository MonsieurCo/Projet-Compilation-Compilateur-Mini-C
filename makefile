CC=gcc
YC=yacc
FL=flex

TARGET=testeur

all:
	$(YC) -d miniC.y
	$(FL) ANSI-C.l
	$(CC) -g lex.yy.c y.tab.c -lfl  -o $(TARGET) -w
	./testeur < Tests/cond.c ;
clean:
	rm $(TARGET)
	