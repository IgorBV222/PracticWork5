#include <string>
#include <iostream>
#include <fstream>
#include "Structs.h"

//����� ���������� � �����;
void show_book(book& B) {
	std::cout << "�������� �����:       " << B.book_name << '\n';
	std::cout << "������� � ��� ������: " << B.author_name << '\n';
	std::cout << "��� �������:          " << B.publication_year << '\n';
	std::cout << "���-�� �������:       " << B.number_pages << '\n';
	std::cout << "���� �� ���������:    " << B.price << '\n';

	std::cout << "----------------------------------\n";
};

//������� ��������� ����� � ���������� ��� � ������(��� �������);

std::string show_author(book& B) {
	std::string tmp = B.author_name;
	std::string newtmp;
	char sym = ' ';
	if(tmp.rfind(sym) != 0)
		newtmp += tmp.substr(tmp.rfind(sym));
	//cout << "��� ������: " << '\n';
	return newtmp;
}

////������� ��������� ����� � ���� � �����, ����� ���� ���������� ���������� � ����� � ��������� ����;
void save_book(book& B, std::string file) {

	std::ofstream out;
	out.open(file, std::ios::app);

	if (out.is_open()) {
		std::string input;
		input = "�������� ����� : " + B.book_name 
			+ "\n������� � ��� ������: " + B.author_name 
			+ "\n��� �������: " + std::to_string(B.publication_year) 
			+ "\n���-�� �������: " + std::to_string(B.number_pages) 
			+ "\n���� �� ���������: " + std::to_string(B.price);
				
			std::getline(std::cin, input);
			out << input << "\n";		
	}
	else
		std::cout << "������ �������� �����!\n";
	out.close();
}



