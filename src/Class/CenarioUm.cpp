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
void CenarioUm::exec(Data *db, ReadFile* read, int size){
    int *vet = read->readUserId(size);
    Rating *vet1 = read->readUMRT(size);
    QuickSort q = QuickSort();

    cout << "-- Cenario 1 --" << endl;
    cout << "-- Vetor de USERID --" << endl;
    printArray(vet, size);
    cout << "-- Vetor de Rating --" << endl;
    printRatingArray(vet1, size);

    q.sort(vet, 0, size-1);
    q.sortRatings(vet1, 0, size-1);

    cout << "-- Vetor de USERID (Ordenado) --" << endl;
    printArray(vet, size);
    cout << "-- Vetor de Rating (Ordenado)--" << endl;
    printRatingArray(vet1, size);

    delete [] vet;
    delete [] vet1;
};