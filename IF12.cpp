#include "iostream"
#include "ifr.h"


using namespace std;

int z12if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If12�. ���� ��� �����. ����� ���������� �� ���." << endl;
	int a, b, c;
	cout << "������� �" << endl;
	cin >> a;
	cout << "������� �" << endl;
	cin >> b;
	cout << "������� �" << endl;
	cin >> c;
	if (a > b) {
		
		if (b < c) {
			cout << "���������� �� ���-" << b << endl; 
		}
	}
	if (b > a) {
		if (a < c) {
			cout << "���������� �� ���-" << a << endl; 
		}
	}
	if (c > a) {
		if (a > b) {
			cout << "���������� �� ���-" << b << endl;
		}
	}
	system("pause");
	return 0;
}