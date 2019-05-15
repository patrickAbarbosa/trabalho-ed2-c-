#ifndef COMBSORT_H
#define COMBSORT_H

#include "./Analysis.h"

class CombSort {
  public:
    CombSort();
    ~CombSort();

    void combSort(int vet[], int n);
    void combSort(int vet[], int n);    

  private:
    void swap(int *a, int *b);
};
#endif //combSort