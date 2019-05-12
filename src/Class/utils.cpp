//
// Created by igorphelype on 04/05/19.
//

#include <iostream>
#include "../Header/utils.h"

using namespace std;

void printArray(int *A, int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}