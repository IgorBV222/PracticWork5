#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <fstream>
#include "Structs.h"


int main() {
	setlocale(LC_ALL, "Russian");

	int size = 3;
	book* mass_book = new book[size]; //выделение динамической памяти для хранения массива

	mass_book[0] = { "The Master and Margarita", "Bulgakov Mikhail", 2008, 600, 595.99 };
	mass_book[1] = { "The wind-up bird chronicle", "Murakami Haruki", 2002, 614, 650.50 };
	mass_book[2] = { "Shantaram", "Roberts Gregory David", 2003, 864, 875.75 };

	for (int i = 0; i < size; i++) {
		std::cout << "Книга № " << i + 1 << ':' << "\n ";
		show_book(mass_book[i]);
		std::cout << "\n ";
	}
	
	short answer;
	int n;
	std::string path;

	do {
		
		std::cout << "Выберите, что вы хотите сделать: \n";
		std::cout << "1. Вывести информацию о книге: " << '\n';
		std::cout << "2. Узнать имя автора книги: " << '\n';
		std::cout << "3. Записать информацию о книге в указанный файл: " << '\n';
		std::cout << "4. Добавить новую книгу: " << '\n';
		std::cout << "5. Очисть всю информацию о книгах: " << '\n';
		std::cout << "0. Завершить работу. " << '\n';
		std::cout << "Ввод -> ";		
		std::cin >> answer;
	} while (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4);
	system("cls");
	switch (answer) {
			
		case 0:	
		{
			std::cout << "\nВыход из программы..." << '\n';
		}
		break; 


		case 1:
			std::cout << "Введите № книги: ";
			int n;
			std::cin >> n;			
			show_book(mass_book[n]);
			std::cout << "\n__________________________________\n";
			system("pause");
			system("cls");
			main();
			break;
						
		case 2:
			std::cout << "Введите № книги имя автора, которой хотите узнать: ";
			std::cin >> n;
			std::cout << "Имя автора книги: " << show_author(mass_book[n]) << "\n__________________________________\n";
			system("pause");
			system("cls");
			main();
			break;
		case 3:
			std::cout << "Введите № книги информацию о которой хотите записать: ";
			std::cin >> n;
			std::cout << "Укажите путь к файлу: ";
			std::cin.ignore();
			getline(std::cin, path);
			save_book(mass_book[n], path);
			std::cout << "\n__________________________________\n";
			system("pause");
			system("cls");
			main();
			break;
		case 4:
			
			add_book(mass_book, size);
			size++;

			for (int i = 0; i < size; i++)
				show_book(mass_book[i]);

			std::cout << "\n__________________________________\n";
			system("pause");
			system("cls");
			main();
			break;

		case 5:
			clear_arr(mass_book, size);
			std::cout << "\n__________________________________\n";
			system("pause");
			system("cls");
			main();
			break;
		default: std::cout << "Ошибка ввода.\n\n";
			
	}
	
	return 0;
}