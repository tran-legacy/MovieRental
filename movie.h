///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : Movie class that classic, comedy, and drama. 
//			    All methods will be overriden by the child class.
///////////////////////////////////////////////////////////////////////////////

#ifndef MOVIE_H
#define MOVIE_H

#include <string>

using namespace std;

class Movie {
public:
	// Constructor
	Movie(const Movie& m); 
	Movie(const string& directorName, const string& movieTitle, const int releaseYear);
	// Destructor
	virtual ~Movie() {}

	virtual void print() const = 0;

	// Operator overloading for sorting purposes
	virtual bool operator==(const Movie& movieObj) const = 0;
	virtual bool operator<(const Movie& movieObj) const = 0;
	virtual bool operator>(const Movie& movieObj) const = 0;
	//virtual Movie& operator=(const Movie& movieObj) = 0; 

	// Getters for operators
	const string getMovieTitle() const;
	const string getDirectorName() const;
	int getReleaseYear() const;

protected:
	string movieTitle;
	string directorName;
	int releaseYear;
};

#endif