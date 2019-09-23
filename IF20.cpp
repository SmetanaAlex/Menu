#include "iostream"
#include "ifr.h"


using namespace std;

int z20if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If20. На числовой оси расположены три точки: A, B, C. Определить, какая издвух последних точек(B или C) расположена ближе к A " << endl;
	cout << "вывести эту точку и ее расстояние от точки A." << endl;
	int a, b, c;
	cout << "Введите А" << endl;
	cin >> a;
	cout << "Введите В" << endl;
	cin >> b;
	cout << "Введите С" << endl;
	cin >> c;
	int rr = abs(a - b);
	int rk = abs(a - c);
	if (rr < rk) {
		cout << "точка B  расположена ближе к A" << endl;
		cout << " Расстояние от точки A до т В-  " << rr << endl;
	}
	else {
		cout << "точка C расположена ближе к A" << endl;
		cout << "Расстояние от точки A до т С-  " << rk << endl;
	}
	system("pause");
	return 0;
}