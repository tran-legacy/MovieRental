#ifndef COMEDYMOVIE_H
#define COMEDYMOVIE_H

#include "movie.h"
#include <string>
using namespace std;

class ComedyMovie : public Movie {

public:
	ComedyMovie(const string& directorName, const string& movieTitle,
		        const int releaseYear);
	virtual ~ComedyMovie();

	void print() const override;

	bool operator==(const Movie& movieObj) const override;
	bool operator<(const Movie& movieObj) const override;
	bool operator>(const Movie& movieObj) const override;
	Movie& operator=(const Movie& movieObj) override; 

private:
	const char COMEDY = 'F';
};

#endif 
