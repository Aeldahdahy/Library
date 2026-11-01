#include <iostream>
#include <string>
#include "APP.h"
using namespace std;


Library::Library() {
	data.Id = -1;
	data.name = "-";
	data.address = "-";
	data.bookIDs = nullptr;
}
Library::Library(int id, string name, string address, int booksNo) {
	data.Id = id;
	data.name = name;
	data.address = address;
	data.bookIDs = new int[booksNo];
}

void Library::setLibraryData(int id, string name, string address, int bookIDs) {
	data.Id = id;
	data.name = name;
	data.address = address;
	data.bookIDs = new int[bookIDs];
}

void Library::getLibraryData() {
		cout << "Library ID: " << data.Id << endl;
		cout << "Library Name: " << data.name << endl;
		cout << "Library Address: " << data.address << endl;
		cout << "Book IDs: ";
		for (int i = 0; i < sizeof(data.bookIDs) / sizeof(data.bookIDs[0]); i++) {
		cout << data.bookIDs[i] << " ";
	}
	cout << endl;
	cout << endl;
}

void Library::appendBookID(int id) {
	for (int i = 0; i < sizeof(data.bookIDs); i++) {
		data.bookIDs[i] = id;
	}
}

Book::Book() {
		data.Id = -1;
		data.name = "-";
		data.description = "-";
		data.pages = -1;
		data.author = "-";
		library = nullptr;
}

Book::Book(int id, string name, string description, int pages, string author, Library* lib) {
	data.Id = id;
	data.name = name;
	data.description = description;
	data.pages = pages;
	data.author = author;
}

void Book::setBookData(int id, string name, string description, int pages, string author, Library* lib ) {
	data.Id = id;
	data.name = name;
	data.description = description;
	data.pages = pages;
	data.author = author;
	lib->appendBookID(id);

}

void Book::getBookData() {
		cout << "Book ID: " << data.Id << endl;
		cout << "Book Name: " << data.name << endl;
		cout << "Book Description: " << data.description << endl;
		cout << "Book Pages: " << data.pages << endl;
		cout << "Book Author: " << data.author << endl;
		cout << endl;
}