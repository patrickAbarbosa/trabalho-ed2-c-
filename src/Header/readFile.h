#ifndef READFILE_H_INCLUDED
#define READFILE_H_INCLUDED

#include <iostream>

using namespace std;

class readFile
{
  public:
    readFile();
    readFile(string diretory);
    ~readFile();

    void setFileDiretory(string diretory);
    void read();

  private:
    int sizeReadFile;
    string *fileIn;
};
#endif // READFILE_H_INCLUDED