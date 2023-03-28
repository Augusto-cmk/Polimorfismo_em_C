#include <stdlib.h>
#include <stdio.h>
#include <string.h>


typedef struct celList * Pointer;

typedef struct celList{
    struct celList * prox;
    void *value;
}memList;

typedef struct{
    Pointer init,end;
    int tam;
}linkedList;

void initLinkedList(linkedList *list);
void insert(linkedList * list,void *value);
void dell(linkedList *list,int index);
void* get(linkedList *list,int index);
void printList(linkedList *list,void (*functionPrint)(void*));