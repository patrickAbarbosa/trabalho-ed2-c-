#include <iostream>
#include <fstream>    // read
#include <sstream>    // String com get line
#include <ctime>      // usado para randomizar a leitura e calcular o tempo total

using namespace std;

readFile::()
{
  srand(time(NULL));
  ifstream in("teste.txt", std::ios::binary | std::ios::ate);
  int fileSize = in.tellg();

  if(in.is_open())
  {
    cout << "Arquivo aberto!" << endl;

    //apontando para o final do aquivo
    for(int i = 0; i<20; i++){
      int bit = rand()%(fileSize);
      cout << " bit : "<< bit << endl;
      in.seekg(bit);
      string lixo;
      getline(in, lixo);
      int teste;
      in >> teste;
      cout << teste << endl;
    }
  }
  else{
    cout << "Erro ao carregar aquivo" << endl;
  }
  return 0;
}

