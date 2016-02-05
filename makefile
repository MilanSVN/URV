main: fifo.o
	gcc -I ../include -L lib src/main.c -o app fifo/fifo.o  -llist 
fifo.o: 
	gcc -c -fpic -I ../include -L lib fifo/fifo.c -o fifo/fifo.o
lib: list.o
	gcc -shared -o lib/liblist.so list/list.o
list.o: 
	gcc -c -fpic list/list.c -o list/list.o

