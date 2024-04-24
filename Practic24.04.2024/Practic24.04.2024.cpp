#include <iostream>
#include "Book.h"

using namespace std;




int main()
{
	/*Book book;

	book.setAuthor("Dostoevskiy");
	book.setName("Besi");
	book.setYear(1889);

	Book book2("Dostoevskiy", "Idiot", " ", 1982, 500);
	Book book3("Lermontov", "Hero our time", "dhfhgb", 1822, 430);

	Library libr;
	libr.addBook(book);
	libr.addBook(book2);
	libr.addBook(book3);

	libr.showBookByAuthor("Dostoevskiy");*/

	Book** books = new Book * [5] {
		new Book("Dostoevskiy", "Idiot", " ", 1982, 500),
		new Book("Lermontov", "Hero our time", "dhfhgb", 1822, 430),
		new Book("Pushkin", "Kapitan dochka", "", 1810, 1160),
		new Book("Gorkiy", "Na dne", "", 1814, 540),
		new Book("Turgenev", "Asya", "", 1900, 444)
	};
	Library libr2(books, 5);
	libr2.showBookByYear(1822);

}
