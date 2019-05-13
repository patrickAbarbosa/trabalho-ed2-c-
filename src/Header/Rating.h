//
// Created by igorphelype on 11/05/19.
//

#ifndef TRABALHO_ED2_CPLUSPLUS_RATING_H
#define TRABALHO_ED2_CPLUSPLUS_RATING_H


class Rating {
public:
    int USERID;
    int MOVIEID;
    float RATING;
    int TIMESTAMP;

    Rating(int USERID, int MOVIEID, float RATING, int TIMESTAMP);
    Rating(){};
    void print();
};


#endif //TRABALHO_ED2_CPLUSPLUS_RATING_H
