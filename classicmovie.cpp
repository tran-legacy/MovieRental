#include "classicmovie.h"
#include <iostream>

ClassicMovie::ClassicMovie(const string& directorName, const string& movieTitle,
						   const int releaseYear, const string & majorActor, 
						   int releaseMonth)
						   : Movie(directorName, movieTitle, releaseYear) {
	this->majorActor = majorActor;
	this->releaseMonth = releaseMonth;
}

ClassicMovie::~ClassicMovie() {}

void ClassicMovie::print() const {
	cout << CLASSIC << ", " << this->directorName << ", " << this->movieTitle
		<< ", " << this->majorActor << ", " << this->releaseMonth << " " 
		<< this->releaseYear << endl;
}

const string ClassicMovie::getMajorActor() const {
	return majorActor;
}

const int ClassicMovie::getReleaseMonth() const {
	return releaseMonth;
}

// Not being called for some reason
bool ClassicMovie::operator==(const Movie& movieObjOrig) const {
	const ClassicMovie& movieObj = dynamic_cast<const ClassicMovie&>(movieObjOrig);
	if (this == &movieObj) return true;
	// Check if all fields are equal to each other
	return (this->directorName == movieObj.getDirectorName() &&
		this->movieTitle == movieObj.getMovieTitle() &&
		this->releaseYear == movieObj.getReleaseYear() &&
		this->majorActor == movieObj.getMajorActor() &&
		this->releaseMonth == movieObj.getReleaseMonth());
}

bool ClassicMovie::operator<(const Movie& movieObjOrig) const{
	// Cast the Movie* into classic movie so we have access to its data
	const ClassicMovie movieObj = dynamic_cast<const ClassicMovie&>(movieObjOrig);

	if (this->releaseYear < movieObj.getReleaseYear()) {  // Check if year is equal
		return true;
	} else if (this->releaseYear > movieObj.getReleaseYear()) {
		return false;
	} else { // Years are equal, move to months
		if (this->releaseMonth < movieObj.getReleaseMonth()) {
			return true;
		} else if (this->releaseMonth > movieObj.getReleaseMonth()) {
			return false;
		} else { // Months are equal, check actor
			if (this->majorActor < movieObj.getMajorActor()) {
				return true;
			} else if (this->majorActor > movieObj.getMajorActor()) {
				return false;
			}
		}
	}
	return false;
}

bool ClassicMovie::operator>(const Movie& movieObj) const{
	return !(*this < movieObj);
}
