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
		if (key == 0) cout << "-> ������� 1." << endl;
		else  cout << "   ������� 1." << endl;
		if (key == 1) cout << "-> ������� 2." << endl;
		else  cout << "   ������� 2." << endl;
		if (key == 2) cout << "-> ������� 10." << endl;
		else  cout << "   ������� 10." << endl;
		if (key == 3) cout << "-> ������� 12." << endl;
		else  cout << "   ������� 12." << endl;
		if (key == 4) cout << "-> ������� 20." << endl;
		else  cout << "   ������� 20." << endl;
		if (key == 5) cout << "-> �����" << endl;
		else  cout << "     �����" << endl;
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
