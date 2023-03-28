#include "list.h"


void initLinkedList(linkedList *list){
    list->init = NULL;
    list->end = NULL;
    list->tam = 0;
}
void insert(linkedList * list,void *value){
    if(list->end == NULL){
        list->end = (Pointer)malloc(sizeof(memList));
        list->init = list->end;
    }
    else{
        list->end->prox = (Pointer)malloc(sizeof(memList));
        list->end = list->end->prox;
    }
    list->end->value = value;
    list->end->prox = NULL;
    list->tam++;
}
void* get(linkedList *list,int index){
    void * atributo;
    Pointer aux = list->init;
    for(int i = 0;i<index+1;i++,aux = aux->prox){
        atributo = aux->value;
    }
    return atributo;
}
void removeInit(linkedList *list){// Função responsável por remover apenas do inicio da lista
    if(list->tam == 1){
        initLinkedList(list);
    }
    else{
        Pointer aux = list->init;
        list->init = list->init->prox;
        free(aux);
    }
}
void removeMiddle(linkedList *list, int index){// Função que remove elementos entre o inicio e o fim ... em outras situações esse método não funciona
    int i = 0;
    for(Pointer aux = list->init;aux != NULL;aux = aux->prox){
        if(i+1 == index){
            Pointer del = aux->prox;
            aux->prox = aux->prox->prox;
            free(del);
            return;
        }
        i++;
    }
    printf("\nIndice %d não existe na lista\n",index);
}
void removeEnd(linkedList *list){
    for(Pointer aux = list->init;aux != NULL;aux = aux->prox){
        if(aux->prox->value == list->end->value){
            Pointer del = aux->prox;
            list->end = aux;
            free(del);
            break;
        }
    }
}
void dell(linkedList *list,int index){// Função responsável por remover elementos da lista
    if(index == 0){
        removeInit(list);
    }
    else index == list->tam ? removeEnd(list):removeMiddle(list,index);
}
void printList(linkedList *list,void (*functionPrint)(void*)){ // Usar um ponteiro para função para usar essa função para imprimir os valores
    Pointer aux = list->init;
    while(aux != NULL){
        (*functionPrint)(aux->value); // Essa função é a função responsável por imprimir o valor desejado, nela deve ser realizado o cast para o tipo desejado
        aux = aux->prox;
    }
    printf("\n");
}