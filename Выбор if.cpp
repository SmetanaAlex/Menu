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
		if (key == 5) cout << "-> ������� 22." << endl;
		else  cout << "   ������� 22." << endl;
		if (key == 6) cout << "-> ������� 30." << endl;
		else  cout << "   ������� 30." << endl;
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
