#include "iostream"
#include "ifr.h"


using namespace std;

int z12if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If12°. Даны три числа. Найти наименьшее из них." << endl;
	int a, b, c;
	cout << "Введите А" << endl;
	cin >> a;
	cout << "Введите В" << endl;
	cin >> b;
	cout << "Введите С" << endl;
	cin >> c;
	if (a > b) {
		
		if (b < c) {
			cout << "Наименьшее из них-" << b << endl; 
		}
	}
	if (b > a) {
		if (a < c) {
			cout << "Наименьшее из них-" << a << endl; 
		}
	}
	if (c > a) {
		if (a > b) {
			cout << "Наименьшее из них-" << b << endl;
		}
	}
	system("pause");
	return 0;
}