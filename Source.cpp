// Lab_4_5.cpp
// �������� ����
// ����������� ������ � 4.5
// ������� �����
// ������ 3
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, R;
	cout << "R = "; cin >> R;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		if (y >= -R && y <= R && x <= R && x >= -R && (x + R) * (x + R) + (y - R) * (y - R) >= R * R && (x - R) * (x - R) + (y + R) * (y + R) >= R * R)
			cout << "yes" << endl;
		else
			cout << "no" << endl;

	}
	cout << endl << fixed;
		for (int i = 0; i < 10; i++)
		{
			x = 4.* R * rand() / RAND_MAX - 2 * R;
			y = 4.* R * rand() / RAND_MAX - 2 * R;
			if (y >= -R && y <= R && x <= R && x >= -R && (x + R) * (x + R) + (y - R) * (y - R) >= R * R && (x - R) * (x - R) + (y + R) * (y + R) >= R * R)
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}