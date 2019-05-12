#include <iostream>


using namespace std;


class QuickSort {

    private:

        bool swaped = false;
        int vetorIDObjeto[];

    public: 

        void sort(int v[], int low, int high); //Params: vetor de elementos, menor valor do vetor e maior valor (indice)
        void swap(int* left, int* right); // Função de troca, inverte a posição dos elementos quando chamada
        int partition(int v[], int low, int high); //Params: vetor de elementos, menor valor do vetor e maior valor (indice)

};