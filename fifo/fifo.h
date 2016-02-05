#ifndef fifo_h
#define fifo_h

#include <stdlib.h>
#include "../include/listlib.h"

List* Fifo_create();
void Fifo_destroy(List* list);
void Fifo_clear(List* list);

#define Fifo_count(A) ((A)->count)
#define Fifo_first(A) ((A)->first != NULL ? (A)->first->value : NULL)
#define Fifo_last(A) ((A)->last != NULL ? (A)->last->value : NULL)

void push(List* list, void* value);
void* pop(List *list);

#endif