#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <fstream>
#include "Structs.h"


//Вывод информации о книге
void show_book(book& B) {
	std::cout << "Название книги:       " << B.book_name << '\n';
	std::cout << "Фамилия и имя автора: " << B.author_name << '\n';
	std::cout << "Год издания:          " << B.publication_year << '\n';
	std::cout << "Кол-во страниц:       " << B.number_pages << '\n';
	std::cout << "Цена за экземпляр:    " << B.price << '\n';

	std::cout << "----------------------------------\n";
}

//Функция принимает книгу и возвращает имя её автора(без фамилии)
std::string show_author(book& B) {
	std::string tmp = B.author_name;
	std::string newtmp;
	return newtmp += tmp.substr(tmp.rfind(' '));
}

//Функция принимает книгу и путь к файлу, после чего записывает информацию о книге в указанный файл. Работает с ошибкой!!!!
void save_book(book& B, std::string path) {
	std::fstream fs;
	
	
	fs.open(path);
	if (fs.is_open()) {
		std::string infa_book = "Название книги: " + B.book_name
			+ " Фамилия и имя автора: " + B.author_name
			+ " Год издания: " + std::to_string(B.publication_year)
			+ " Кол-во страниц: " + std::to_string(B.number_pages)
			+ " Цена за экземпляр: " + std::to_string(B.price);
		fs << infa_book;
		std::cout << "Информация о книге успешна записана в файл: " << path << "\n";
	}
	else
		std::cout << "Ошибка открытия файла: " << path << "\n";
	fs.close();
}


//Функция принимает массив книг и его длину, после чего добавляет в его конец новую книгу, которую вводит пользователь внутри функции
void add_book(book*& arr, int length) {
	book* tmp = new book[length + 1];

	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	
	delete[]arr;
	
	arr = tmp;

	std::cout << "Введите название книги: ";
	std::cin.ignore();
	getline(std::cin, arr[length].book_name);
	std::cout << "Введите фамилию и имя автора: ";
	getline(std::cin, arr[length].author_name);
	std::cout << "Введите год издания: ";
	std::cin >> arr[length].publication_year;
	std::cout << "Введите кол-во страниц: ";
	std::cin >> arr[length].number_pages;
	std::cout << "Введите цену за экземпляр: ";
	std::cin >> arr[length].price;
}


//Функция принимает массив книг и его длину, после чего полностью очищает его, удаляя все элементы массива.
void clear_arr(book*& arr, int length) {
	delete[]arr;
}