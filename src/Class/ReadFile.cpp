#include "../Header/ReadFile.h"
#include <ctime>
#include <iostream>
#include <fstream> // read
#include <sstream> // String com get line
#include <ctime>   // usado para randomizar a leitura e calcular o tempo total
#include <cmath>
#include "../Header/Rating.h"
using namespace std;

ReadFile::ReadFile()
{
  sizeReadFile = -1;
  fileIn = NULL;
}

ReadFile::ReadFile(string diretory)
{
  cout << "OI";
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
  file.open(diretory, ios::binary | ios::ate);

  if (file.is_open())
  {
    sizeReadFile = 0;
    fileIn = new string;
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
  
  int fileSize = file.tellg();

  for (int i = 0; i < nVal; i++)
  { 
    srand(i);
    int bit = rand() % (fileSize);
    file.seekg(bit);
    string lixo;
    getline(file, lixo);
    int info;
    file >> info;
    cout << info << endl;
  }
}

int ReadFile::auxRead(int max, int probabilidade)
{
    srand(time(NULL) * probabilidade);
    int rands =  (rand()%file.tellg());
    
    if(rands<500)
      rands = rands * 1000000;
    return rands;
}

int* ReadFile::readUserId(int nVal)
{ 
  if (!file.is_open())
  {
    cout << "Nenhuma arquivo a ser lido. :(" << endl;
    return NULL;
  }
  
  int *vet = new int[nVal];
  
  int max = file.tellg();
  int probabilidade = nVal + 1;
  
  for (int i = 0; i < nVal; )
  {

    file.seekg(auxRead(max,  probabilidade));
    string lixo;
    getline(file, lixo);
    int id;    
    file >> id;
    if(id != 0)
    {
      vet[i] = id;
      i++;
    }
    probabilidade = rand()%max;
  }
  return vet;
}

Rating* ReadFile::readUMRT(int nVal)
{
  if (!file.is_open())
  {
    cout << "Nenhuma arquivo a ser lido. :(" << endl;
    return NULL;
  }
  
  Rating *vet = new Rating[nVal];
  
  int max = file.tellg();
  int probabilidade = nVal + 1;
  
  for (int i = 0; i < nVal; )
  {

    file.seekg(auxRead(max,  probabilidade));
  
    string lixo, line;
    getline(file, lixo);   
    getline(file, line);

    stringstream ss(line);
    
    getline(ss, line, ',');
    int userId;
    userId = atoi(line.c_str());

    getline(ss, line, ',');
    int movieId;
    movieId = atoi(line.c_str());

    getline(ss, line, ',');
    float rating;
    rating = atoi(line.c_str());
    
    getline(ss, line);
    int timestamp;
    timestamp = atoi(line.c_str());  
    
    if(userId != 0)
    {
//TODO: PODE-SE USAR: vet[i] = Rating(userId, movieId, rating, timestamp);
      vet[i].USERID = userId;
      vet[i].MOVIEID = movieId;
      vet[i].RATING = rating;
      vet[i].TIMESTAMP = timestamp;
      i++;
    }
    probabilidade = rand()%max;
  }
  return vet;
}
