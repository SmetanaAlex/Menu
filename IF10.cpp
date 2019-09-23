#include "iostream"
#include "ifr.h"


using namespace std;

int z10if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If10.Даны две переменные целого типа:A и B.Если их значения не равны, то присвоить каждой переменной сумму этих значений, а если равны,то при своить переменным нулевые значения." << endl;
	cout << "Вывести новые значения переменных A и B." << endl; ;
	cout << " Введите A" << endl;
	int a, b;
	cin >> a;
	cout << " Введите B" << endl;
	cin >> b;
	if (a != b) {
		int c = a + b;
		a = c;
		b = c;
	}
	cout << "Hовые значения переменных A и B-" <<a<<"  "<<b<< endl;
	system("pause");
	return 0;
}