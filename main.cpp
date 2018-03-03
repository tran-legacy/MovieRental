#include "movie.h"
#include "comedymovie.h"
#include "classicmovie.h"
#include "dramamovie.h"
#include "moviefactory.h"
#include <iostream>
#include <string>
#include <assert.h>

using namespace std;

void testingPrint() {
	/******Initial Testing: PRINT in movies**********/
	cout << "**** Testing: PRINT in movies ****" << endl;
	Movie* movie1 = new ComedyMovie("Nora Ephron", "You've Got Mail", 1998);
	Movie* movie2 = new DramaMovie("Nick Nelson", "I'm just a boi", 2018);
	Movie* movie3 = new ClassicMovie("Ball beep", "Orange is the new juice", 2001, "Fahad", 5);

	movie1->print();
	movie2->print();
	movie3->print();

	
	// Operator <
	////// Classic Movie

	////// Comedy Movie
	Movie* comedyMovie1 = new ComedyMovie("Obama Obama", "Space Balls", 3000);
	Movie* comedyMovie2 = new ComedyMovie("Well Hello", "Space Balls", 3000);
	Movie* comedyMovie3 = new ComedyMovie("Obama Obama", "Space Balls", 3000);

	cout << (comedyMovie1== comedyMovie1) << endl;
}

void testingOpEquals() {
	/*********OPERATORS TEST***************/
	// Operator ==
	cout << "\n**** Testing: OPERATOR ==" << endl;
	////// Classic Movie
	cout << "**** Testing: OPERATOR == in Classic Movie" << endl;
	
	MovieFactory factory;

	Movie* movie1 = new ClassicMovie("a", "a", 1, "a", 1);
	Movie* movie2 = new ClassicMovie("a", "a", 1, "a", 1);

	assert((*movie1 == *movie2) == true);


	cout << "-- Classic operator == passed" << endl;

	////// Drama Movie
	Movie* dramaMovie1 = new DramaMovie("Nick Nelson", "I'm just a boi", 2018);
	Movie* dramaMovie2 = new DramaMovie("Nick Nelson", "I'm just a boi", 2018);
	Movie* dramaMovie3 = new DramaMovie("SAMMY JONES", "I'm just a boi", 2018);

<<<<<<< HEAD
	assert(dramaMovie1==(dramaMovie2) == true);
	assert(dramaMovie1==(dramaMovie3) == false);
	cout << "-- Drama operator == passed" << endl;

	////// Comedy Movie
	Movie* comedyMovie1 = new ComedyMovie("Hallo", "Bye", 2000);
	Movie* comedyMovie2 = new ComedyMovie("Hallo", "Bye", 2000);
	Movie* comedyMovie3 = new ComedyMovie("Hallo", "Bye", 1999);

	assert(comedyMovie1==(comedyMovie2) == true);
	assert(comedyMovie1==(comedyMovie3) == false);
	cout << "-- Comedy operator == passed" << endl;

}

void testingGreaterLess() {
	cout << "\n**** Testing: < and >" << endl;
	////// Classic Movie
	cout << "**** Testing: Classic Movie" << endl;

	MovieFactory f;
	Movie* C1 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2000, "Fahad", 5);
	Movie* C2 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2001, "Fahad", 5);
	Movie* C3 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2000, "Fahad", 6);

	assert(*C1<(*C2) == true);
	assert(*C1<(*C3) == true);

	Movie* C4 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 1, "Fahad", 5);
	Movie* C5 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2, "Fahad", 5);
	Movie* C6 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2, "Fahad", 7);


	assert(*C4>(*C5) == false);
	assert(*C5>(*C6) == false);

	////// Comedy Movie
	Movie* Com1 = f.makeMovie('F',"A", "I'm just a boi", 2018);
	Movie* Com2 = f.makeMovie('F', "B", "I'm just a boi", 1);
	Movie* Com3 = f.makeMovie('F', "B", "I'm just a boi", 10);

	assert(*Com1<(*Com2) == false);
	cout << "Com2 release year = " << Com2->getReleaseYear() << endl;
	cout << "Com3 release year = " << Com3->getReleaseYear() << endl;

	//assert(*Com2>(*Com3) == false);

	////// Drama Movie
	Movie* d1 = f.makeMovie('D',"A", "A", 1);
	Movie* d2 = f.makeMovie('D', "B", "A", 1);
	Movie* d3 = f.makeMovie('D', "A", "A", 1);

	assert(*d1<(*d2) == true);
	assert(*d1>(*d2) == false);

}


int main() {
	//testingPrint();
	//testingOpEquals();
	testingGreaterLess();

	return 0;
}