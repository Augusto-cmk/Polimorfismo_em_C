#include "bolha.h"


void sort(Metod *bolha, void *object,int size){
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