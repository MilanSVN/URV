fifo: 
	gcc -I ../include -L lib src/fifo.c -o ../app -llist
lib: list.o
	gcc -shared -o lib/liblist.so list/list.o
list.o: 
	gcc -c -fpic list/list.c -o list/list.o

