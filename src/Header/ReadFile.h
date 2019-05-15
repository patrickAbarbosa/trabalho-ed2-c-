#ifndef READFILE_H_INCLUDED
#define READFILE_H_INCLUDED

#include <iostream>
#include <fstream> 
#include "Rating.h"
using namespace std;

class ReadFile
{
  public:
    ReadFile();
    ReadFile(string diretory);
    ~ReadFile();

    bool setFileDiretory(string diretory);
    void read(int nVal);
    //Cenario 1
    int* readUserId(int nVal); // Lê e retorna um vetor com n USER_ID aleatórios
    Rating* readUMRT(int nVal); // Lê e retorna um vetor com n Rating (USERID, MOVIEID, RATING, TIMESTAMP) aleatórios
    


  private:
    int sizeReadFile;
    string *fileIn;
    ifstream file;

    int auxRead(int max, int probabilidade);
};
#endif // READFILE_H_INCLUDED