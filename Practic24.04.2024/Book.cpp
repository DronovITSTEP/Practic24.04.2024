#include "Book.h"

// конструкторы
Book::Book() : 
	author{ nullptr },
	name{ nullptr },
	publisher{ nullptr },
	year{ NULL },
	page{ NULL } {}
Book::Book(const char* author,
	const char* name,
	const char* publisher,
	int year,
	int page) :
	author{ new char[strlen(author)] },
	name{ new char[strlen(name)] },
	publisher{ new char[strlen(publisher)] },
	year{ year },
	page{ page } 
{
	strcpy_s(this->author, strlen(author) + 1, author);
	strcpy_s(this->name, strlen(name) + 1, name);
	strcpy_s(this->publisher, strlen(publisher) + 1, publisher);
}
Book::Book(const Book& book) : 
	Book(book.author,
		book.name,
		book.publisher,
		book.year,
		book.page) {}

char* Book::get(char* ptr) {
	if (ptr && strlen(ptr) > 0)
		return ptr;
	return (char*)"";
}
char* Book::set(const char* ptr, char* obj) {
	if (obj) delete[] obj;
	obj = new char[strlen(ptr)];
	strcpy_s(obj, strlen(ptr) + 1, ptr);
	return obj;
}

// методы для получения автора, названия, издателя, года выпуска и кол-ва страниц
char* Book::getAuthor(){
	return get(author);
}
char* Book::getName(){
	return get(name);
}
char* Book::getPublisher() {
	return get(publisher);
}
int Book::getYear() {
	return year;
}
int Book::getPage() {
	return page;
}

// методы для утсановки значения для автора, названия, издателя, года выпуска и кол-ва страниц
void Book::setAuthor(const char* author) {
	this->author = set(author, this->author);
}
void Book::setName(const char* name) {
	this->name = set(name, this->name);
}
void Book::setPublisher(const char* publisher) {
	this->publisher = set(publisher, this->publisher);
}
void Book::setYear(int year) {
	this->year = year;
}
void Book::setPage(int page) {
	this->page = page;
}

void Book::showBook() {
	printf("Author: %s, Book: %s\nPublisher: %s", author, name, publisher);
	printf("Year: %i, Page: %i\n", year, page);
}



