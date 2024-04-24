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

/// <summary>
/// класс Книга (хранит в себе информацию о конкретной книге)
/// </summary>
class Book
{
private:
	char* author;
	char* name;
	char* publisher;
	int year;
	int page;

	char* get(char* ptr);
	char* set(const char* ptr, char* obj);

public:
	// конструкторы
	Book() : author{ nullptr }, name{ nullptr },
		publisher{ nullptr }, year{ NULL }, page{ NULL } {}
	/// <summary>
	/// конструктор
	/// </summary>
	/// <param name="author">имя автора</param>
	/// <param name="name">название книги</param>
	/// <param name="publisher">издатель</param>
	/// <param name="year">год выпуска</param>
	/// <param name="page">количество страниц</param>
	Book(const char* author,
		const char* name,
		const char* publisher,
		int year,
		int page);
	Book(const Book& book);

	// методы для получения автора, названия, издателя, года выпуска и кол-ва страниц
	char* getAuthor();
	char* getName();
	char* getPublisher();
	int getYear();
	int getPage();

	// методы для утсановки значения для автора, названия, издателя, года выпуска и кол-ва страниц
	void setAuthor(const char* author);
	void setName(const char* name);
	void setPublisher(const char* publisher);
	void setYear(int yera);
	void setPage(int page);
	/// <summary>
	/// выводит в консоль полную информацию о книге
	/// </summary>
	void showBook();
};


/// <summary>
/// класс Библиотека (хранит в себе список книг)
/// </summary>
class Library {
	int size;
	Book** books;
public:
	// конструкторы
	Library();
	Library(Book book);
	Library(Book** books, int size);

	/// <summary>
	/// добавление новой книги в библиотеку
	/// </summary>
	/// <param name="book">объект новой книги</param>
	void addBook(Book book);
	/// /// <summary>
	/// выводит в консоль все книги по указанному автору
	/// </summary>
	/// <param name="author">имя автора</param>
	void showBookByAuthor(const char author[]);
	/// <summary>
	/// выводит в консоль все книги в библиотеке
	/// </summary>
	void showBooks();
	/// <summary>
	/// выводит в консоль все книги по указанному издателю
	/// </summary>
	/// <param name="publisher">издатель</param>
	void showBookByPublisher(const char publisher[]);
	/// <summary>
	/// выводит в консоль все книги выпущенных после заданного года.
	/// </summary>
	/// <param name="year">год выпуска</param>
	void showBookByYear(int year);
};

