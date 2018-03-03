#ifndef DRAMAMOVIE_H
#define DRAMAMOVIE_H

#include "movie.h"
#include <string>
using namespace std; 

class DramaMovie : public Movie {

public:
	DramaMovie(const string& directorName, const string& movieTitle,
		       const int releaseYear);
	virtual ~DramaMovie();

	bool operator==(const Movie& obj) const override;
	bool operator<(const Movie& movieObj) const override;
	bool operator>(const Movie& movieObj) const override;

	void print() const override;

private:
	const char DRAMA = 'D'; 
};

#endif 
