#include "../Header/QuickSort.h"
#include "../Header/Rating.h"
#include <iostream>

using namespace std;


void QuickSort::sort(int v[], int low, int high){
    
    if(low < high){
        int rightPos = this->partition(v, low, high);
        this->sort(v, low, rightPos-1);
        this->sort(v, rightPos+1, high);
    }


}

int QuickSort::partition(int v[], int low, int high){

    int pivot = v[high];
    int i = low - 1;
    for(int j = low; j < high-1; j++){

        if(v[j] <= pivot){
            i++;
            this->swap(&v[i], &v[j]);
        }

    }
    swap(&v[i+1], &v[high]);

    return(i+1);

}

void QuickSort::swap(int* left, int* right){
    int aux;

    aux = *right;
    *right = *left;
    *left = aux;
}