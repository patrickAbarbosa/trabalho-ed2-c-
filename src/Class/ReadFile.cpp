#include "../Header/ReadFile.h"

#include <iostream>
#include <fstream> // read
#include <sstream> // String com get line
#include <ctime>   // usado para randomizar a leitura e calcular o tempo total

using namespace std;

ReadFile::ReadFile()
{
  sizeReadFile = -1;
  fileIn = NULL;
}

ReadFile::ReadFile(string diretory)
{
  if (!setFileDiretory(diretory))
    cout << "[read file] Diretorio invalido" << endl;
}

ReadFile::~ReadFile()
{
  if (fileIn)
    delete fileIn;
}

bool ReadFile::setFileDiretory(string diretory)
{
  file.open(diretory, std::ios::binary | std::ios::ate);

  if (file.is_open())
  {
    sizeReadFile = 0;
    *fileIn = diretory;

    return true;
  }
  return false;
}

void ReadFile::read(int nVal)
{
  if (!file.is_open())
  {
    cout << "Nenhuma arquivo a ser lido. :(" << endl;
    return;
  }
  srand(time(NULL));

  int fileSize = file.tellg();

  for (int i = 0; i < nVal; i++)
  {
    int bit = rand() % (fileSize);
    file.seekg(bit);
    string lixo;
    getline(file, lixo);
    int info;
    file >> info;
    cout << info << endl;
  }
}

int* ReadFile::readUserId(int nVal)
{
  if (!file.is_open())
  {
    cout << "Nenhuma arquivo a ser lido. :(" << endl;
    return;
  }
  
  int *vet = new int[nVal];
  srand(time(NULL));

  int fileSize = file.tellg();

  for (int i = 0; i < nVal;)
  {
    int bit = rand() % (fileSize);
    file.seekg(bit);
    string lixo;
    getline(file, lixo);
    int id;
    file >> id;
    if(id != 0)
    {
      vet[i] = id;
      i++;
    }
  }
  return vet;
}
