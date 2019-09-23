#include "iostream"
#include "ifr.h"
using namespace std;
int z2if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If2. Дано целое число. Если оно является положительным, то прибавить к нему 1; в противном случае вычесть из него 2." << endl;
	cout << "Вывести полученное число." << endl; ;
	cout << "Введите х" << endl;
	int x;
	cin >> x;
	if (x > 0) {x = x + 1;}
	if (x < 0) { x = x - 2; }
	cout << "Полученное число-" << x << endl;
	system("pause");
	return 0;



}