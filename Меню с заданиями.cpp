#include <iostream>
#include <conio.h>
#include "ifr.h"

using namespace std;

int menu();

int main()
{
	setlocale(LC_ALL, "Russian");
	int answer = menu();
	switch (answer)
	{
	case 0: r1();
	case 1: r2();
	case 2: r3();
	case 3: r4();
	case 4: cout <<"end"<<endl;
	}
	system("pause");
	return 0;
}

int menu() {
	int key = 0;
	int code;
	do {
		system("cls");
		cout << "Выбирите тип задания" << endl;
		key = (key + 5 ) % 5;
		if (key == 0) cout << "->  группа If" << endl;
		else  cout << "   группа If" << endl;
		if (key == 1) cout << "->  группа Case" << endl;
		else  cout << "    группа Case" << endl;
		if (key == 2) cout << "->  группа For" << endl;
		else  cout << "   группа For" << endl;
		if (key == 3) cout << "->  группа While" << endl;
		else  cout << "   группа While" << endl;
		if (key == 4) cout << "-> Выход" << endl;
		else  cout << " Выход" << endl;
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
