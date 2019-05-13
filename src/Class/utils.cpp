//
// Created by igorphelype on 04/05/19.
//

#include <iostream>
#include "../Header/utils.h"
#include "../Header/Rating.h"

using namespace std;

void printArray(int *A, int size){
    int i;
    cout << "[ ";
    for (i=0; i < size; i++)
        cout << A[i] << " ";
    cout << "]" << endl;
}

void printRatingArray(Rating *A, int size){
    int i;
    cout << "[" << endl;
    for (i=0; i < size; i++)
        A[i].print();
    cout << endl << "]" << endl;
}