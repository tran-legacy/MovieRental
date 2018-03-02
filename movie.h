#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

class Movie {
public:
	Movie(const string& directorName, const string& movieTitle, const int releaseYear);
	virtual ~Movie() {}

	virtual void print() const = 0;

	// Operator overloading for sorting purposes
	virtual bool operator==(const Movie* movieObj) const = 0;
	virtual bool operator<(const Movie* movieObj) const = 0;
	virtual bool operator>(const Movie* movieObj) const = 0;

	const string getMovieTitle() const ;
	const string getDirectorName() const;
	int getReleaseYear() const;

protected:
	string movieTitle;
	string directorName;
	int releaseYear;
};

#endif