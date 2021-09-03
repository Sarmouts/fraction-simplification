

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


string simplification(double num, double den)
{
	if (num / den == round(num / den))
	{
		return to_string(num / den);
	}
	else
	{
		double MKD;
		if (abs(num) > abs(den))
		{
			MKD = abs(num) - abs(den);
			if (num / MKD != round(num / MKD) || den / MKD != round(den / MKD))
			{
				if (num < 0 && den < 0) return to_string(-num) + "/" + to_string(-den);
				else if (num > 0 && den > 0) return to_string(num) + "/" + to_string(den);
				else return "-" + to_string(num) + "/" + to_string(den);
			}
			else
			{
				if (num < 0 && den < 0) return to_string(-num / MKD) + "/" + to_string(-den / MKD);
				else if (num > 0 && den > 0) return to_string(num / MKD) + "/" + to_string(den / MKD);
				else return "-" + to_string(num / MKD) + "/" + to_string(den / MKD);
			}
		}
		else
		{
			MKD = abs(den) - abs(num);
			if (num / MKD != round(num / MKD) || den / MKD != round(den / MKD))
			{
				if (num < 0 && den < 0) return to_string(-num) + "/" + to_string(-den);
				else if (num > 0 && den > 0) return to_string(num) + "/" + to_string(den);
				else return "-" + to_string(num) + "/" + to_string(den);
			}
			else
			{
				if (num < 0 && den < 0) return to_string(-num / MKD) + "/" + to_string(-den / MKD);
				else if (num > 0 && den > 0) return to_string(num / MKD) + "/" + to_string(den / MKD);
				else return "-" + to_string(num / MKD) + "/" + to_string(den / MKD);
			}
		}
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
		cout << simplification(x, y) << endl;
	}
}
