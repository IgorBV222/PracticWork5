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
	book* mass_book = new book[size]; //��������� ������������ ������ ��� �������� �������

	mass_book[0] = { "The Master and Margarita", "Bulgakov Mikhail", 2008, 600, 595.99 };
	mass_book[1] = { "The wind-up bird chronicle", "Murakami Haruki", 2002, 614, 650.50 };
	mass_book[2] = { "Shantaram", "Roberts Gregory David", 2003, 864, 875.75 };

	for (int i = 0; i < size; i++) {
		std::cout << "����� � " << i + 1 << ':' << "\n ";
		show_book(mass_book[i]);
		std::cout << "\n ";
	}
	
	short answer;
	int n;
	std::string path;

	do {
		
		std::cout << "��������, ��� �� ������ �������: \n";
		std::cout << "1. ������� ���������� � �����: " << '\n';
		std::cout << "2. ������ ��� ������ �����: " << '\n';
		std::cout << "3. �������� ���������� � ����� � ��������� ����: " << '\n';
		std::cout << "4. �������� ����� �����: " << '\n';
		std::cout << "5. ������ ��� ���������� � ������: " << '\n';
		std::cout << "0. ��������� ������. " << '\n';
		std::cout << "���� -> ";		
		std::cin >> answer;
	} while (answer != 0 && answer != 1 && answer != 2 && answer != 3 && answer != 4);
	system("cls");
	switch (answer) {
			
		case 0:	
		{
			std::cout << "\n����� �� ���������..." << '\n';
		}
		break; 


		case 1:
			std::cout << "������� � �����: ";
			int n;
			std::cin >> n;			
			show_book(mass_book[n]);
			std::cout << "\n__________________________________\n";
			system("pause");
			system("cls");
			main();
			break;
						
		case 2:
			std::cout << "������� � ����� ��� ������, ������� ������ ������: ";
			std::cin >> n;
			std::cout << "��� ������ �����: " << show_author(mass_book[n]) << "\n__________________________________\n";
			system("pause");
			system("cls");
			main();
			break;
		case 3:
			std::cout << "������� � ����� ���������� � ������� ������ ��������: ";
			std::cin >> n;
			std::cout << "������� ���� � �����: ";
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
		default: std::cout << "������ �����.\n\n";
			
	}
	
	return 0;
}