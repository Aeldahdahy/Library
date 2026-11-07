#include <iostream>
#include <string>
#include "APP.h"
using namespace std;

Book::Book() {
	data.Id = 0;
	data.name = "-";
	data.description = "-";
	data.pages = 0;
	data.author = "-";
	
	library = nullptr;
}

Book::Book(int id, string name, string description, int pages, string author, Library* lib) {
	data.Id = id;
	data.name = name;
	data.description = description;
	data.pages = pages;
	data.author = author;

	library = lib;
}
void Book::setBookData(int id, string name, string description, int pages, string author, Library* lib) {
	data.Id = id;
	data.name = name;
	data.description = description;
	data.pages = pages;
	data.author = author;
	
	library = lib;
}
void Book::getBookData() {
	cout << "---------------------" << endl;
	cout << "Book ID: " << data.Id << endl;
	cout << "Book Name: " << data.name << endl;
	cout << "Book Description: " << data.description << endl;
	cout << "Book Pages: " << data.pages << endl;
	cout << "Book Author: " << data.author << endl;
	cout << "---------------------" << endl;
}

Library::Library() {
	data.Id = 0;
	data.name = "-";
	data.address = "-";
	data.booksCount = 0;
	data.books = nullptr;
}
Library::Library(int id, string name, string address, int booksNo) {
	data.Id = id;
	data.name = name;
	data.address = address;
	data.booksCount = booksNo;
	data.books = new Book[booksNo];
}
Library::~Library() {
	delete[] data.books;
	data.books = nullptr;
}
void Library::setLibraryID(int id) {
	data.Id = id;
}
void Library::setLibraryName(string name) {
	data.name = name;
}
void Library::setLibraryAddress(string address) {
	data.address = address;
}
void Library::setLibraryBooksNumber(int booksNo) {
	data.booksCount = booksNo;
	data.books = new Book[booksNo];
}
void Library::setLibraryBooks(int BooksNo, Book B) {
	/*data.booksCount = BooksNo;
	data.books =new Book[BooksNo];*/
	data.books[BooksNo] = B;

	
}
void Library::getLibraryData() {
	cout << "=====================" << endl;
	cout << "Library ID: " << data.Id << endl;
	cout << "Library Name: " << data.name << endl;
	cout << "Library Address: " << data.address << endl;
	cout << "Books Count: " << data.booksCount << "\n\n";

	for (int i = 0; i < data.booksCount; i++) {
		cout << "book (" << i + 1 << "): " << endl;
		data.books[i].getBookData();
	}

	cout << endl;
}

void Library::InsertLibraries(Library * arr, int capacity, int& curr, const Library& newLib) {
	if (curr >= capacity) {
		cout << "Error Library database is full!" << endl;
		return;
	}

	arr[curr] = newLib;
	curr++;
}


//void Library::setLibraryData(int id, string name, string address, int bookIDs) {
//	data.Id = id;
//	data.name = name;
//	data.address = address;
//	data.bookIDs = new int[bookIDs];
//}

//void Library::getLibraryData() {
//		cout << "Library ID: " << data.Id << endl;
//		cout << "Library Name: " << data.name << endl;
//		cout << "Library Address: " << data.address << endl;
//		cout << "Book IDs: ";
//		for (int i = 0; i < sizeof(data.bookIDs) / sizeof(data.bookIDs[0]); i++) {
//		cout << data.bookIDs[i] << " ";
//	}
//	cout << endl;
//	cout << endl;
//}

//void Library::appendBookID(int id) {
//	for (int i = 0; i < sizeof(data.bookIDs); i++) {
//		data.bookIDs[i] = id;
//	}
//}