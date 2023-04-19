#include "metod.h"


// O método 'change' deve ter a assinatura de receber um objeto alvo e realizar a troca dos valores, onde o objeto na posição 'i' recebe o valor do objeto na posição 'j'
// O método 'f_walk' serve para retornar o valor pertencente ao objeto na posição indicada
// O método 'changeObject' serve para trocar o valor contido no objeto na posição 'i' pelo novo atributo chamado de newObject
// O método 'f_condition' serve para indicar qual a condição de troca entre os dois objetos 'a' e 'b' retornando 1 ou 0 

Metod* creat_metode(void (*change)(void* objetc,int i,int j),void* (*f_walk)(void* object,int position), void (*changeObject)(void* Objeto,int i,void* newObject),int (*f_condition)(void* a,void* b)){
    Metod *metod = (Metod*)malloc(sizeof(Metod));
    metod->change = change;
    metod->changeObject = changeObject;
    metod->f_condition = f_condition;
    metod->f_walk = f_walk;
    return metod;
}