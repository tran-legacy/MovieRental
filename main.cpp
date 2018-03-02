#include "movie.h"
#include "comedymovie.h"
#include "classicmovie.h"
#include "dramamovie.h"
#include <iostream>
#include <string>

using namespace std;


int main() {
	/******Initial Testing: PRINT in movies**********/
	Movie* movie1 = new ComedyMovie("Nora Ephron", "You've Got Mail", 1998);
	movie1->print();
	Movie* movie2 = new DramaMovie("Nick Nelson", "I'm just a boi", 2018); 
	movie2->print(); 
	Movie* movie3 = new ClassicMovie("Ball beep", "Orange is the new juice", 2001, "Fahad", 5); 


	movie3->print();
	
	/*********OPERATORS TEST***************/
	// Operator ==
	////// Classic Movie
	Movie* movie4 = new ClassicMovie("Ball beep", "Orange is the new juice", 2001, "Fahad", 5);
	Movie* movie5 = new ClassicMovie("Ball beep", "Orange is the new juice", 2001, "Tran", 5);
	bool x = movie3 == movie3;
	cout << (movie3 == movie4) << "<--should be 1" << endl;

	
	////// Drama Movie
	Movie* dramaMovie1 = new DramaMovie("Nick Nelson", "I'm just a boi", 2018);
	Movie* dramaMovie2 = new DramaMovie("Nick Nelson", "I'm just a boi", 2018);
	
	cout << (dramaMovie1 == dramaMovie2) << "<-- should be 1 (test drama movie == )" << endl;

	// Operator <
	////// Classic Movie

	////// Comedy Movie
	Movie* comedyMovie1 = new ComedyMovie("Obama Obama", "Space Balls", 3000);
	Movie* comedyMovie2 = new ComedyMovie("Well Hello", "Space Balls", 3000);
	Movie* comedyMovie3 = new ComedyMovie("Obama Obama", "Space Balls", 3000);


	cout << "Comedy test = " << (comedyMovie1 ==  comedyMovie3)<< endl;
	cout << comedyMovie1->operator==(comedyMovie1) << endl;


	return 0;
}