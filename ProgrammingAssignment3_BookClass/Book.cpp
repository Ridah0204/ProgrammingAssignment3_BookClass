#include "Book.h"

//Copy Constructor
Book::Book(const Book& A)
	: Title(A.Title), Author(A.Author), Publisher(A.Publisher), Year(A.Year), Edition(A.Edition) 
{

}

//{
	//A.Title << A.Author << A.Publisher << A.Year << A.Year << endl;
//}


bool Book::operator>(const Book& A)
{
	if (Year > A.Year) {
		return true;
	}
	else {
		return false;
	}
	return false;
}

	/*void Book::operator<<(const Book & B, ostream & C)
	{
	}*/

	 ostream &operator<<(ostream& B, const Book& C )
	{
		B << C.Title << C.Author << C.Publisher << C.Year << C.Edition << endl;
		return B;
		// TODO: insert return statement here
	}

	/*bool Book::operator>(const Book& A)
	{
		return false;
	}*/

	//ostream& operator<<(const Book & B, ostream & C)
	//{
	//	// TODO: insert return statement here
	//}
