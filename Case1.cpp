#include "iostream"
#include "ifr.h"
using namespace std;
int z1cs()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Case1.���� ����� ����� � ��������� 1�7.������� ������ � �������� ��� ������,��������������� ������� �����(1 � ������������,2 � �������� � �.�.)." << endl;
	cout << "������� �" << endl;
	cin >> x;
	switch (x) {
	case 1:cout << "�����������" << endl; break;
		case 2:cout << "�������" << endl; break;
		case 3:cout << "�����" << endl; break;
			case 4:cout << "�������" << endl; break;
			case 5:cout << "�������" << endl; break;
			case 6:cout << "�������" << endl; break;
			case 7:cout << "�����������" << endl; break;
	}
	system("pause");
	return 0;
}