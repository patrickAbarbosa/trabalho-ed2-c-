#ifndef LISTAANALYSIS_H
#define LSSTAANALYsIS_H

#include <iostream>
#include "./Analysis.h"

using namespace std;

class ListaAnalysis
{
  public:
    ListaAnalysis();
    ~ListaAnalysis();

    void add(Analysis *analise);
    Analysis *getProx();
    
    void printList();
    void exportar(string fileName);
  private:
    Analysis *primeiro;

    int tam;

    Analysis *auxPrintList(Analysis *p, string cenario);
};
#endif