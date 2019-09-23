#include <iostream>
#include "ifr.h"
using namespace std;


int z2wh()
{
	setlocale(LC_ALL, "Russian");
	cout << " While2°. Даны положительные числа A и B (A > B). На отрезке длины A размещено максимально возможное количество отрезков длины B(без наложений).Не используя операции умножения и деления, найти длину незанятой части отрезка A." << endl;
	int a, b, k;
	cout << "Введите А" << endl;
	cin >> a;
	cout << "Введите В" << endl;
	cin >> b;
	k = 0;
	while (a >= b) {
		a = a - b;
		k = k + 1;
	}
	cout << k << "Максимально возможное количество отрезков длины B" << endl;
	return 0;
}