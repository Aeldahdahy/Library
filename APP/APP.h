#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book;
class Library;

struct BookData {
	int Id;
	string name;
	string description;
	int pages;
	string author;
};

struct LibrayData {
	int Id;
	string name;
	string address;
	int booksCount;
	Book * books;
};

class Book {
public:
	Book();
	Book(int, string, string, int, string, Library*);
	void setBookData(int, string, string, int, string, Library*);
	void getBookData();


	//~Book();
private:
	BookData data;
	Library* library;
};

class Library {
public:
	Library();
	Library(int, string, string, int);
	//void setLibraryData(int, string, string, int);
	//void appendBookID(int);
	void setLibraryID(int);
	void setLibraryName(string);
	void setLibraryAddress(string);
	void setLibraryBooksNumber(int);

	void setLibraryBooks(int , Book);

	void getLibraryData();

	~Library();

private:
	LibrayData data;
};


