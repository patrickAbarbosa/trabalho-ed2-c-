#include "../Header/CombSort.h"

void swap(int *a, int *b)
{
  int aux = *a;
  *a = *b;
  *b = aux;
}

void combSort(int vet[], int n)
{
  int indiceA = 0;
  for (int gap = (n/1.3); gap > 0 && indiceA != n - 1;)
  {     
    for (; (indiceA + gap) < n;)
    {
      int indiceB = gap;
      if (vet[indiceA] > vet[indiceB])
        swap(&vet[indiceA], &vet[indiceB]);
      indiceA++;
    }
    gap = (gap/1.3);
    indiceA = 0;
  }
}