#pragma once
#include <string>
#include <iostream>

struct book {
	std::string book_name{}; //�������� �����
	std::string author_name{}; //������� � ��� ������
	int publication_year{};  //��� �������
	int number_pages{}; //���-�� �������
	double price{}; // ���� �� ���������
};

//����� ���������� � �����;
void show_book(book& B);

//������� ��������� ����� � ���������� ��� � ������(��� �������);
std::string show_author(book& B);

//������� ��������� ����� � ���� � �����, ����� ���� ���������� ���������� � ����� � ��������� ����;
void save_book(book& B, std::string file);


//add_book � ������� ��������� ������ ���� � ��� �����, ����� ���� ��������� � ��� ����� ����� �����, ������� ������ ������������ ������ �������;
template <typename T>
void add_book(T* arr, int length) {
	T* tmp = new T[length + 1];

	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];

	tmp[length] = book;
		std::cout << "������� �������� �����: ";
		std::cin.ignore();
		getline(std::cin, B.book_name);
		std::cout << "������� ������� � ��� ������: ";
		std::cin.ignore();
		getline(std::cin, B.author_name);
		std::cout << "������� ��� �������: ";
		std::cin >> B.publication_year;
		std::cout << "������� ���-�� �������: ";
		std::cin >> B.number_pages;
		std::cout << "������� ���� �� ���������: ";
		std::cin >> B.price;
	

	delete[]arr;
	arr = tmp;
};


//clear_arr � ������� ��������� ������ ���� � ��� �����, ����� ���� ��������� ������� ���, ������ ��� �������� �������.
template <typename T>
void clear_arr(T* &arr, int length) {
	delete[]arr;
};