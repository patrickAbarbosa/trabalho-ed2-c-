#include <iostream>

using namespace std;

unsigned long long int qtdH = 0;
void printVetor(int vetor[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<< vetor[i] <<endl;
    }
}

void heapSort(int vetor[], int n)
{
    int i = n/2, pai, filho, aux;
    for(;;)
    {
        if(i>0)
        {
            i--;
            aux = vetor[i];
        }
        else
        {
            n--;
            if(n==0)
            {
                printVetor(vetor, 5);
                return;
            }

            aux = vetor[n];
            vetor[n] = vetor[0];
        }
        pai = i;
        filho = i*2+1;
        while(filho<n)
        {
            if( (filho + 1 < n ) && (vetor[filho + 1] > vetor[filho]))
                filho++;
            if(vetor[filho] > aux)
            {
                vetor[pai] = vetor[filho];
                pai = filho;
                filho = pai * 2 +1;
            }
            else break;
        }
        vetor[pai] = aux;
        qtdH++;
    }

}

int main()
{
    int vetor[5] = {7,4,8,3,1};
    heapSort(vetor, 5);

    return 0;
}
