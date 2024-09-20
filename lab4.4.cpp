#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx, R, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(7) << "x   " << "|"
		<< setw(10) << "y    " << "|" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x <= -1 - R)
			y = 1;
		else
			if (-1 - R < x && x <= -1)
				y = -sqrt(R * R - pow((x + 1), 2));
			else
				if (-1 < x && x <= 2)
					y = -R;
				else
					y = (R * (x - 4)) / 2;

		cout << "|" << setw(7) << setprecision(2) << x
			<< "|" << setw(10) << setprecision(3) << y
			<< "|" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}