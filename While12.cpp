#include <iostream>
#include "ifr.h"
using namespace std;


int z12wh()
{
	setlocale(LC_ALL, "Russian");
	cout << "While12�. ���� ����� ����� N (> 1).������� ���������� �� ����� ����� K, ��� ������� ����� 1 + 2 + ... + K ����� ������ ��� ����� N, � ���� ��� �����. " << endl;
	float n, k,a,c;
	cout << "������� N" << endl;
	cin >> n;
	k = 0;
	a = 0;
	c = -1;
	while (a<= n-k) {
    a = a + k;
	k = k +1 ;
	c = c + 1;
	}

	cout << "���������� �� ����� ����� K ===" << c << endl;
	cout << "�����==" << a << endl;
	return 0;
}