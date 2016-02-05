#ifndef Listlib_h
#define Listlib_h

#include <stdlib.h>

struct ListNode;

typedef struct ListNode
{
    struct ListNode* next;
    struct ListNode* prev;
    void* value;
} ListNode;

typedef struct List
{
    int count;
    ListNode* first;
    ListNode* last;
} List;

extern List* List_create();
extern void List_destroy(List* list);
extern void List_clear(List* list);


#define List_count(A) ((A)->count)
#define List_first(A) ((A)->first != NULL ? (A)->first->value : NULL)
#define List_last(A) ((A)->last != NULL ? (A)->last->value : NULL)

extern void List_push(List* list, void* value);
extern void* List_pop(List *list);

extern void* List_remove(List* list, ListNode* node);

#define LIST_FOREACH(L, S, M, V) ListNode* _node = NULL;\
    ListNode* V = NULL;\
    for(V = _node = L->S; _node != NULL; V = _node = _node->M)

#endif