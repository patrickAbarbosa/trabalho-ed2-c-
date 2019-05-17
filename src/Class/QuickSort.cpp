#include <iostream>
#include <cstdlib>
#include "time.h"
#include "../Header/QuickSort.h"
#include "../Header/Rating.h"
#include "../Header/Analysis.h"
#include "../Header/InsertionSort.h"

using namespace std;

Analysis an;

/*
*
* Esta classe contém métodos de ordenação utilizando variações do QuickSort
* QuickSort Recursivo, QuickSort Mediana e a versão hibrida com Insertion Sort
* Os métodos contam com chamadas recursivas, e com chamadas aos métodos de partição e swap(troca)
* Também referidos nesta classe
*
*/



/**
 * QuickSort Mediana
 * @param v
 * @param low
 * @param high
 * @param k
 * @return
 */
Analysis QuickSort::sortMediana(int v[], int low, int high, int k){
    if(low < high){
        int rightPos = partitionMediana(v, low, high, retornaMediana(low, high, k));
        sortMediana(v, low, rightPos - 1, k);
        sortMediana(v, rightPos + 1, high, k);
    }
}

/**
 * Método para calcular e retornar a mediana
 * @param low
 * @param high
 * @param k
 * @return
 */
int QuickSort::retornaMediana(int low, int high, int k){
    int random[k];

    for(int i = 0; i < k; i++){
        random[i] = (rand() % high) + low;
    }
    this->sort(random, 0, k);

    if(k % 2 == 0){ // Caso par
        return random[(k/2) - 1];
    }else {
        int a = k - 1;
        int oddIndex = (((a / 2) + 1) + ((a / 2) - 1)) / 2; // Caso impar

        return random[oddIndex];
    }
}

/**
 * Método de partição para a variação mediana
 * @param v
 * @param low
 * @param high
 * @param mediana
 * @return
 */
int QuickSort::partitionMediana(int v[], int low, int high, int mediana){
    int pivot = v[mediana];

    int i = low-1;

    for(int j = low; j < high; j++){
        if(v[j] < pivot) {
            i++;
            this->swap(&v[i], &v[j]);
            an.nCopias += 3;
        }
    }

    this->swap(&v[i + 1], &v[high]);
    an.nCopias += 3;

    return i + 1;

}

/**
 * Híbrido quicksort, insertionsort
 * @param v
 * @param low
 * @param high
 * @param cutter
 */
void QuickSort::hybridSort(int v[], int low, int high, int cutter){
    if(low < high){
        if((high - low + 1) > cutter){
            int rightPos = partition(v, low, high);
            hybridSort(v, low, rightPos, cutter);
            hybridSort(v, (rightPos+1), high, cutter);
        }
    }
}

/**
 * Chamada que recebe um vetor de inteiros, inicializa a contagem de estatisticas
 * e as retorna (Objeto do tipo Analysis)
 * @param v
 * @param size
 * @return
 */
Analysis QuickSort::sort(int v[], int size){
    an = Analysis();
    clock_t start, end;
    start = clock();
    this->sort(v, 0, size-1);
    end = clock();
    float tempoGasto = ((float)end - start)/CLOCKS_PER_SEC; // Tempo gasto em segundos
    an.tempoGasto = tempoGasto*1000; // tempo gasto em milisegundos
    return an;
}

/**
 * Chamada que recebe um vetor de Ratings, inicializa a contagem de estatisticas
 * e as retorna (Objeto do tipo Analysis)
 * @param vr
 * @param size
 * @return
 */
Analysis QuickSort::sortRatings(Rating vr[], int size){
    an = Analysis();
    clock_t start, end;
    start = clock();
    this->sortRatings(vr, 0, size-1);
    end = clock();
    float tempoGasto = ((float)end - start)/CLOCKS_PER_SEC; // Tempo gasto em segundos
    an.tempoGasto = tempoGasto*1000; // tempo gasto em milisegundos
    return an;
}

/**
 * Função que inicia a chamada recursiva da ordenação de vetor de ints
 * @param v
 * @param low
 * @param high
 */
void QuickSort::sort(int v[], int low, int high){  //Params: Array, lowest index, highest index (n-1)
    if(low < high){
        int rightPos = partition(v, low, high);
        this->sort(v, low, rightPos-1);
        this->sort(v, rightPos+1, high);
    }
}

/**
 * Função que inicia a chamada recursiva da ordenação de vetor de Ratings
 * @param vr
 * @param low
 * @param high
 */
void QuickSort::sortRatings(Rating vr[], int low, int high){
    if(low < high){
        int rightPos = partitionRatings(vr, low, high);
        this->sortRatings(vr, low, rightPos-1);
        this->sortRatings(vr, rightPos+1, high);
    }
}

/**
 * Método de partição e troca de posição
 * @param v
 * @param low
 * @param high
 * @return
 */
int QuickSort::partition(int v[], int low, int high){
    int pivot = v[high];
    an.nCopias++;
    int i = low - 1;
    for(int j = low; j <= high-1; j++){
        an.nComparacoes++;
        if(v[j] <= pivot){
            i++;
            this->swap(&v[i], &v[j]);
            an.nCopias += 3;
        }
    }
    this->swap(&v[i+1], &v[high]);
    an.nCopias += 3;
    return(i+1);
}

/**
 * Método de partição e troca de posição
 * @param vr
 * @param low
 * @param high
 * @return
 */
int QuickSort::partitionRatings(Rating vr[], int low, int high){
    Rating pivot = vr[high];
    an.nCopias++;
    int i = low - 1;
    for(int j = low; j <= high-1; j++){
        an.nComparacoes++;
        if(vr[j].USERID <= pivot.USERID){
            i++;
            swap(&vr[i], &vr[j]);
        }

    }
    swap(&vr[i+1], &vr[high]);
    return(i+1);
}

/**
 * Metodo que aplica um swap (troca de posições) entre
 * dois itens de um vetor de inteiros
 * @param left
 * @param right
 */
void QuickSort::swap(int* left, int* right){  //Método para trocar posição de variáveis do tipo inteiro
    int aux;
    aux = *right;
    *right = *left;
    *left = aux;
}

/**
 * Metodo que aplica um swap (troca de posições) entre
 * dois itens de um vetor de Ratings
 * @param left
 * @param right
 */
void QuickSort::swap(Rating* left, Rating* right){ //Método para trocar posição de variáveis do tipo Rating
    Rating aux;
    aux = *right;
    *right = *left;
    *left = aux;
}