#include "iostream"
#include "ifr.h"
using namespace std;
int z2if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If2. ���� ����� �����. ���� ��� �������� �������������, �� ��������� � ���� 1; � ��������� ������ ������� �� ���� 2." << endl;
	cout << "������� ���������� �����." << endl; ;
	cout << "������� �" << endl;
	int x;
	cin >> x;
	if (x > 0) {x = x + 1;}
	if (x < 0) { x = x - 2; }
	cout << "���������� �����-" << x << endl;
	system("pause");
	return 0;



}