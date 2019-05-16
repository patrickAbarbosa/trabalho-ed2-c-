//
// Created by igorphelype on 12/05/19.
//

#include "../Header/CenarioUm.h"
#include "../Header/Data.h"
#include "../Header/ReadFile.h"
#include "../Header/utils.h"
#include "../Header/QuickSort.h"
#include <fstream>

/**
 * Como utilizar: CenarioUm::exec(new Data(), new ReadFile("ratings.csv"));
 * @param db
 * @param read
 * @param N
 */
void CenarioUm::exec(Data *db, ReadFile* read, int vetorN[]){
    ofstream file;

    file.open("saida.txt", ios::binary | ios::ate);

    // cenario,numero_comparacoes,numero_copias,tempo_gasto,n,tipo_vetor
    file << "cenario,numero_comparacoes,numero_copias,tempo_gasto,n,tipo_vetor" << endl;
    for(int i = 0; i < 6; i++) {
        Analysis anMediaInt = Analysis(), anMediaRating = Analysis();
        int N = vetorN[i];
        cout << endl << endl << endl << "--- " << "N = " << N << endl;
        for(int j = 0; j < 5; j++) {
            int *vetInt = read->readUserId(N);
            Rating *vetRating = read->readUMRT(N);
            QuickSort q = QuickSort();

            Analysis
                analiseVetorInt = q.sort(vetInt, N),
                analiseVetorRating = q.sortRatings(vetRating, N);

            // Somatorio das analises do vetor de inteiros
            anMediaInt.nComparacoes += analiseVetorInt.nComparacoes;
            anMediaInt.nCopias += analiseVetorInt.nCopias;
            anMediaInt.tempoGasto += analiseVetorInt.tempoGasto;

            // Somatorio das analises do vetor de Ratings
            anMediaRating.nComparacoes += analiseVetorRating.nComparacoes;
            anMediaRating.nCopias += analiseVetorRating.nCopias;
            anMediaRating.tempoGasto += analiseVetorRating.tempoGasto;

            delete[] vetInt;
            delete[] vetRating;
        }

        // Somatorio das analises do vetor de inteiros
        anMediaInt.nComparacoes /= 5;
        anMediaInt.nCopias /= 5;
        anMediaInt.tempoGasto /= 5;

        // Somatorio das analises do vetor de Ratings
        anMediaRating.nComparacoes /= 5;
        anMediaRating.nCopias /= 5;
        anMediaRating.tempoGasto /= 5;

        cout << anMediaInt.toString() << endl;
        cout << anMediaRating.toString() << endl;

        file << "cenario1" << "," << anMediaInt.nComparacoes << "," << anMediaInt.nCopias << "," << anMediaInt.tempoGasto << "," << N << "," << "INT" << "," << endl;
        file << "cenario1" << "," << anMediaRating.nComparacoes << "," << anMediaRating.nCopias << "," << anMediaRating.tempoGasto << "," << N << "," << "RATING" << "," << endl;
    }
    file.close();
};