#include "iostream"
#include "ifr.h"
using namespace std;
int z1for()
{
	setlocale(LC_ALL, "Russian");
	int k, n, y;
	cout << "For1. ���� ����� ����� K � N (N > 0). ������� N ��� ����� K. " << endl;
	cout << "������� �" << endl;
	cin >> k;
	cout << "������� N" << endl;
	cin >> n;
	for (y = 0; y < k;y++ ) {
		cout << n<<endl;
	}
	system("pause");
	return 0;
}
