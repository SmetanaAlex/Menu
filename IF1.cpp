
#include "iostream"
#include "ifr.h"


using namespace std;

int z1if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If1. ���� ����� �����. ���� ��� �������� �������������, �� ��������� � ���� 1 � ��������� ������ �� �������� ���."<<endl ;
	cout << "������� ���������� �����." << endl; ;
	cout << " ������� �" << endl;
	short int x;
	cin >> x;
		if (x > 0) x = x + 1;
		return x;
	cout <<"���������� �����-"<< x <<endl ;
	system("pause");
	return 0;
}