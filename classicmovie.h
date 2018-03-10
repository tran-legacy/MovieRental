#ifndef CLASSICMOVIE_H
#define CLASSICMOVIE_H

#include "movie.h"
#include <string>
#include <vector>

class ClassicMovie : public Movie {

public:
	ClassicMovie(const string& directorName, const string& movieTitle,
		const int releaseYear, const string& majorActor, int releaseMonth);
	virtual ~ClassicMovie();
	// Prints out the information about the movie in formated order
	void print() const override;
	// Operator overrides
	bool operator==(const Movie& movieobj) const override;
	bool operator<(const Movie& movieObj) const override;
	bool operator>(const Movie& movieObj) const override;

	// Returns if the actor given in the param is in the major actor vecter
	bool findMajorActor(const string& actor) const;
	// Returns release month
	const int getReleaseMonth() const;
	// Returns the first major actor 
	string getMajorActor() const;
	void addMajorActor(const string& actor);

private:
	vector<string> majorActor;
	int releaseMonth;
	const char CLASSIC = 'F';
};

#endif