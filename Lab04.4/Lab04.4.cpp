#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double x, xp, xk, dx, y;
	
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "-------------------------" << endl;
	cout << "|" << setw(5) << "x" << setw(5) << " |"
		<< setw(7) << "y" << setw(7) << " |" << endl;
	cout << "-------------------------" << endl;

	x = xp;

	while (x <= xk)
	{
		if (x <= -4)
			y = -2;
		else
			if (x > -4 && x < 0)
				y = -1 + (x + 4) / 4;
			else
				if (x >= 0 && x <= 2)
					y = x * x;
				else
					y = 4 + (-1) * (x - 2) / 2;

		cout << "|" << setw(7) << setprecision(2) << x << setw(3)
			<< " |" << setw(8) << setprecision(2) << y << setw(6)
			<< " |" << endl;

		x += dx;
	}
	cout << "-------------------------" << endl;

	return 0;
}

