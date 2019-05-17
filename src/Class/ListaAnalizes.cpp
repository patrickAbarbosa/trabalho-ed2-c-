#include "../Header/ListaAnalizes.h"

#include <iostream>
#include "../Header/Analysis.h"

ListaAnalysis::ListaAnalysis()
{
  tam = 0;
  primeiro = NULL;
}

ListaAnalysis::~ListaAnalysis()
{
  Analysis *aux;
  while(primeiro)
  {
    aux = primeiro->prox;
    delete primeiro;
    primeiro = aux;
  } 
}

void ListaAnalysis::add(Analysis *analise)
{
  if(primeiro == NULL)
    primeiro = analise;
  else
  {
    Analysis *p = primeiro;
    Analysis *ant = NULL;
    
    while(p)
    {
      if(p->cenario > analise->cenario)
      {
        analise->prox = p;
        ant->prox = analise;
      }
      else
      {
        ant =  p;
        p = p->prox;
      }
    }
  }
}

Analysis* ListaAnalysis::auxPrintList(Analysis *p, string cenario)
{
  if(p)
  {
    while(p && p->cenario <= cenario)
    {
      if(p->cenario == cenario)
        p->printAnalysis();
    }
  }
  return p;
}

void ListaAnalysis::printList()
{
  Analysis *p = primeiro;
  while(p)
  {
    cout << p->cenario << endl << endl;
    p = auxPrintList(p, p->cenario);
  } 
}

void ListaAnalysis::exportar(string fileName)
{
  cout << "Implementar exportar Lista de Analises" << endl;
}
