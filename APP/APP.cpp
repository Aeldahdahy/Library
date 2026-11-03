#include <iostream>
#include <string>
#include "APP.h"
using namespace std;


int main()
{
	Library madinatyLibrary;
	Book book1, book2, book3;
	
	madinatyLibrary.setLibraryID(1);
	madinatyLibrary.setLibraryName("Madinaty Library");
	madinatyLibrary.setLibraryAddress("B11, g111");
	madinatyLibrary.setLibraryBooksNumber(5);

	book1.setBookData(1, "Head first", "JavaScript book", 500, "O'REILLY", &madinatyLibrary);
	book2.setBookData(2, "Head first", "C++ book", 600, "O'REILLY", &madinatyLibrary);
	book3.setBookData(3, "Head first", "Java book", 700, "O'REILLY", &madinatyLibrary);

	madinatyLibrary.setLibraryBooks(0, book1);
	madinatyLibrary.setLibraryBooks(1, book2);
	madinatyLibrary.setLibraryBooks(2, book3);


	madinatyLibrary.getLibraryData();
	
	book1.getBookData();
}

