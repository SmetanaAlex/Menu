#include <iostream>
#include "ifr.h"
using namespace std;


int z10wh()
{
	setlocale(LC_ALL, "Russian");
	cout << "While10. ���� ����� ����� N (> 1). ����� ���������� ����� ����� K, ��� ������� ����������� ����������� 3K< N. " << endl;
	float n, k;
	cout << "������� N" << endl;
	cin >> n;
	k = 1;
	while (pow(3,k) < n-1) {
		k=k+0.1;
		

	}
	cout << "���������� ����� ����� K, ��� ������� ����������� ����������� 3K< N ==" << k << endl;
	return 0;
}