#include "classicmovie.h"
#include <iostream>

ClassicMovie::ClassicMovie(const string& directorName, const string& movieTitle,
						   const int releaseYear, const string & majorActor, 
						   int releaseMonth)
						   : Movie(directorName, movieTitle, releaseYear) {
	this->majorActor.push_back(majorActor);
	this->releaseMonth = releaseMonth;
}

ClassicMovie::~ClassicMovie() {}

void ClassicMovie::print() const {
	cout << CLASSIC << ", " << this->directorName << ", " << this->movieTitle
		<< ", ";
	for (size_t i = 0; i < this->majorActor.size(); ++i) {
		cout << this->majorActor.at(i) << ", ";
	}
	cout << this->releaseMonth << " " << this->releaseYear << endl;
}

// 
bool ClassicMovie::findMajorActor(const string& actor) const {
	for (size_t i = 0; i < majorActor.size(); ++i) {
		if (majorActor.at(i) == actor) {
			return true;
		}
	}
	return false;
}

const int ClassicMovie::getReleaseMonth() const {
	return releaseMonth;
}

// Allows us to add a new major actor if it is different than currently in
void ClassicMovie::addMajorActor(const string & actor){
	majorActor.push_back(actor);
}

// Does not check for major actors since it's an array
bool ClassicMovie::operator==(const Movie& movieObjOrig) const {
	const ClassicMovie& movieObj = dynamic_cast<const ClassicMovie&>(movieObjOrig);
	if (this == &movieObj) return true;
	// Check if all fields are equal to each other
	return (this->directorName == movieObj.getDirectorName() &&
		this->movieTitle == movieObj.getMovieTitle() &&
		this->releaseYear == movieObj.getReleaseYear() &&
		this->releaseMonth == movieObj.getReleaseMonth());
}

bool ClassicMovie::operator<(const Movie& movieObjOrig) const{
	// Cast the Movie* into classic movie so we have access to its data
	const ClassicMovie& movieObj = dynamic_cast<const ClassicMovie&>(movieObjOrig);

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
			if (this->majorActor[0] < movieObj.majorActor[0]) {
				return true;
			} else if (this->majorActor[0] > movieObj.majorActor[0]) {
				return false;
			}
		}
	}
	return false;
}

bool ClassicMovie::operator>(const Movie& movieObj) const{
	return !(*this < movieObj);
}



