#include "../Header/CenarioTres.h"

#include <iostream>

#include "../Header/InsertionSort.h"
#include "../Header/MergeSort.h"
#include "../Header/Heapsort.h"
#include "../Header/CombSort.h"

#include "./ReadFile.h"

using namespace std;

CenarioTres::CenarioTres(int **vet, int m, int n, int *vetTam)
{
  this->m =  m;
  this->n = n;

  cout << "--- Cenario 3 ---" << endl;
  for(int i = 0; i < m; i++)
  {
    int *vet2;
    int **vet3 = &vet2;
    int ***vet4;
    vet4 = &vet3;
    
    for(int j = 0; j < n; j++)
      testeK(&vet[i][j], vetTam[i]);
  }
}

CenarioTres::~CenarioTres(){}

void CenarioTres::testeK(int *vetor, int size)
{
  cout << "Tamanho do vetor: " << size << endl;
  
  int *vetInsertionSort = new int[size];
  
  for(int i = 0; i < size; i++)
    vetInsertionSort[i] = vetor[i];

  InsertionSort insertion;
  insertion.sort(vetInsertionSort, size);
  delete [] vetInsertionSort;

  int *vetMergeSort= new int[size];
  
  for(int i = 0; i < size; i++)
    vetMergeSort[i] = vetor[i];
   
  MergeSort merge;
  merge.sort(vetMergeSort, size);
  delete [] vetMergeSort;

  int *vetHeapSort= new int[size];
  
  for(int i = 0; i < size; i++)
    vetHeapSort[i] = vetor[i];

  heapSort(vetHeapSort, size);
  delete [] vetHeapSort;

  int *vetCombSort= new int[size];

  for(int i = 0; i < size; i++)
    vetCombSort[i] = vetor[i];

  CombSort comb;
  comb.combSort(vetCombSort, size);
  delete [] vetCombSort;
}

CenarioTres::~CenarioTres(){}



