#include "Book.h"
// конструкторы
Library::Library() :books{ nullptr }, size{ 0 } {}
Library::Library(Book book) :size{ 1 } {
	books = new Book * [size] { new Book(book) };
}
Library::Library(Book** books, int size) : size{ size } {
	this->books = new Book * [size];
	for (int i = 0; i < size; i++) {
		this->books[i] = books[i];
	}
}


void Library::addBook(Book book) {
	if (!size) size = 1;
	static int index = size - 1;
	if (!books)
		books = new Book * [size];
	Book** tmp_books = new Book * [++size];
	for (int i = 0; i < size - 1; i++) {
		tmp_books[i] = books[i];
	}
	delete[] books;
	books = tmp_books;
	this->books[index++] = new Book(book);
}

void Library::showBookByAuthor(const char author[]) {
	for (int i = 0; i < size; i++) {
		if (!strcmp(author, books[i]->getAuthor())) {
			books[i]->showBook();
		}
	}
}
void Library::showBooks() {
	for (int i = 0; i < size; i++) {
		books[i]->showBook();
	}
}
void Library::showBookByPublisher(const char publisher[]) {
	for (int i = 0; i < size; i++) {
		if (!strcmp(publisher, books[i]->getPublisher())) {
			books[i]->showBook();
		}
	}
}
void Library::showBookByYear(int year) {
	for (int i = 0; i < size; i++) {
		if (year <= books[i]->getYear()) {
			books[i]->showBook();
		}
	}
}