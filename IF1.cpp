
#include "iostream"
#include "ifr.h"


using namespace std;

int z1if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If1. Дано целое число. Если оно является положительным, то прибавить к нему 1 в противном случае не изменять его."<<endl ;
	cout << "Вывести полученное число." << endl; ;
	cout << " Введите х" << endl;
	short int x;
	cin >> x;
		if (x > 0) x = x + 1;
		return x;
	cout <<"Полученное число-"<< x <<endl ;
	system("pause");
	return 0;
}