#include <iostream>
#include <string>
#include "APP.h"
using namespace std;


int main()
{
	Library madinatyLibrary;
	Book book1, book2, book3;

	madinatyLibrary.setLibraryData(1, "madinty", "b11, g111", 5);

	book1.setBookData(1, "book1", "description1", 100, "author1", &madinatyLibrary);
	book2.setBookData(2, "book2", "description", 200, "author2", &madinatyLibrary);
	book3.setBookData(3, "book3", "description", 300, "author3", &madinatyLibrary);
	
	book1.getBookData();
	book2.getBookData();
	book3.getBookData();


	madinatyLibrary.getLibraryData();
}

