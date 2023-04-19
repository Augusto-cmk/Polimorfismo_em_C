#include "Select.h"

void sort(Metod* select,void* object,int tam)
{
    int vMenor;
    int vAux;
    int vTemp;
    void* vTroca;
    
    for(vAux=0; vAux < tam-1; vAux++) // Percorre todo o vetor até TAM-1, pois a ultima posição não precisa testar pois ja estara ordenada;
    {
        vMenor = vAux; // Menor valor recebe a posição que está passando;

        for (vTemp=vAux+1; vTemp < tam; vTemp++) // Percorre o vetor da posição vAux+1 até o final;
        {
            if((*select->f_condition)((*select->f_walk)(object,vTemp),(*select->f_walk)(object,vMenor)))// Testa se a posição que está passando é menor que o menor valor;
            {
                vMenor = vTemp; // vMenor recebe a posição do menor valor;
            }
        }

        if (vMenor != vAux) // Se a posição for diferente da que está passando, ocorre a troca;
        {
            vTroca = (*select->f_walk)(object,vAux);
            (*select->change)(object,vAux,vMenor);
            (*select->changeObject)(object,vMenor,vTroca);
        }
    }
}