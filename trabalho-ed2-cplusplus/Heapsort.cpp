//
// Created by mirian on 07/05/19.
//

#include <iostream>
#include "Heapsort.h"

using namespace std;

void heapSort(int vetor[], int n)
{
    unsigned long long int qtdH = 0;
    int i = n/2, pai, filho, aux;
    for(;;)
    {
        if(i>0)
        {
            i--;
            aux = vetor[i];
        }
        else
        {
            n--;
            if(n==0)
            {
                return;
            }

            aux = vetor[n];
            vetor[n] = vetor[0];
        }
        pai = i;
        filho = i*2+1;
        while(filho<n)
        {
            if( (filho + 1 < n ) && (vetor[filho + 1] > vetor[filho]))
                filho++;
            if(vetor[filho] > aux)
            {
                vetor[pai] = vetor[filho];
                pai = filho;
                filho = pai * 2 +1;
            }
            else break;
        }
        vetor[pai] = aux;
        qtdH++;
    }
}