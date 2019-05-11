/*
 * Data Struct II
 * 
 * Local: Federal Univercity of Juiz de Fora
 * Authors: Igor Phelype, Miriam Queiroz, Patrick Barbosa and Pedro Reis
 * Course: Science Computer
 * 
 * Licence: GNU
 */

#include <iostream>
#include "src/Header/utils.h"
#include "src/Header/ReadFile.h"

using namespace std;

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

int main(int argc, char *argv[])
{
  cout << "Estrutura de dados II - parte 1" << endl;

  switch (argc)
  {
  case 1:
    cout << "arquivo de entrada" << endl;
    break;
  case 2:
    cout << "arquivo de saida" << endl;
    break;
  default:
    break;
  }


  int tamanho = 11;
  int filmes[11] = {1, 5, 7, 8, 4, 3, 5, 7, 3, 2, 1};

  printArray(filmes, tamanho);
  return 0;
}