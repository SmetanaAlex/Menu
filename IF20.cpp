#include "iostream"
#include "ifr.h"


using namespace std;

int z20if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If20. �� �������� ��� ����������� ��� �����: A, B, C. ����������, ����� ������ ��������� �����(B ��� C) ����������� ����� � A " << endl;
	cout << "������� ��� ����� � �� ���������� �� ����� A." << endl;
	int a, b, c;
	cout << "������� �" << endl;
	cin >> a;
	cout << "������� �" << endl;
	cin >> b;
	cout << "������� �" << endl;
	cin >> c;
	int rr = abs(a - b);
	int rk = abs(a - c);
	if (rr < rk) {
		cout << "����� B  ����������� ����� � A" << endl;
		cout << " ���������� �� ����� A �� � �-  " << rr << endl;
	}
	else {
		cout << "����� C ����������� ����� � A" << endl;
		cout << "���������� �� ����� A �� � �-  " << rk << endl;
	}
	system("pause");
	return 0;
}