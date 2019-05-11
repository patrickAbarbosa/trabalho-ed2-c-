#ifndef READFILE_H_INCLUDED
#define READFILE_H_INCLUDED

#include <iostream>
#include <fstream> 

using namespace std;

class ReadFile
{
  public:
    ReadFile();
    ReadFile(string diretory);
    ~ReadFile();

    bool setFileDiretory(string diretory);
    void read();

  private:
    int sizeReadFile;
    string *fileIn;
    ifstream file;
};
#endif // READFILE_H_INCLUDED