#include <iostream>
#include "Book.h"

using namespace std;




int main()
{
	Book book;

	book.setAuthor("Dostoevskiy");
	book.setName("Besi");
	book.setYear(1889);
	cout << book.getAuthor() << endl;
	cout << book.getName() << endl;
	cout << book.getPublisher() << endl;
	cout << book.getYear() << endl;
	cout << book.getPage() << endl;

}
