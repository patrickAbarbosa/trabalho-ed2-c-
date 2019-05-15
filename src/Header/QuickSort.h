#include <iostream>
#include "../Header/Rating.h"
#include "../Header/Analysis.h"

using namespace std;


class QuickSort {
    private:
        bool swaped = false;

    public:
        Analysis sort(int v[], int size);
        Analysis sortRatings(Rating vr[], int size);
        Analysis sortMediana(int v[], int low, int high, int k);
        int retornaMediana(int low, int high, int k);
        int partitionMediana(int v[], int low, int high, int mediana);
        void sortRatings(Rating vr[], int low, int high);
        int partitionRatings(Rating vr[], int low, int high);
        void sort(int v[], int low, int high); //Params: vetor de elementos, menor valor do vetor e maior valor (indice)
        void swap(int* left, int* right); // Função de troca, inverte a posição dos elementos quando chamada
        void swap(Rating* left, Rating* right);
        int partition(int v[], int low, int high); //Params: vetor de elementos, menor valor do vetor e maior valor (indice)
};