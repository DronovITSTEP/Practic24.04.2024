#include "Book.h"

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
