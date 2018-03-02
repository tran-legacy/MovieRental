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
	return 0;
}