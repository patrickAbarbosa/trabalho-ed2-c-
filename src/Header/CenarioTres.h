#ifndef CENARIOTRES_H
#define CENARIOTRES_H

#include "./Data.h"
#include "./ReadFile.h"

class CenarioTres
{
public:
  CenarioTres(int **vet, int *vetTam, int vetorN[]);
  ~CenarioTres();

private:
  int **vet;
  int m;
  int n;
  
  ReadFile *file;

  void testeK(int *vetor, int n);
};

#endif //EndCenarioTres
