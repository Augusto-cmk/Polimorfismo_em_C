#include <stdio.h>
#include <stdlib.h>


void sort(void *object,int size,void (*change)(void* objetc,int i,int j),void* (*f_walk)(void* object,int position), void (*changeObject)(void* Objeto,int i,void* newObject),int (*f_condition)(void* a,void* b));