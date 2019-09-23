#include <iostream>
#include "ifr.h"
using namespace std;


int z10wh()
{
	setlocale(LC_ALL, "Russian");
	cout << "While10. ƒано целое число N (> 1). Ќайти наибольшее целое число K, при котором выполн€етс€ неравенство 3K< N. " << endl;
	float n, k;
	cout << "¬ведите N" << endl;
	cin >> n;
	k = 1;
	while (pow(3,k) < n-1) {
		k=k+0.1;
		

	}
	cout << "наибольшее целое число K, при котором выполн€етс€ неравенство 3K< N ==" << k << endl;
	return 0;
}