// Lab_04_4.cpp
// Володько Олег
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 3
#include <iostream>
#include <iomanip>
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main()
{
	double x, y, R, xp, xk, dx;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -7 - R)
			y = R;
		else
			if (-7 - R < x && x <= -7 + R)
				y = R - sqrt(R * R - (x + 7) * (x + 7));
			else
				if (-7 + R < x && x <= -4)
					y = R;
				else
					if (-4 < x && x <= 0)
						y = -x * R / 4;
					else
						if (0 < x && x <= M_PI)
							y = sin(x);
						else
							y = x - M_PI;
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}