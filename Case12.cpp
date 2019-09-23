#include "iostream"
#include "ifr.h"
using namespace std;
int z12cs()
{
	setlocale(LC_ALL, "Russian");
	long int x, y,r,d,l,s;
	cout << "Case12. Элементы окружности пронумерованы следующим образом: 1 — радиус R, 2 — диаметр , 3 — длина L = , 4 — площадь круга .Дан номер одного из этих элементов и его значение.Вывести значения остальных элементов данной окружности(в том же порядке).В качестве значения π использовать 3.14." << endl;
	cout << "Введите элемент окружности R" << endl;
	cout << "1-радиус" << endl;
	cout << " 2 — диаметр " << endl;
	cout << "3 — длина " << endl;
	cout << " 4 — площадь круга" << endl;
	cin >> y;
	cout << " Введите значение вашего элемента " << endl;
	cin >> x;
	switch (y) {
	case 1:long int otvet();
	{ if (y == 1) {
		r = x;
		d = 2 * x;
		l = 2 * 3.14 * x;
		s = pow(x, 2) * 3.14;
		cout << "Радиус=" << r << endl;
		cout << "Диаметр=" << d << endl;
		cout << "Длина=" << l << endl;
		cout << "Площа=" << s << endl;
	}
	}
	case 2:long int otvet(); { if (y == 2) {
		r = x / 2;
		d = x;
		l = r * 2 * 3.14;
		s = pow(r, 2) * 3.14;
		cout << "Радиус=" << r << endl;
		cout << "Диаметр=" << d << endl;
		cout << "Длина=" << l << endl;
		cout << "Площа=" << s << endl;
	}
	}
	case 3:long int otvet(); { if (y == 3) {
		r = x / 2 / 3.14;
		d = 2 * r;
		l = x;
		s= pow(r, 2) * 3.14;
		cout << "Радиус=" << r << endl;
		cout << "Диаметр=" << d << endl;
		cout << "Длина=" << l << endl;
		cout << "Площа=" << s << endl ;
	}
	}
	case 4:long int otvet(); { if (y == 4) {
		r = sqrt(x) / 3.14;
		d = 2 * r;
		l = r * 2 * 3.14;
		s = x;
		cout << "Радиус=" << r << endl;
		cout << "Диаметр=" << d << endl;
		cout << "Длина=" << l << endl;
		cout << "Площа=" << s << endl;
	}
	}
	}
	system("pause");
	return 0;
	}
