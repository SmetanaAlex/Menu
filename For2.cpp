#include "iostream"
#include "ifr.h"
using namespace std;
int z2for()
{
	setlocale(LC_ALL, "Russian");
	int a,b,y,r,k,d;
	cout << "For2. ���� ��� ����� ����� A � B (A < B). ������� � ������� ����������� �������� �����, ������������� ����� A � B(������� ���� ����� A � B),� ����� ���������� N ���� �����. " << endl;
	cout << "������� B" << endl;
	cin >> b;
	cout << "������� A" << endl;
	cin >> a;
	r = b-a;
	cout << "--------------------------------------------------------------------" << endl;
	for (k=0; r>=0;k++) {
		d = b - r;
		r = r -1;
		cout << d << endl;
	}
	cout << "N ���� ����� =   " << k << endl;
	system("pause");
	return 0;
}