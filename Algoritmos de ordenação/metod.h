#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    void (*change)(void*object,int i,int j);
    void*(*f_walk)(void*object,int position);
    void (*changeObject)(void* object,int i,void *newObject);
    int (*f_condition)(void *a,void *b); 
}Metod;


Metod* creat_metode(void (*change)(void* objetc,int i,int j),void* (*f_walk)(void* object,int position), void (*changeObject)(void* Objeto,int i,void* newObject),int (*f_condition)(void* a,void* b));