#include "iostream"
#include "ifr.h"
using namespace std;
int z2cs()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Case2. ���� ����� ����� K. ������� ������-�������� ������, ������������-��� ����� K(1 � ������, 2 � ��������������������, 3 � ������������������, 4 � �������, 5 � ��������)." << endl;
	cout << "���� K �� ����� � ��������� 1�5, �� ������� ������ �������." << endl;
	cout << "������� K" << endl;
	cin >> x;
	if (x > 5 || x < 1) { 
		cout << "�������" << endl;
	}
	else {
		switch (x) {
		case 1:cout << "�����" << endl; break;
		case 2:cout << "�������������������" << endl; break;
		case 3:cout << "�����������������" << endl; break;
		case 4:cout << "������" << endl; break;
		case 5:cout << "�������" << endl; break;

		}
	}
	system("pause");
	return 0;
}
