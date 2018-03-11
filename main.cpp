///////////////////////////////////////////////////////////////////////////////
// Names	  : Tran Le and Nicholas Gorsline
// Date	      : 3/10/2017
// Project    : Assignment 4: Movie Rental Store
// Course     : Pisan, CSS 343
// File Desc  : This is the entry point for the code, as well as served as a 
//				test file. We have chosen to leave in the test methods as an
//              illustration of some of the tests we used to ensure the program
//              functioned as expected.
///////////////////////////////////////////////////////////////////////////////
#include "movie.h"
#include "store.h"
#include "comedymovie.h"
#include "classicmovie.h"
#include "dramamovie.h"
#include "moviefactory.h"
#include "customer.h"
#include "customerlist.h"
#include "movielist.h"
#include <string>
#include <assert.h>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

// Creates a store object and 
void runStore() {
	// Declare store object
	Store store;
	// File names of data to be loaded
	string movieData = "data4movies.txt";
	string customerData = "data4customers.txt";
	string commandData = "data4commands.txt";
	// Read in customer data and populate fields in store
	store.populateCustomer(customerData);
	// Read in movie data and populate fields in store
	store.populateMovie(movieData);
	// Read in commands and executes them in the store
	store.commandHandler(commandData);
}

// Entry point for the code
int main() {
	// Start the store
	runStore();
	return 0;
}



///////////////////////////////////////////////////////////////////////////////
////                         TEST METHODS BELOW                            ////
///////////////////////////////////////////////////////////////////////////////

//void testingPrint() {
//	/******Initial Testing: PRINT in movies**********/
//	cout << "**** Testing: PRINT in movies ****" << endl;
//	Movie* movie1 = new ComedyMovie("Nora Ephron", "You've Got Mail", 1998);
//	Movie* movie2 = new DramaMovie("Nick Nelson", "I'm just a boi", 2018);
//	Movie* movie3 = new ClassicMovie("Ball beep", "Orange is the new juice", 2001, "Fahad", 5);
//
//	movie1->print();
//	movie2->print();
//	movie3->print();
//
//	
//	// Operator <
//	////// Classic Movie
//
//	////// Comedy Movie
//	Movie* comedyMovie1 = new ComedyMovie("Obama Obama", "Space Balls", 3000);
//	Movie* comedyMovie2 = new ComedyMovie("Well Hello", "Space Balls", 3000);
//	Movie* comedyMovie3 = new ComedyMovie("Obama Obama", "Space Balls", 3000);
//
//	cout << (comedyMovie1== comedyMovie1) << endl;
//}
//
//void testingOpEquals() {
//	/*********OPERATORS TEST***************/
//	// Operator ==
//	cout << "\n**** Testing: OPERATOR ==" << endl;
//	////// Classic Movie
//	cout << "**** Testing: OPERATOR == in Classic Movie" << endl;
//	
//	MovieFactory factory;
//
//	Movie* movie1 = new ClassicMovie("a", "a", 1, "a", 1);
//	Movie* movie2 = new ClassicMovie("a", "a", 1, "a", 1);
//
//	assert((*movie1 == *movie2) == true);
//
//
//	cout << "-- Classic operator == passed" << endl;
//
//	////// Drama Movie
//	Movie* dramaMovie1 = new DramaMovie("Nick Nelson", "I'm just a boi", 2018);
//	Movie* dramaMovie2 = new DramaMovie("Nick Nelson", "I'm just a boi", 2018);
//	Movie* dramaMovie3 = new DramaMovie("SAMMY JONES", "I'm just a boi", 2018);
//
//	assert(dramaMovie1==(dramaMovie2) == true);
//	assert(dramaMovie1==(dramaMovie3) == false);
//	cout << "-- Drama operator == passed" << endl;
//
//	////// Comedy Movie
//	Movie* comedyMovie1 = new ComedyMovie("Hallo", "Bye", 2000);
//	Movie* comedyMovie2 = new ComedyMovie("Hallo", "Bye", 2000);
//	Movie* comedyMovie3 = new ComedyMovie("Hallo", "Bye", 1999);
//
//	assert(comedyMovie1==(comedyMovie2) == true);
//	assert(comedyMovie1==(comedyMovie3) == false);
//	cout << "-- Comedy operator == passed" << endl;
//
//}
//
//void testingGreaterLess() {
//	cout << "\n**** Testing (OK): < and >" << endl;
//	////// Classic Movie
//	MovieFactory f;
//	Movie* C1 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2000, "Fahad", 5);
//	Movie* C2 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2001, "Fahad", 5);
//	Movie* C3 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2000, "Fahad", 6);
//
//	assert(*C1<(*C2) == true);
//	assert(*C1<(*C3) == true);
//
//	Movie* C4 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 1, "Fahad", 5);
//	Movie* C5 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2, "Fahad", 5);
//	Movie* C6 = f.makeMovie('C', "Ball beep", "I'm Just a boii", 2, "Fahad", 7);
//
//
//	assert(*C4>(*C5) == false);
//	assert(*C5>(*C6) == false);
//
//	////// Comedy Movie
//	Movie* Com1 = f.makeMovie('F',"A", "I'm just a boi", 2018);
//	Movie* Com2 = f.makeMovie('F', "B", "I'm just a boi", 1);
//	Movie* Com3 = f.makeMovie('F', "B", "I'm just a boi", 10);
//
//	assert(*Com1<(*Com2) == false);
//
//	////// Drama Movie
//	Movie* d1 = f.makeMovie('D',"A", "A", 1);
//	Movie* d2 = f.makeMovie('D', "B", "A", 1);
//	Movie* d3 = f.makeMovie('D', "A", "A", 1);
//
//	assert(*d1<(*d2) == true);
//	assert(*d1>(*d2) == false);
//
//}
//
//void testCustomer() {
//	Customer* TRAN = new Customer(1234, "Tran Leeeeeee");
//	TRAN->addIntoHistory("Monster will kill me in the end");
//	TRAN->addIntoHistory("Histry");
//	TRAN->addIntoHistory("Hello");
//	TRAN->printHistory();
//
//
//}
//
//void testCustomerList() {
//	CustomerList cList;
//	cList.addCustomer(1000, "Diego Guzman");
//	cList.addCustomer(1, "Tran Le");
//	cList.addCustomer(1001, "Tran Le");
//
//	Customer* diego = cList.getCustomer(1000);
//	diego->addIntoHistory("HISTORY");
//	diego->addIntoHistory("newer history");
//	diego->addIntoHistory("newest history");
//
//	//diego->printHistory();
//	cList.getCustomer(1001)->printHistory();
//	Customer* tran = cList.getCustomer(1002);
//}
//
//void testMovieList() {
//	MovieList ml;
//	ml.addMovie('D', "Tran Le", "The Lion King", 2000, 1);
//	ml.addMovie('H', "Tran Le", "The Lion King", 2000, 10);
//	ml.addMovie('C', "Director", "movie", 2000, "actor", 9, 10);
//	ml.addMovie('U', "Director", "movie", 2000, "actor", 9, 10);
//	ml.decrementMovie('D', "Tran Le", "The Lion King");
//	ml.decrementMovie('D', "Tran Le", "The Lion King");
//	ml.decrementMovie('D', "Tran Le", "Blahblah");
//	ml.printMovies();
//}
//
//
//// This method will extract each token and send it to the movie list
//void addMovieToMovieList(vector<string> tokens) {
//	string genre, director, title, majorActor;
//	int quantity, year, month;
//	// vector guarantees consistent numbering, index 0 = genre, 1 = quantity
//	// 2 = director, 3 = title, and based on genre, index 4 is handled below
//	genre = tokens[0];
//	quantity = stoi(tokens[1]);
//	director = tokens[2];
//	title = tokens[3];
//	// Check if classic movie, if so need to extract additional data
//	// Major actor and month
//	if (genre == "C") {
//		// Create vector to hold tokens of element 4
//		vector<string> classicToken;
//		string cToken;
//		istringstream tokenStream(tokens[4]);
//		// Break token up using space as delimeter
//		while (getline(tokenStream, cToken, ' ')){
//			classicToken.push_back(cToken);
//			cout << cToken << endl;
//		}
//		// Getting major actor first and last name
//		majorActor = classicToken[0] + " " + classicToken[1];
//		// Getting month and convert to int
//		month = stoi(classicToken[2]);
//		// Get year and convert to int
//		year = stoi(classicToken[3]);
//
//		/////////ADD TO MOVIE LIST HERE AS WE HAVE ALL INFO
//
//	}
//	// Either a comedy or drama movie, index 4 = year
//	else {
//		year = stoi(tokens[4]);
//		/////////ADD TO MOVIE LIST HERE AS WE HAVE ALL INFO
//
//	}
//}
//
//void testPopulateMovie() {
//	// Opening movie source
//	ifstream infile;
//	infile.open("data4movies.txt");
//	// Check to make sure the file exists
//	if (infile.fail()) {
//		cout << "The file was not found." << endl;
//	}
//	// Creaating the delimeter to break up the string
//	string delimiter = ", ";
//	// String to catch the line
//	string line;
//
//	// Loop through each line in the dile
//	while (getline(infile, line)) {
//		// Create a sstream on the line
//		istringstream iss(line);
//		// Keep track of position in the line
//		size_t pos = 0;
//		// Hold the current token
//		string token;
//		// Vector to hold all of the tokens found
//		vector<string> tokenList;
//
//		// Loop through each element in the line
//		while ((pos = line.find(delimiter)) != string::npos) {
//			token = line.substr(0, pos);
//			cout << token << endl;
//			// Adding token to vector
//			tokenList.push_back(token);
//			line.erase(0, pos + delimiter.length());
//		}
//		// Catching last token
//		tokenList.push_back(line);
//		addMovieToMovieList(tokenList);
//		tokenList.clear();
//
//		break;
//	}
//}

