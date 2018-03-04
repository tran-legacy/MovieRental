#include "movie.h"

Movie::Movie(const Movie& m) {
	this->directorName = m.directorName; 
	this->movieTitle = m.movieTitle; 
	this->releaseYear = m.releaseYear; 
}

Movie::Movie(const string& directorName, const string& movieTitle,  const int releaseYear) {
	this->movieTitle = movieTitle;
	this->directorName = directorName;
	this->releaseYear = releaseYear;
}

const string Movie::getMovieTitle() const{
	return movieTitle;
}

const string Movie::getDirectorName() const{
	return directorName;
}

int Movie::getReleaseYear() const{
	return releaseYear;
}
