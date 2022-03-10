#include <iostream>
#include <cstdlib>

using namespace std;

void exit()
{
	cout << endl << "Press any key to exit" << endl;

	getchar();
	getchar();
	exit(0);
}

int Multiplying(int p, int w)
{
	if (w == 0)
	{
		return 1;
	}
	else
	{
		return p * Multiplying(p, w - 1);
	}
}

int main()
{
	int base, exponent;

	cin >> base;
	cin >> exponent;

	cout << Multiplying(base, exponent);

	exit();
}