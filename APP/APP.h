#pragma once
#include <iostream>
#include <string>
using namespace std;

struct LibrayData {
	int Id;
	string name;
	string address;
	string* booksNo;
};

class Library {
public:
	Library();
	Library(int, string, string, string);
	void setLibraryData();
	void getLibraryData();

	~Library();

private:
	LibrayData data;
};

class Book {

};
