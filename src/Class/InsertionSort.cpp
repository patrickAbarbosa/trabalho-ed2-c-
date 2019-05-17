#include <iostream>
#include "../Header/InsertionSort.h"

using namespace std;

InsertionSort::InsertionSort(){}

InsertionSort::~InsertionSort(){}

void InsertionSort::sort(int v[], int n){

    int i, j;

    for(i = 1; i <= n; i++){

        for(j = i - 1; j > 0 && v[j - 1] > v[j]; j--){
            swap(v[j], v[j-1]);
            copies++;
        }
        comps++;
    }

}