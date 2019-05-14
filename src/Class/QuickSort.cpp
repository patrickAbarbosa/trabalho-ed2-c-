#include <iostream>
#include "time.h"
#include "../Header/QuickSort.h"
#include "../Header/Rating.h"
#include "../Header/Analysis.h"

using namespace std;

Analysis an;

/**
 *
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
 *
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
 *
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
 *
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
 *
 * @param v
 * @param low
 * @param high
 * @return
 */
int QuickSort::partition(int v[], int low, int high){
    int pivot = v[high];
    int i = low - 1;
    for(int j = low; j <= high-1; j++){
        if(v[j] <= pivot){
            an.nComparacoes++;
            i++;
            swap(&v[i], &v[j]);
        }
    }
    swap(&v[i+1], &v[high]);
    return(i+1);
}

/**
 *
 * @param vr
 * @param low
 * @param high
 * @return
 */
int QuickSort::partitionRatings(Rating vr[], int low, int high){
    Rating pivot = vr[high];
    int i = low - 1;
    for(int j = low; j <= high-1; j++){

        if(vr[j].USERID <= pivot.USERID){
            an.nComparacoes++;
            i++;
            swap(&vr[i], &vr[j]);
        }

    }
    swap(&vr[i+1], &vr[high]);
    return(i+1);
}

/**
 *
 * @param left
 * @param right
 */
void QuickSort::swap(int* left, int* right){
    int aux;
    aux = *right;
    *right = *left;
    *left = aux;
    an.nCopias += 3;
}

/**
 *
 * @param left
 * @param right
 */
void QuickSort::swap(Rating* left, Rating* right){
    Rating aux;
    aux = *right;
    *right = *left;
    *left = aux;
    an.nCopias += 3;
}