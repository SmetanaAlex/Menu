#include <iostream>
#include <conio.h>
#include "ifr.h"
using namespace std;

int task1();
int r1()
{
setlocale(LC_ALL, "Russian");
int answer = task1();
  switch (answer)
{
case 0: cout << z1if()<< endl; break;
case 1: cout <<  z2if() << endl; break;
case 2: cout << z10if() << endl; break;
case 3: cout << z12if() << endl; break;
case 4: cout <<  z20if() << endl; break;
case 5: cout << z22if() << endl; break;
case 6: cout << z30if() << endl; break;
case 7:menu(); return 0;

}
system("pause");
}

int  task1() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 8) % 8;
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
		if (key == 5) cout << "-> Задание 22." << endl;
		else  cout << "   Задание 22." << endl;
		if (key == 6) cout << "-> Задание 30." << endl;
		else  cout << "   Задание 30." << endl;
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
