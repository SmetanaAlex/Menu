#include <iostream>
#include "ifr.h"
using namespace std;


int z2wh()
{
	setlocale(LC_ALL, "Russian");
	cout << " While2�. ���� ������������� ����� A � B (A > B). �� ������� ����� A ��������� ����������� ��������� ���������� �������� ����� B(��� ���������).�� ��������� �������� ��������� � �������, ����� ����� ��������� ����� ������� A." << endl;
	int a, b, k;
	cout << "������� �" << endl;
	cin >> a;
	cout << "������� �" << endl;
	cin >> b;
	k = 0;
	while (a >= b) {
		a = a - b;
		k = k + 1;
	}
	cout << k << "����������� ��������� ���������� �������� ����� B" << endl;
	return 0;
}