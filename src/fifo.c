#include "fifo.h"
#include <stdio.h>


List* Fifo_create()
{
  return List_create();
}

void Fifo_destroy(List* list)
{
  List_destroy(list); 
}

void Fifo_clear(List* list)
{
  List_clear(list); 
}

void push(List* list, void* value)
{
  List_push(list, value);
}

void* pop(List *list)
{
  List_pop(list);
}

int main()
{
  char m = 'T';
  char i = 'e';
  char l = 's';
  char a = 't';
  
  List* fifo = Fifo_create();

  push(fifo, &m);
  push(fifo, &i);
  push(fifo, &l);
  push(fifo, &a);

  char* s = (char*)pop(fifo);
  while(s != NULL)
  {
    printf("%c\nNa steku je ostalo %d elemenata\n",*s, Fifo_count(fifo));
    s = (char*)pop(fifo);
  }
  
  char* test = "Test";
  push(fifo,test);
  printf("%s\n",(char*)pop(fifo));    
}