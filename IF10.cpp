#include "iostream"
#include "ifr.h"


using namespace std;

int z10if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If10.���� ��� ���������� ������ ����:A � B.���� �� �������� �� �����, �� ��������� ������ ���������� ����� ���� ��������, � ���� �����,�� ��� ������ ���������� ������� ��������." << endl;
	cout << "������� ����� �������� ���������� A � B." << endl; ;
	cout << " ������� A" << endl;
	int a, b;
	cin >> a;
	cout << " ������� B" << endl;
	cin >> b;
	if (a != b) {
		int c = a + b;
		a = c;
		b = c;
	}
	cout << "H���� �������� ���������� A � B-" <<a<<"  "<<b<< endl;
	system("pause");
	return 0;
}