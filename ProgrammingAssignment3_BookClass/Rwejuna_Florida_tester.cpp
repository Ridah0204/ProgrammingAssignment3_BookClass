#include<iostream>
#include"Book.h"
#include<string>

using namespace std;

int main() {

	Book book1 = Book ("CIS", "Sai", "Academic Resource", 2023, 1);


	cout << "The title of the book is: " << book1.getTitle() << "\nAuthor: " << book1.getAuthor() << "\nPublisher: " << book1.getPublisher() << "\nYear: " << book1.getYear() << "\nEdition: " << book1.getEdition();

	//Copy Construtor
	Book book2(book1);




	return 0;
}