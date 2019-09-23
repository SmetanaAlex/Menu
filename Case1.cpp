#include "iostream"
#include "ifr.h"
using namespace std;
int z1cs()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Case1.Дано целое число в диапазоне 1–7.Вывести строку — название дня недели,соответствующее данному числу(1 — «понедельник»,2 — «вторник» и т.д.)." << endl;
	cout << "Введите х" << endl;
	cin >> x;
	switch (x) {
	case 1:cout << "Понедельник" << endl; break;
		case 2:cout << "Вторник" << endl; break;
		case 3:cout << "Среда" << endl; break;
			case 4:cout << "Четверг" << endl; break;
			case 5:cout << "Пятница" << endl; break;
			case 6:cout << "Суббота" << endl; break;
			case 7:cout << "Воскресение" << endl; break;
	}
	system("pause");
	return 0;
}