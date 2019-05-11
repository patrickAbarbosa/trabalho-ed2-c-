//
// Created by igorphelype on 30/04/19.
//

#ifndef TRABALHO_ED2_CPLUSPLUS_MERGESORT_H
#define TRABALHO_ED2_CPLUSPLUS_MERGESORT_H


class MergeSort {
public:
    void sort(int arr[], int size);

private:
    void divide(int arr[], int l, int r);
    void merge(int *arr, int left, int middle, int right);
    void leftAndRightCopies(int *arr, int *arrayLeft, int *arrayRight, int left, int middle, int right);
    void arrCopy(int *arr, int *arr1, int start, int size);
};


#endif //TRABALHO_ED2_CPLUSPLUS_MERGESORT_H
