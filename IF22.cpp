#include "iostream"
#include "ifr.h"


using namespace std;

int z22if()
{
	setlocale(LC_ALL, "Russian");
	cout << "If22�. ���� ���������� �����, �� ������� �� ������������ ���� OX � OY. " << endl;
	cout << "���������� ����� ������������ ��������, � ������� ��������� ������ �����." << endl;
	int x1,y1;
	cout << "������� �" << endl;
	cin >> x1 ;
	cout << "������� �" << endl;
	cin >> y1;
	if (x1>0) {
		if (y1 > 0) { cout << "����� ��������� � 1 ��������" << endl; }
		else { cout << "����� ��������� � 4 ��������" << endl; }
	}
	else {
		if (y1 > 0) { cout << "����� ��������� �  2  ��������" << endl; }
		else { cout << "����� ��������� �  3 ��������" << endl; }
	}
	system("pause");
		return 0;
	}
