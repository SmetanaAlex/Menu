#include "iostream"
#include "ifr.h"
using namespace std;
int z10for()
{
	setlocale(LC_ALL, "Russian");
	int n ;
	float s,k;
	cout << "For10. Дано целое число N (> 0). Найти сумму 1 + 1 / 2 + 1 / 3 + ... + 1 / N" << endl;
	cout << "Введите N" << endl;
	cin >>n;
	s = 0;
	for (k=1; k<=n;k++) {
		s = 1/ k +s;
	}
	cout << "Сумма=   " << s << endl;
	system("pause");
	return 0;
}