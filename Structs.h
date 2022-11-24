#pragma once
#include <string>
#include <iostream>

struct book {
	std::string book_name{}; //название книги
	std::string author_name{}; //фамили€ и им€ автора
	int publication_year{};  //год издани€
	int number_pages{}; //кол-во страниц
	double price{}; // цена за экземпл€р
};

//вывод информации о книге;
void show_book(book& B);

//‘ункци€ принимает книгу и возвращает им€ еЄ автора(без фамилии);
std::string show_author(book& B);

//‘ункци€ принимает книгу и путь к файлу, после чего записывает информацию о книге в указанный файл;
void save_book(book& B, std::string file);


//add_book Ц функци€ принимает массив книг и его длину, после чего добавл€ет в его конец новую книгу, которую вводит пользователь внутри функции;
template <typename T>
void add_book(T* arr, int length) {
	T* tmp = new T[length + 1];

	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];

	tmp[length] = book;
		std::cout << "¬ведите название книги: ";
		std::cin.ignore();
		getline(std::cin, B.book_name);
		std::cout << "¬ведите фамилию и им€ автора: ";
		std::cin.ignore();
		getline(std::cin, B.author_name);
		std::cout << "¬ведите √од издани€: ";
		std::cin >> B.publication_year;
		std::cout << "¬ведите кол-во страниц: ";
		std::cin >> B.number_pages;
		std::cout << "¬ведите цену за экземпл€р: ";
		std::cin >> B.price;
	

	delete[]arr;
	arr = tmp;
};


//clear_arr Ц функци€ принимает массив книг и его длину, после чего полностью очищает его, удал€€ все элементы массива.
template <typename T>
void clear_arr(T* &arr, int length) {
	delete[]arr;
};