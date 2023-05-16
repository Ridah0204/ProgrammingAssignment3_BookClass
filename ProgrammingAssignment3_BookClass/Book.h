#pragma once
#include<string>
#include <iostream>
using namespace std;

class Book {

private:
	string Title;
	string Author;
	string Publisher;
	int Year;
	int Edition;
public:
	Book() {
		Title = "";
		Author = "";
		Publisher = "";
		Year = 0;
		Edition = 0;
	}

	//Constructors
	Book(string T, string A, string P, int Y, int E) {

		Title = T;
		Author = A;
		Publisher = P;
		Year = Y;
		Edition = E;

	}

	//Copy Constructor
	/*Book(Book& b) {

		Title = b.Title;
		Author = b.Author;
		Publisher = b.Publisher;
		Year = b.Year;
		Edition = b.Edition;
	}*/
	Book(const Book& A);


	//setters
	void setTitle(string& T) {
		this->Title = T;
	}
	
	void setAuthor(string& A) {
		this->Author = A;
	}

	void setPublisher(string& P) {
		this->Publisher = P;
	}

	void setYear(int Y) {
		this->Year = Y;
	}
	void setEdition(int E) {
		this->Edition = E;
	}

	//getters
	string getTitle() const {
		return Title;
	}

	string getAuthor() const {
		return Author;
	}

	string getPublisher() const {
		return Publisher;
	}

	int getYear() const {
		return Year;
	}

	int getEdition() const {
		return Edition;
	}

	//operator overload
	bool operator>(const Book& A);

	//friend function
	friend ostream &operator<< (ostream& B,const Book& C );


};

	