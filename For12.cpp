#include "iostream"
#include "ifr.h"
using namespace std;
int z12for()
{
	setlocale(LC_ALL, "Russian");
	float s, k,n;
	cout << "For12�. ���� ����� ����� N (> 0). ����� ������������ 1.1 � 1.2 � 1.3 � ...(N ������������)." << endl;
	cout << "������� N" << endl;
	cin >> n;
	s = 1;
	for (k = 1; k < n;k+0.1) {
		k = k + 0.1;
		s = s*k;
	}
	cout << "������������ =   " << s << endl;
	system("pause");
	return 0;
}