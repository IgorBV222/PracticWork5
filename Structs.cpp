#include <string>
#include <iostream>
#include <fstream>
#include "Structs.h"

//вывод информации о книге;
void show_book(book& B) {
	std::cout << "Название книги:       " << B.book_name << '\n';
	std::cout << "Фамилия и имя автора: " << B.author_name << '\n';
	std::cout << "Год издания:          " << B.publication_year << '\n';
	std::cout << "Кол-во страниц:       " << B.number_pages << '\n';
	std::cout << "Цена за экземпляр:    " << B.price << '\n';

	std::cout << "----------------------------------\n";
};

//Функция принимает книгу и возвращает имя её автора(без фамилии);

std::string show_author(book& B) {
	std::string tmp = B.author_name;
	std::string newtmp;
	char sym = ' ';
	if(tmp.rfind(sym) != 0)
		newtmp += tmp.substr(tmp.rfind(sym));
	//cout << "Имя автора: " << '\n';
	return newtmp;
}

////Функция принимает книгу и путь к файлу, после чего записывает информацию о книге в указанный файл;
void save_book(book& B, std::string file) {

	std::ofstream out;
	out.open(file, std::ios::app);

	if (out.is_open()) {
		std::string input;
		input = "Название книги : " + B.book_name 
			+ "\nФамилия и имя автора: " + B.author_name 
			+ "\nГод издания: " + std::to_string(B.publication_year) 
			+ "\nКол-во страниц: " + std::to_string(B.number_pages) 
			+ "\nЦена за экземпляр: " + std::to_string(B.price);
				
			std::getline(std::cin, input);
			out << input << "\n";		
	}
	else
		std::cout << "Ошибка открытия файла!\n";
	out.close();
}



