#include <iostream>
#include <conio.h>
#include "ifr.h"
using namespace std;

int task3();
int r3()
{
	setlocale(LC_ALL, "Russian");
	int answer = task3();
	switch (answer)
	{
	case 0:  z1for(); break;
	case 1: z2for(); break;
	case 2: z10for(); break;
	case 3: z12for();  break;
	case 4:  z20for(); break;
	case 5:menu();return 0;


	}
	system("pause");
}

int  task3() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 5) % 5;
		if (key == 0) cout << "-> Задание 1." << endl;
		else  cout << "   Задание 1." << endl;
		if (key == 1) cout << "-> Задание 2." << endl;
		else  cout << "   Задание 2." << endl;
		if (key == 2) cout << "-> Задание 10." << endl;
		else  cout << "   Задание 10." << endl;
		if (key == 3) cout << "-> Задание 12." << endl;
		else  cout << "   Задание 12." << endl;
		if (key == 4) cout << "-> Задание 20." << endl;
		else  cout << "   Задание 20." << endl;
		if (key == 5) cout << "-> Выход" << endl;
		else  cout << "     Выход" << endl;
		code = _getch();
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
