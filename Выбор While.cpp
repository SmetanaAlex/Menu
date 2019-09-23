#include <iostream>
#include <conio.h>
#include "ifr.h"
using namespace std;

int task4();
int r4()
{
	setlocale(LC_ALL, "Russian");
	int answer = task4();
	switch (answer)
	{
	case 0:  z1wh(); break;
	case 1:  z2wh(); break;
	case 2: z10wh(); break;
	case 3:  z12wh(); break;
	case 4: z30wh(); break;
	case 5:menu(); return 0;
	}
	system("pause");
}

int  task4() {
	int key = 0;
	int code=0;

	do {
		system("cls");
		key = (key + 6) % 6;
		if (key == 0) cout << "-> Задание 1." << endl;
		else  cout << "   Задание 1." << endl;
		if (key == 1) cout << "-> Задание 2." << endl;
		else  cout << "   Задание 2." << endl;
		if (key == 2) cout << "-> Задание 10." << endl;
		else  cout << "   Задание 10." << endl;
		if (key == 3) cout << "-> Задание 12." << endl;
		else  cout << "   Задание 12." << endl;
		if (key == 4) cout << "-> Задание 30." << endl;
		else  cout << "   Задание 30." << endl;
		if (key == 5) cout << "-> Выход" << endl;
		else  cout << "     Выход" << endl;
		if (code == 224)
		{
			code = _getch();
			if (code == 80) key++;
			if (code == 72) key--;
		}
	} while (code != 13);
	system("cls");

	return key;

}
