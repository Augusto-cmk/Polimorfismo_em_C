#include "bolha.h"

void change(void* lista,int i, int j){
    int* aux = (int*)lista;
    aux[i] = aux[j];
    lista = (void*)aux;
}
void* f_walk(void* lista,int posicao){
    int* aux = (int*)lista;
    return (void*)aux[posicao];
}

void changeObject(void* lista,int i,void* newValorLista){
    int* aux = (int*)lista;
    aux[i] = (int)newValorLista;
    lista = (void*)aux;
}

int f_condition(void* valorA,void* valorB){
    return (int)valorA < (int)valorB;
}

int main(){
    Bolha *bolha = creat_metode(change,f_walk,changeObject,f_condition);
    int lista[6] = {10,1,12,30,11,0};
    sort(bolha,lista,6);
    for(int i = 0;i<6;i++){
        printf("%d ",lista[i]);
    }
    printf("\n");
    return 0;
}