#pragma once
#include <iostream>
#include <string>
using namespace std;

struct LibrayData {
	int Id;
	string name;
	string address;
	int* bookIDs;
};

struct BookData {
	int Id;
	string name;
	string description;
	int pages;
	string author;
};

class Library {
public:
	Library();
	Library(int, string, string, int);
	void setLibraryData(int, string, string, int);
	void appendBookID(int);
	void getLibraryData();

	//~Library();

private:
	LibrayData data;
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
