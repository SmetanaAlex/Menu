#include "iostream"
#include "ifr.h"
using namespace std;
int z20cs()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "Case20. Даны два целых числа: D (день) и M (месяц), определяющие правильную дату.Вывести знак Зодиака, соответствующий этой дате : «Водолей»(20.1–18.2), «Рыбы»(19.2–20.3), «Овен»(21.3–19.4), «Телец»(20.4–20.5),«Близнецы»(21.5–21.6), «Рак»(22.6–22.7), «Лев»(23.7–22.8), «Дева»(23.8–22.9), «Весы»(23.9–22.10), «Скорпион»(23.10–22.11), «Стрелец»(23.11–21.12), «Козерог»(22.12–19.1)." << endl;
	cout << "Введите число дня " << endl;
	cin >> x;
	cout << "Введите номер месяца" << endl;
	cin >> y;
	switch (y) {
	case 1: if (x >= 20) { cout << "«Водолей»" << endl; }  
		  else { cout << "«Козерог»" << endl; } break;
	case 2:   if (x >= 19) { cout << "«Рыбы»" << endl; } 
		  else { cout << "«Водолей»" << endl; } break;
	case 3:   if (x >= 21) { cout << "«Овен»" << endl; } 
		  else { cout << "«Рыбы»" << endl; } break;
	case 4:   if (x >= 20) { cout << "«Телец»" << endl; } 
		  else { cout << "«Овен»" << endl; } break;
	case 5:   if (x >= 21) { cout << "«Близнецы»" << endl; } 
		  else { cout << "«Телец»" << endl; } break;
	case 6:   if (x >= 22) { cout << "«Рак»" << endl; } 
		  else { cout << "«Близнецы»" << endl; } break;
	case 7:   if (x >= 23) { cout << "«Лев»" << endl; } 
		  else { cout << "«Рак»" << endl; } break;
	case 8:   if (x >= 23) { cout << "«Дева»" << endl; } 
		  else { cout << "«Лев»" << endl; } break;
	case 9:   if (x >= 23) { cout << "«Весы»" << endl; } 
		  else { cout << "«Дева»" << endl; } break;
	case 10:   if (x >= 23) { cout << "«Скорпион»" << endl; }
		   else { cout << "«Весы»" << endl; } break;
	case 11:   if (x >= 23) { cout << "«Стрелец»" << endl; } 
		   else { cout << "«Скорпион»" << endl; } break;
	case 12:   if (x >= 22) { cout << "«Козерог»" << endl; } 
		   else { cout << "«Стрелец»" << endl; } break;
	}
	system("pause");
	return 0;

}