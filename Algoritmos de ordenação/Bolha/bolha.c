#include "bolha.h"


// O método 'change' deve ter a assinatura de receber um objeto alvo e realizar a troca dos valores, onde o objeto na posição 'i' recebe o valor do objeto na posição 'j'
// O método 'f_walk' serve para retornar o valor pertencente ao objeto na posição indicada
// O método 'changeObject' serve para trocar o valor contido no objeto na posição 'i' pelo novo atributo chamado de newObject
// O método 'f_condition' serve para indicar qual a condição de troca entre os dois objetos 'a' e 'b' retornando 1 ou 0 

Bolha* creat_metode(void (*change)(void* objetc,int i,int j),void* (*f_walk)(void* object,int position), void (*changeObject)(void* Objeto,int i,void* newObject),int (*f_condition)(void* a,void* b)){
    Bolha *bolha = (Bolha*)malloc(sizeof(Bolha));
    bolha->change = change;
    bolha->changeObject = changeObject;
    bolha->f_condition = f_condition;
    bolha->f_walk = f_walk;
    return bolha;
}

void sort(Bolha *bolha, void *object,int size){
    for(int i = 0;i<size;i++){
        for(int j = i+1;j<size;j++){
            if((*bolha->f_condition)((*bolha->f_walk)(object,i),(*bolha->f_walk)(object,j))){
                void* aux = (*bolha->f_walk)(object,i);
                (*bolha->change)(object,i,j);
                (*bolha->changeObject)(object,j,aux);
            }
        }
    }
}