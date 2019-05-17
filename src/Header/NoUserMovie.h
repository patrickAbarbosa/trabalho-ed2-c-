#ifndef NOUSERMOVIE_H
#define NOUSERMOVIE_H

#include <iostream>

using namespace std;

class NoUserMovie
{

public:
  NoUserMovie(){};
  NoUserMovie(string userId, string movieId) { this->userId = userId; this->movieId = movieId; };
  ~NoUserMovie(){};
  
  void setUserId(string userId){ this->userId = userId; };
  void setMovieId(string movieId){ this->movieId = movieId; };

  string getUserId(){ return userId; };
  string getMovieId(){ return movieId; };
  
private:
  string userId;
  string movieId;
};

#endif