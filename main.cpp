/*
 * Data Struct II
 * 
 * Local: Federal University of Juiz de Fora
 * Authors: Igor Phelype, Mirian Queiroz, Patrick Barbosa and Pedro Reis
 * Course: Science Computer
 * 
 * Licence: GNU
 */

#include <iostream>
#include "src/Header/utils.h"
#include "src/Header/ReadFile.h"
#include "src/Header/Rating.h"
#include "src/Header/Data.h"
#include "src/Header/QuickSort.h"
#include "src/Header/Heapsort.h"

using namespace std;

<<<<<<< HEAD
void involuntario()
{
  cout << "Rodar todos cenarios. Ps: nao implementado." <<endl;
}

void cenario1(Data *db, ReadFile *read, int size)
{
  cout << "-- Cenario 1" << endl;
  int *vet = read->readUserId(size);

  cout << "Tempo de leitura de user ID: " << endl;

  delete [] vet;
}

void cenario2(Data *db, ReadFile *read, int size)
{
  cout << "-- Cenario 2" << endl;
  int *vet = read->readUserId(size);

  cout << "Tempo de leitura de user ID: " << endl;

  delete [] vet;
}

void cenario3(Data *db, ReadFile *read, int size)
{
  cout << "-- Cenario 3" << endl;
  int *vet = read->readUserId(size);

  cout << "Tempo de leitura de user ID: " << endl;

  cout << "Vetor com user ID: ";
  for(int i = 0; i < size; i++)
    cout << vet[i] << ", ";
  cout << endl;
  
  heapSort(vet, size);
  
  cout << "Sort: ";
  for(int i = 0; i < size; i++)
    cout << vet[i] << ", ";
  cout << endl;
  delete [] vet;
}
void menuSelecionado(char c)
{
  switch (c)
  {
  case '0':
    
    break;
  
  default:
    break;
  }
}
=======
void CenarioUm();
>>>>>>> 8138ee6fc9314d34feaa82f4ff2a5b6cfd9f0fce

void menu()
{
	char menu;
	while(1)
	{
		cout << "#-- \t MENU \t--#" << endl;
		cout << "[0] - Passar por todos cenarios automaticamente." << endl;
		cout << "[1] - Processar cenario 1" << endl;
		cout << "[2] - Processar cenario 2" << endl;
		cout << "[3] - Processar cenario 3" << endl;
		cout << "[4] - Processar cenario 4" << endl;
		cout << "[5] - Processar parte 2"   << endl;
		cout << "[6] - Gerar relatorio"     << endl;
		cout << "[q] - Sair"                << endl;
		cin >> menu;

		do
		{
			cout << "Digite uma opcao do menu: ";
			cin >> menu;
		} while ((menu < '0' || menu > '9') && menu != 'q');

		if (menu == 'q')
		{
			cout << "Saindo..." << endl;
			cout << "Bye" << endl;
			return;
		}
	}
}

<<<<<<< HEAD
int main(int argc, char *argv[])
{
  cout << "Estrutura de dados II - parte 1" << endl;
  
  Data *db;
  db = new Data();
  ReadFile a("ratings.csv");

  cenario3(db, &a, 550);
  return 0;
  Rating *b = a.readUMRT(10);

  for(int i = 0; i< 10; i++)
    b[i].print();
  return 0;
  switch (argc)
  {
  case 1:
    
    break;
  case 2:
    cout << "arquivo de saida" << endl;
    break;
  default:
    break;
  }


  int tamanho = 11;
  int filmes[11] = {1, 5, 7, 8, 4, 3, 5, 7, 3, 2, 1};
=======
int main(int argc, char *argv[]){
	cout << "Estrutura de dados II - parte 1" << endl;
	switch (argc){
	case 1:
		break;
	case 2:
		cout << "arquivo de saida" << endl;
		break;
	default:
		break;
	}
	return 0;
}
>>>>>>> 8138ee6fc9314d34feaa82f4ff2a5b6cfd9f0fce

void CenarioUm(){
	int tamanho = 11;
	int filmes[11] = {1, 5, 7, 8, 4, 3, 5, 7, 3, 2, 1};
	
	printArray(filmes, tamanho);
}