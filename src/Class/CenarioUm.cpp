//
// Created by igorphelype on 12/05/19.
//

#include "../Header/CenarioUm.h"
#include "../Header/Data.h"
#include "../Header/ReadFile.h"
#include "../Header/utils.h"
#include "../Header/QuickSort.h"

/**
 *
 * @param db
 * @param read
 * @param size
 */
void CenarioUm::exec(Data *db, ReadFile* read, int* sizes){
    for(int i = 0; i < 6; i++) {
        cout << endl << endl << "--- " << "TESTE " << i+1 << " ---" << endl << "tamanho: " << ;
        int size = sizes[i];
        int *vet = read->readUserId(size);
        Rating *vet1 = read->readUMRT(size);
        QuickSort q = QuickSort();
        Analysis analiseVetorInt, analiseVetorRating;

        //    cout << "-- Cenario 1 --" << endl;
        //    cout << "-- Vetor de USERIDs --" << endl;
        //    printArray(vet, size);
        //    cout << "-- Vetor de Rating --" << endl;
        //    printRatingArray(vet1, size);

        analiseVetorInt = q.sort(vet, size);
        analiseVetorRating = q.sortRatings(vet1, size);

        //    cout << "-- Vetor de USERID (Ordenado) --" << endl;
        //    printArray(vet, size);
        //    cout << "-- Vetor de Rating (Ordenado)--" << endl;
        //    printRatingArray(vet1, size);
        cout << "-- Analise Vetor de USERID (Ordenado) --" << endl;
        analiseVetorInt.printAnalysis();
        cout << "-- Analise Vetor de Rating (Ordenado)--" << endl;
        analiseVetorRating.printAnalysis();

        delete [] vet;
        delete [] vet1;
    }
};