//
// Created by igorphelype on 30/04/19.
//

#include "../Header/MergeSort.h"
#include <iostream>

using namespace std;

/**
 * Divide Recursivamente o array (arr) e chama a função que faz a mistura
 * da arvore criada de forma ordenada desta forma:
 *
 *          abcd
 *      ab        cd
 *    a    b    c    d
 *
 * @param arr
 * @param left
 * @param right
 */
void MergeSort::divide(int arr[], int left, int right){
    if (right > left){
        int middle = left+(right-left)/2; // (left + right) / 2 ???
//        cout << "left: " << left << " (" << arr[left] << ")" << "| middle: " << middle << " (" << arr[left] << ")"  << "| right: " << right << " (" << arr[right] << ")"  << endl;
        this->divide(arr, left, middle);
        this->divide(arr, middle+1, right);
        this->merge(arr, left, middle, right);
    }
}

/**
 * Mistura dois vetores auxiliares ordenando
 * o vetor principal
 * @param arr
 * @param left
 * @param middle
 * @param right
 */
void MergeSort::merge(int *arr, int left, int middle, int right) {
    int sizeL = middle-left+1;
    int sizeR = right-middle;
    int arrayLeft[sizeL], arrayRight[sizeR];
    int i, j, k;
    // Copia o vetor principal para dois vetores auxiliares
    this->arrCopy(arr, arrayLeft, left, sizeL);
    this->arrCopy(arr, arrayRight, middle + 1, sizeR);

    // Intercala os vetores auxiliares (esquerda e direita) para ordernar o array principal (arr)
    for(i = 0, j = 0, k = left; i < sizeL && j < sizeR; k++){
        if(arrayLeft[i] <= arrayRight[j]){
            arr[k] = arrayLeft[i];
            i++;
        }else{
            arr[k] = arrayRight[j];
            j++;
        }
    }
    while (i < sizeL){
        arr[k] = arrayLeft[i];
        i++;
        k++;
    }
    while (j < sizeR){
        arr[k] = arrayRight[j];
        j++;
        k++;
    }
}

/**
 * Copia os valores de arr em arr1
 * @param arr
 * @param arr1
 * @param start
 * @param size
 */
void MergeSort::arrCopy(int *arr, int *arr1, int start, int size){
    for(int i = 0; i < size; i++){
        arr1[i] = arr[start + i];
    }
}

/**
 *
 * @param arr
 * @param size
 */
void MergeSort::sort(int *arr, int size) {
    this->divide(arr, 0, size-1);
}