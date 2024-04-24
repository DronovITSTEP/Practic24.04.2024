#pragma once
#include <iostream>
using namespace std;

/*
Создайте класс Book
Необходимо хранить данные: Автор, Название, Издательство,
Год, Количество страниц.
Создать массив объектов. Вывести:
■ список книг заданного автора;
■ список книг, выпущенных заданным издательством;
■ список книг, выпущенных после заданного года.
Используйте explicit конструктор и константные
функции-члены (например, для отображения данных о книге и т.д.)
*/
class Book
{
	char* author;
	char* name;
	char* publisher;
	int year;
	int page;

public:
	Book() : author{ nullptr }, name{ nullptr },
		publisher{ nullptr }, year{ NULL }, page{ NULL } {}
	
	Book(char* author, char* name, char* publisher, int year, int page) :
		author{ new char[strlen(author)] },
		name{ new char[strlen(name)] },
		publisher{ new char[strlen(publisher)] },
		year{ year },
		page{ page } {}

	char* getAuthor();
	char* getName();
	char* getPublisher();
	int getYear();
	int getPage();

	void setAuthor(const char* author);
	void setName(const char* name);
	void setPublisher(const char* publisher);
	void setYear(int yera);
	void setPage(int page);


	/*void showBookByAuthor(char author[]);
	void showBookByPublisher(char publisher[]);
	void showBookByYear(int year);*/

private:
	char* get(char* ptr);
	char* set(const char* ptr, char* obj);
};

