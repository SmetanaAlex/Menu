#include "iostream"
#include "ifr.h"
using namespace std;
int z2for()
{
	setlocale(LC_ALL, "Russian");
	int a,b,y,r,k,d;
	cout << "For2. Даны два целых числа A и B (A < B). Вывести в порядке возрастания всецелые числа, расположенные между A и B(включая сами числа A и B),а также количество N этих чисел. " << endl;
	cout << "Введите B" << endl;
	cin >> b;
	cout << "Введите A" << endl;
	cin >> a;
	r = b-a;
	cout << "--------------------------------------------------------------------" << endl;
	for (k=0; r>=0;k++) {
		d = b - r;
		r = r -1;
		cout << d << endl;
	}
	cout << "N этих чисел =   " << k << endl;
	system("pause");
	return 0;
}