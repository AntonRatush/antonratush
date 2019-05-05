HEADERS	= program.h

default: con 

con.o: con.c $(HEADERS)
	gcc -c con.c -o con.o

con: con.o
	gcc con.o -o con

clean:
	-rm -f con.o
	-rm -f con	
