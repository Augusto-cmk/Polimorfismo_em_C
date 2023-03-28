#include "list.h"
#include "Algoritmos de ordenação/Bolha/bolha.h"

void imprimir(void * value){
    printf("%s ", (char*)value);
}

int main(){
    linkedList lista;
    initLinkedList(&lista);
    insert(&lista,(void*)"Nome");
    insert(&lista,(void*)"Pedro Augusto");
    insert(&lista,(void*)"Garoto");
    printList(&lista,imprimir);
    dell(&lista,0);
    printList(&lista,imprimir);
    return 0;
}