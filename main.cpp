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

using namespace std;

int main(int argc, char *argv[])
{
  cout << "Olá Mundo" << endl;
  int tamanho = 11;
  int filmes[11] = {1, 5, 7, 8, 4, 3, 5, 7, 3, 2, 1};

  printArray(filmes, tamanho);
  return 0;
}