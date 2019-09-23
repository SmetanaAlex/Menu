#include "iostream"
#include "ifr.h"


using namespace std;

int z22if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If22°. Даны координаты точки, не лежащей на координатных осях OX и OY. " << endl;
	cout << "Определить номер координатной четверти, в которой находится данная точка." << endl;
	int x1,y1;
	cout << "Введите х" << endl;
	cin >> x1 ;
	cout << "Введите у" << endl;
	cin >> y1;
	if (x1>0) {
		if (y1 > 0) { cout << "Точка находится в 1 четверти" << endl; }
		else { cout << "Точка находится в 4 четверти" << endl; }
	}
	else {
		if (y1 > 0) { cout << "Точка находится в  2  четверти" << endl; }
		else { cout << "Точка находится в  3 четверти" << endl; }
	}
	system("pause");
		return 0;
	}
