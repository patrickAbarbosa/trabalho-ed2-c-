//
// Created by igorphelype on 11/05/19.
//

#include <iostream>
#include "../Header/Rating.h"

using namespace std;

void Rating::print() {
    cout << "\tRating{" << endl;
    cout << "\t\tUSERID: " << this->USERID << endl;
    cout << "\t\tMOVIEID: " << this->MOVIEID << endl;
    cout << "\t\tRATING\u200B: " << this->RATING << endl;
    cout << "\t\tTIMESTAMP: " << this->TIMESTAMP << endl;
    cout << "\t}" << endl;
}

Rating::Rating(int USERID, int MOVIEID, float RATING, int TIMESTAMP){
    this->USERID = USERID;
    this->MOVIEID = MOVIEID;
    this->RATING = RATING;
    this->TIMESTAMP = TIMESTAMP;
}