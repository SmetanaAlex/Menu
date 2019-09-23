#include "iostream"
#include "ifr.h"
using namespace std;
int factorial(int N)
{
	int F = 1;
	for (int i = 1; i <= N; ++i)
	{
		F *= i;
	}
	return F;
}
