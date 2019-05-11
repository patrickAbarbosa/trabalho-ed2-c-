//
// Created by igorphelype on 11/05/19.
//

#include <iostream>
#include "../Header/Rating.h"

using namespace std;

void Rating::print() {
    cout << "Rating{" << endl;
    cout << "\tUSERID: " << this->USERID << endl;
    cout << "\tUSERID: " << this->MOVIEID << endl;
    cout << "\tRATING\u200B: " << this->RATING << endl;
    cout << "\tTIMESTAMP: " << this->TIMESTAMP << endl;
    cout << "}" << endl;
}

Rating::Rating(int USERID, int MOVIEID, float RATING, int TIMESTAMP){
    this->USERID = USERID;
    this->MOVIEID = MOVIEID;
    this->RATING = RATING;
    this->TIMESTAMP = TIMESTAMP;
}