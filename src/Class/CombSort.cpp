#include "../Header/CombSort.h"
#include "../Header/Swap.h"
#include "../Header/Analysis.h"

Analysis combSort(int vet[], int n)
{
  clock_t start = clock();  
 
  int indiceA = 0;
  for (int gap = (n/1.3); gap > 0 && indiceA != n - 1;)
  {     
    while((indiceA + gap) < n)
    {
      int indiceB = gap;
      if (vet[indiceA] > vet[indiceB])
        swap(&vet[indiceA], &vet[indiceB]);
      indiceA++;
    }
    gap = (gap/1.3);
    indiceA = 0;
  }
  clock_t end = clock();
  float tempoGasto = ((float)end - start)/CLOCKS_PER_SEC;
    
}