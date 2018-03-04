#ifndef CLASSICMOVIE_H
#define CLASSICMOVIE_H

#include "movie.h"
#include <string>

class ClassicMovie : public Movie {

public:
	ClassicMovie(const string& directorName, const string& movieTitle,
		const int releaseYear, const string& majorActor, int releaseMonth);
	virtual ~ClassicMovie();

	void print() const override;

	bool operator==(const Movie& movieobj) const override;
	bool operator<(const Movie& movieObj) const override;
	bool operator>(const Movie& movieObj) const override;
	Movie& operator=(const Movie& movieObj) override;

	const string getMajorActor() const;
	const int getReleaseMonth() const;

private:
	string majorActor;
	int releaseMonth;
	const char CLASSIC = 'F';
};

#endif