#include <iostream>
#include <conio.h>
#include "ifr.h"
using namespace std;

int task2();
int r2()
{
	setlocale(LC_ALL, "Russian");
	int answer = task2();
	switch (answer)
	{
	case 0:  z1cs(); break;
	case 1:   z2cs(); break;
	case 2:  z10cs(); break;
	case 3: z12cs(); break;
	case 4:z20cs(); break;
	case 5:menu(); return 0;
	}
	system("pause");
}

int  task2() {
	int key = 0;
	int code;
	do {
		system("cls");
		key = (key + 6) % 6;
		if (key == 0) cout << "->������� 1." << endl;
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
