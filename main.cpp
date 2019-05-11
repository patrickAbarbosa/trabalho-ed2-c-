/*
 * Data Struct II
 * 
 * Local: Federal Univercity of Juiz de Fora
 * Authors: Igor Phelipe, Miriam Queiroz, Patrick Barbosa and Pedro Reis
 * Course: Science Computer
 * 
 * Licence: GNU
 */

#include <iostream>

using namespace std;

void menu()
{
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

  if (a)
  {
    a->menu();
    delete a;  
  }
  return 0;
}