#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include <fstream>
#include "Structs.h"


//����� ���������� � �����
void show_book(book& B) {
	std::cout << "�������� �����:       " << B.book_name << '\n';
	std::cout << "������� � ��� ������: " << B.author_name << '\n';
	std::cout << "��� �������:          " << B.publication_year << '\n';
	std::cout << "���-�� �������:       " << B.number_pages << '\n';
	std::cout << "���� �� ���������:    " << B.price << '\n';

	std::cout << "----------------------------------\n";
}

//������� ��������� ����� � ���������� ��� � ������(��� �������)
std::string show_author(book& B) {
	std::string tmp = B.author_name;
	std::string newtmp;
	return newtmp += tmp.substr(tmp.rfind(' '));
}

//������� ��������� ����� � ���� � �����, ����� ���� ���������� ���������� � ����� � ��������� ����. �������� � �������!!!!
void save_book(book& B, std::string path) {
	std::fstream fs;
	
	
	fs.open(path);
	if (fs.is_open()) {
		std::string infa_book = "�������� �����: " + B.book_name
			+ " ������� � ��� ������: " + B.author_name
			+ " ��� �������: " + std::to_string(B.publication_year)
			+ " ���-�� �������: " + std::to_string(B.number_pages)
			+ " ���� �� ���������: " + std::to_string(B.price);
		fs << infa_book;
		std::cout << "���������� � ����� ������� �������� � ����: " << path << "\n";
	}
	else
		std::cout << "������ �������� �����: " << path << "\n";
	fs.close();
}


//������� ��������� ������ ���� � ��� �����, ����� ���� ��������� � ��� ����� ����� �����, ������� ������ ������������ ������ �������
void add_book(book*& arr, int length) {
	book* tmp = new book[length + 1];

	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];
	
	delete[]arr;
	
	arr = tmp;

	std::cout << "������� �������� �����: ";
	std::cin.ignore();
	getline(std::cin, arr[length].book_name);
	std::cout << "������� ������� � ��� ������: ";
	getline(std::cin, arr[length].author_name);
	std::cout << "������� ��� �������: ";
	std::cin >> arr[length].publication_year;
	std::cout << "������� ���-�� �������: ";
	std::cin >> arr[length].number_pages;
	std::cout << "������� ���� �� ���������: ";
	std::cin >> arr[length].price;
}


//������� ��������� ������ ���� � ��� �����, ����� ���� ��������� ������� ���, ������ ��� �������� �������.
void clear_arr(book*& arr, int length) {
	delete[]arr;
}