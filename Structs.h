#pragma once
#include <string>
#include <iostream>


struct book {
	std::string book_name; //�������� �����
	std::string author_name; //������� � ��� ������
	int publication_year = 0;  //��� �������
	int number_pages = 0; //���-�� �������
	double price = 0.0; // ���� �� ���������
};

//����� ���������� � �����
void show_book(book& B);

//������� ��������� ����� � ���������� ��� � ������(��� �������)
std::string show_author(book& B);

//������� ��������� ����� � ���� � �����, ����� ���� ���������� ���������� � ����� � ��������� ����
void save_book(book& B, std::string path);

//������� ��������� ������ ���� � ��� �����, ����� ���� ��������� � ��� ����� ����� �����, ������� ������ ������������ ������ �������
void add_book(book*& arr, int length);


//������� ��������� ������ ���� � ��� �����, ����� ���� ��������� ������� ���, ������ ��� �������� �������.
void clear_arr(book*& arr, int length);