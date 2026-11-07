#include <iostream>
#include <string>
#include "APP.h"
#include <vector>
using namespace std;



struct Student {
	int id;
	
};

void main()
{
	/*vector<string> cars = {"volvo", "bmw", "ford", "mazda"};
	for (string car : cars) {
		cout << car << endl;
	}
	
	cars.clear();*/
	// (1) using vector
	/*vector<Library> Libraries;
	vector<Book> Books;*/
	// (2) with out using vector
	/*Library* libraries;
	cout << "Enter the number of libraries needed: ";
	int numOfLibraries;
	cin >> numOfLibraries;
	libraries = new Library[numOfLibraries];*/
	
	


	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

	
	Library* libraries;
	int numOfLibraries;
	cout << "Enter the number of libraries needed: ";
	cin >> numOfLibraries;
	libraries = new Library[numOfLibraries];
	int insertedLibraryCount = 0;
	
	vector<Book> books;


	while (true) {
		cout << "what to do? for help enter 1. " << endl << "> ";
		int task;
		cin >> task;
		if (cin.fail()) {
			cout << "Invalid entered data!";
			break;
		}

		
		if (task == 1 /* help */) {
			cout << "to add enter 2." << endl;
			cout << "for show Libraries enter 3." << endl;
			cout << "for show books enter 4." << endl << "> ";
			cin >> task;

			if (cin.fail()) {
				cout << "Invalid entered data!";
				break;
			}
		}  
		if (task == 2  /* add */) {
			cout << "what to add? for help enter 1. " << endl << "> ";
			int addTask;
			cin >> addTask;
			if (addTask == 1 /* help */) {
				cout << "to add library enter 2." << endl << "to add book enter 3" << endl << "> ";
				cin >> addTask;
			}
			if (addTask == 2  /* add Library */) {
				Library newLibrary;
				cout << "enter library id: ";
				int id;
				cin >> id;
				newLibrary.setLibraryID(id);
				
				cout << "enter library name: ";
				string name;
				cin >> name;
				newLibrary.setLibraryName(name);

				cout << "enter library address: ";
				string adress;
				cin >> adress;
				newLibrary.setLibraryAddress(adress);

				cout << "enter library quntity of books: ";
				int booksNo;
				cin >> booksNo;
				newLibrary.setLibraryBooksNumber(booksNo);

				libraries->InsertLibraries(libraries, numOfLibraries, insertedLibraryCount, newLibrary);

				cout << libraries << endl;

				cout << "Library added successfully!\n";
				//newLibrary.getLibraryData();
			}
			if ( addTask == 3 /* add book */) {
				int id, pages, libID;
				string name, auth, des;
				
				cout << "enter book id: ";
				cin >> id;
				cout << "enter book name: ";
				cin >> name;
				cout << "enter book Description: ";
				cin >> des;
				cout << "enter book no. pages: ";
				cin >> pages;
				cout << "enter book author name: ";
				cin >> auth;
				cout << "enter book library ID: ";
				cin >> libID;

				

				Book newBook;
				for (int i = 0; i < libID; i++) {
					newBook.setBookData(id, name, des, pages, auth, &libraries[i]);
				}
				books.push_back(newBook);
				cout << "Book added successfully!\n";

				//Library* lib = &newLibrary;

				//newBook.setBookData(id, name, des, pages, auth, lib);
			}


			if (cin.fail()) {
				cout << "Invalid entered data! 1";
				break;
			}
		}  
		if (task == 3 /* show library */ ) {
			if (insertedLibraryCount == 0) {
				cout << "No libraries have been added yet.\n";
			}
			else {
				for (int i = 0; i < insertedLibraryCount; i++) {
						libraries[i].getLibraryData();
				}
			}
		} 
		if (task == 4 /* show book */) {
			if (books.empty()) {
				cout << "No books are available. \n";
			}
			else {
				for (auto& b : books) {
					b.getBookData();
				}
			}
		}

		//break;
	}

	delete[] libraries;

	//Library madinatyLibrary;
	//Book book1, book2, book3;

	/*madinatyLibrary.setLibraryID(1);
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
	
	book1.getBookData();*/
}

