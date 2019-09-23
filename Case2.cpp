#include "iostream"
#include "ifr.h"
using namespace std;
int z2cs()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "Case2. ƒано целое число K. ¬ывести строку-описание оценки, соответствую-щей числу K(1 Ч Ђплохої, 2 Ч Ђнеудовлетворительної, 3 Ч Ђудовлетворительної, 4 Ч Ђхорошої, 5 Ч Ђотличної)." << endl;
	cout << "≈сли K не лежит в диапазоне 1Ц5, то вывести строку Ђошибкаї." << endl;
	cout << "¬ведите K" << endl;
	cin >> x;
	if (x > 5 || x < 1) { 
		cout << "Ђошибкаї" << endl;
	}
	else {
		switch (x) {
		case 1:cout << "плохо" << endl; break;
		case 2:cout << "неудовлетворительно" << endl; break;
		case 3:cout << "удовлетворительно" << endl; break;
		case 4:cout << "хорошо" << endl; break;
		case 5:cout << "отлично" << endl; break;

		}
	}
	system("pause");
	return 0;
}
