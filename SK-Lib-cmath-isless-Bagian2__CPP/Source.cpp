#include <iostream>
#include <cmath>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

using namespace std;

int main() {
	int a = 5;
	double b = nan("1");
	bool hasil;

	hasil = isless(a, b);
	cout << a << " isless than " << b << ": " << hasil;

	_getch();
	return 0;
}
