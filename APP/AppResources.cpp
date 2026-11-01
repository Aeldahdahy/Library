#include <iostream>
#include <string>
#include "APP.h"
using namespace std;


Library::Library() {
	data.Id = -1;
	data.name = "-";
	data.address = "-";
	data.booksNo = {};
}
Library::Library(int id, string name, string address, string booksNo) {
	data.Id = id;
	data.name = name;
	data.address = address;
	data.booksNo = new string[booksNo];
}

void Library::setLibraryData() {

}

void Library::getLibraryData() {
}