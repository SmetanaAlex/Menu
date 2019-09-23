#include <iostream>
#include "ifr.h"
using namespace std;


int z12wh()
{
	setlocale(LC_ALL, "Russian");
	cout << "While12°. Дано целое число N (> 1).Вывести наибольшее из целых чисел K, для которых сумма 1 + 2 + ... + K будет меньше или равна N, и саму эту сумму. " << endl;
	float n, k,a,c;
	cout << "Введите N" << endl;
	cin >> n;
	k = 0;
	a = 0;
	c = -1;
	while (a<= n-k) {
    a = a + k;
	k = k +1 ;
	c = c + 1;
	}

	cout << "Наибольшее из целых чисел K ===" << c << endl;
	cout << "Сумма==" << a << endl;
	return 0;
}