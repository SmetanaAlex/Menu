#include <iostream>
#include "ifr.h"
using namespace std;


int z30wh()
{
	setlocale(LC_ALL, "Russian");
	cout << " While30. Даны положительные числа A, B, C. На прямоугольнике размера A × B размещено максимально возможное количество квадратов со стороной C(без наложений).Найти количество квадратов, размещенных на прямоугольнике.Операции умножения и деления не использовать." << endl;
	int a, b, c,k,kv;
	cout << "Введите А" << endl;
	cin >> a;
	cout << "Введите В" << endl;
	cin >> b;
	cout << "Введите C" << endl;
	cin >> c;
	k = 0;
      while (c<=a) {
		  a = a - c;
		k = k + 1;
	}
	  kv = 0;
	  while (c <= b) {
		  b = b - c;
		  kv = kv + k;
	  }
	cout << kv << "==  количество квадратов, размещенных на прямоугольнике." << endl;
	return 0;
}