//
// Created by mirian on 07/05/19.
//

#include <iostream>
#include "../Header/Heapsort.h"

using namespace std;

void CriaHeap(int *vet, int ini, int fim)
{
   int filho = 2 * ini +1; // calcula o indice do filho
   int aux = vet[ini]; // aux começa com a posicao inicial de vet

   while(filho <= fim ) // Enquanto filho for menor que a ultima poaicao do vetor
   {
       if(filho < fim)
        if(vet[filho]< vet[filho +1]) // Compara se filho da esquerda é menor que filho da direita
            filho = filho + 1; 
        if(aux<vet[filho])
        {
            vet[ini] = vet[filho]; // troca de valores 
            ini = filho; // indice inicial passa a ser o  filho; 
            filho = 2 * ini + 1; // recalcula o filho 
        }
        else{
            filho = fim + 1; // sai do loop
        }
   }
   vet[ini] = aux; // vetor[ini] recebe o valor do auxiliar
}

void heapSort(int *vet, int tam)
{
    int i, aux;
    for(i = (tam-1)/2; i>=0; i--)
        CriaHeap(vet, i, tam-1);
    for(i = tam-1; i>=1; i--)
    {
        aux = vet[0];
        vet[0] = vet[i];
        vet[i] = aux;
        CriaHeap(vet, 0, i -1);
    }
}
}