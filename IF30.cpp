#include "iostream"
#include "ifr.h"
using namespace std;
int z30if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If30. ���� ����� �����, ������� � ��������� 1�999. ������� ��� ������-�������� ���� ������� ���������� �����, ��������� ����������� ������ �.�." << endl;
	cout << "������� �" << endl;
	int x,y;
	cin >> x;
	y = x % 2;
	if ( y == 0) {
		if (0 < x / 10 && x/10<10) { cout << "����� ������ � �����������" << endl; }
		else {
			if (x / 100 > 0) { cout << "����� ������ � �����������" << endl; }
			if (x % 10 > 0 && x / 10 < 1) { cout << "����� ������ � �����������" << endl; }
		}
	}
	else {
		if (0 < x / 10 && x / 10 < 10) { cout << "����� �������� � �����������" << endl; }
		else {
			if (x / 100 > 0) { cout << "����� �������� � �����������" << endl; }
			if (x % 10 > 0 && x/10<1) { cout << "����� �������� � �����������" << endl; }
		}
	} 
	 
	system("pause");
	return 0;
}