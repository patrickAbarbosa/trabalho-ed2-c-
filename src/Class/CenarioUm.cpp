//
// Created by igorphelype on 12/05/19.
//

#include "../Header/CenarioUm.h"
#include "../Header/Data.h"
#include "../Header/ReadFile.h"
#include "../Header/utils.h"
#include "../Header/QuickSort.h"

/**
 * Como utilizar: CenarioUm::exec(new Data(), new ReadFile("ratings.csv"));
 * @param db
 * @param read
 * @param N
 */
void CenarioUm::exec(Data *db, ReadFile* read){
    int vetorN[6] = {1000,5000, 10000,50000,100000,500000};
    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 5; j++) {
            int N = vetorN[i];
            cout << endl << endl << endl << "--- " << "Cenário 1 (";
            cout << j+1 << "/5)" << " --- " << "N = " << N
                 << endl;
            int *vet = read->readUserId(N);
            Rating *vet1 = read->readUMRT(N);
            QuickSort q = QuickSort();
            Analysis analiseVetorInt, analiseVetorRating;

            //        cout << endl << "-- Cenario 1 --" << endl;
            //        cout << "-- Vetor de USERIDs --" << endl;
            //        printArray(vet, N);
            //        cout << "-- Vetor de Rating --" << endl;
            //        printRatingArray(vet1, N);

            analiseVetorInt = q.sort(vet, N);
            analiseVetorRating = q.sortRatings(vet1, N);

            //    cout << "-- Vetor de USERID (Ordenado) --" << endl;
            //    printArray(vet, N);
            //    cout << "-- Vetor de Rating (Ordenado)--" << endl;
            //    printRatingArray(vet1, N);
            cout << "Estatística vetor de USERID" << endl;
            cout << analiseVetorInt.toString();
            cout << endl;
            cout << "Estatística vetor de Rating" << endl;
            analiseVetorRating.toString();
            delete[] vet;
            delete[] vet1;
        }
    }
};