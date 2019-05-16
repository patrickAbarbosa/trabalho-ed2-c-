//
// Created by igorphelype on 12/05/19.
//

#ifndef TRABALHO_ED2_CPLUSPLUS_ANALYSIS_H
#define TRABALHO_ED2_CPLUSPLUS_ANALYSIS_H

#include <iostream>
#include <sstream>

using namespace std;

class Analysis {
public:
    Analysis(){
        this->nComparacoes = 0;
        this->nCopias = 0;
        this->tempoGasto = 0;
    }
    void printAnalysis(){
        cout << "Analysis{" << endl;
        cout << "\tNúmero de Comparações: " << this->nComparacoes << endl;
        cout << "\tNúmero de Cópias: " << this->nCopias << endl;
        cout << "\tTempo gasto: " << this->tempoGasto << endl;
        cout << "}" << endl;
    }
    string toString(){
        ostringstream s;
        s << "Analysis{ nComparacoes: " << nComparacoes << ", nCopias: " << this->nCopias << ", tempoGasto: " << tempoGasto << " }";
        return s.str();
    }
    unsigned long long int nComparacoes;
    unsigned long long int nCopias;
    float tempoGasto;
};


#endif //TRABALHO_ED2_CPLUSPLUS_ANALYSIS_H
