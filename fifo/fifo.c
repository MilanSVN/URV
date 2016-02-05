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
