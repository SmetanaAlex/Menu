#include "iostream"
#include "ifr.h"
using namespace std;
int z20cs()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "Case20. ���� ��� ����� �����: D (����) � M (�����), ������������ ���������� ����.������� ���� �������, ��������������� ���� ���� : ��������(20.1�18.2), ������(19.2�20.3), �����(21.3�19.4), �������(20.4�20.5),����������(21.5�21.6), ����(22.6�22.7), ����(23.7�22.8), �����(23.8�22.9), ������(23.9�22.10), ���������(23.10�22.11), ���������(23.11�21.12), ��������(22.12�19.1)." << endl;
	cout << "������� ����� ��� " << endl;
	cin >> x;
	cout << "������� ����� ������" << endl;
	cin >> y;
	switch (y) {
	case 1: if (x >= 20) { cout << "��������" << endl; }  
		  else { cout << "��������" << endl; } break;
	case 2:   if (x >= 19) { cout << "������" << endl; } 
		  else { cout << "��������" << endl; } break;
	case 3:   if (x >= 21) { cout << "�����" << endl; } 
		  else { cout << "������" << endl; } break;
	case 4:   if (x >= 20) { cout << "�������" << endl; } 
		  else { cout << "�����" << endl; } break;
	case 5:   if (x >= 21) { cout << "����������" << endl; } 
		  else { cout << "�������" << endl; } break;
	case 6:   if (x >= 22) { cout << "����" << endl; } 
		  else { cout << "����������" << endl; } break;
	case 7:   if (x >= 23) { cout << "����" << endl; } 
		  else { cout << "����" << endl; } break;
	case 8:   if (x >= 23) { cout << "�����" << endl; } 
		  else { cout << "����" << endl; } break;
	case 9:   if (x >= 23) { cout << "������" << endl; } 
		  else { cout << "�����" << endl; } break;
	case 10:   if (x >= 23) { cout << "���������" << endl; }
		   else { cout << "������" << endl; } break;
	case 11:   if (x >= 23) { cout << "���������" << endl; } 
		   else { cout << "���������" << endl; } break;
	case 12:   if (x >= 22) { cout << "��������" << endl; } 
		   else { cout << "���������" << endl; } break;
	}
	system("pause");
	return 0;

}