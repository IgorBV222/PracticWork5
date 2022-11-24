#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
#include "Structs.h"

using namespace std;




int main() {
	setlocale(LC_ALL, "Russian");
	//int n, m;
	
	book* mass = new book[3]; //выделение динамической памяти для хранения массива
	
	/*for (int i = 0; i < 3; i++)
	{
		mass[i] = book;
		cout << mass[i] << "\n ";		
	}*/





	delete[] mass;
	return 0;
}