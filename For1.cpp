#include "iostream"
#include "ifr.h"
using namespace std;
int z1for()
{
	setlocale(LC_ALL, "Russian");
	int k, n, y;
	cout << "For1. Даны целые числа K и N (N > 0). Вывести N раз число K. " << endl;
	cout << "Введите К" << endl;
	cin >> k;
	cout << "Введите N" << endl;
	cin >> n;
	for (y = 0; y < k;y++ ) {
		cout << n<<endl;
	}
	system("pause");
	return 0;
}
