#pragma once
#include <string>
#include <iostream>


struct book {
	std::string book_name; //название книги
	std::string author_name; //фамилия и имя автора
	int publication_year = 0;  //год издания
	int number_pages = 0; //кол-во страниц
	double price = 0.0; // цена за экземпляр
};

//Вывод информации о книге
void show_book(book& B);

//Функция принимает книгу и возвращает имя её автора(без фамилии)
std::string show_author(book& B);

//Функция принимает книгу и путь к файлу, после чего записывает информацию о книге в указанный файл
void save_book(book& B, std::string path);

//Функция принимает массив книг и его длину, после чего добавляет в его конец новую книгу, которую вводит пользователь внутри функции
void add_book(book*& arr, int length);


//Функция принимает массив книг и его длину, после чего полностью очищает его, удаляя все элементы массива.
void clear_arr(book*& arr, int length);