

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


string simplification(double num, double den)
{
	if (num / den == round(num / den))
	{
		return to_string(static_cast<int>(num / den));
	}
	else if (num != round(num) || den != round(den))
	{
		return to_string(num / den) + " (" + to_string(static_cast<int>(round(num / den))) + ")";
	}
	else
	{
		double MKD;
		int x = num;
		int y = den;
		for (int i = 0; i >= 0; i++)
		{
			if (x == 0)
			{
				MKD = abs(y);
				break;
			}
			else if (y == 0)
			{
				MKD = abs(x);
				break;
			}
			else if (abs(x) > abs(y))
			{
				x %= abs(y);
			}
			else if (abs(x) < abs(y))
			{
				y %= abs(x);
			}
		}
		if (num < 0 && den < 0) return to_string(static_cast<int>(-num / MKD)) + "/" + to_string(static_cast<int>(-den / MKD));
		else if (num > 0 && den > 0) return to_string(static_cast<int>(num / MKD)) + "/" + to_string(static_cast<int>(den / MKD));
		else return "-" + to_string(static_cast<int>(abs(num) / MKD)) + "/" + to_string(static_cast<int>(abs(den) / MKD));
	}
}
int main()
{
	cout << "Welcome to MathFlare's early access Fraction Simplification Calculator" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	while (true)
	{
		double x, y;
		cout << "        x/y        " << endl;
		cout << "-------------------" << endl;
		cout << "Enter numerator x" << endl;
		cin >> x;
		cout << "Enter denominator y" << endl;
		cin >> y;
		cout << x << "/" << y << " = " << simplification(x, y) << endl;
		cout << "===================" << endl;
	}
}
