

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
		if (num < 0 && den < 0) return to_string(-num) + "/" + to_string(-den);
		else if (num > 0 && den > 0) return to_string(num) + "/" + to_string(den);
		else return "-" + to_string(num) + "/" + to_string(den);
	}
	else
	{
		double MKD;
		if (abs(num) > abs(den))
		{
			MKD = abs(num) - abs(den);
			if (num / MKD != round(num / MKD) || den / MKD != round(den / MKD))
			{
				if (num < 0 && den < 0) return to_string(static_cast<int>(-num)) + "/" + to_string(static_cast<int>(-den));
				else if (num > 0 && den > 0) return to_string(static_cast<int>(num)) + "/" + to_string(static_cast<int>(den));
				else return "-" + to_string(static_cast<int>(abs(num))) + "/" + to_string(static_cast<int>(abs(den)));
			}
			else
			{
				if (num < 0 && den < 0) return to_string(static_cast<int>(-num / MKD)) + "/" + to_string(static_cast<int>(-den / MKD));
				else if (num > 0 && den > 0) return to_string(static_cast<int>(num / MKD)) + "/" + to_string(static_cast<int>(den / MKD));
				else return "-" + to_string(static_cast<int>(abs(num) / MKD)) + "/" + to_string(static_cast<int>(abs(den) / MKD));
			}
		}
		else
		{
			MKD = abs(den) - abs(num);
			if (num / MKD != round(num / MKD) || den / MKD != round(den / MKD))
			{
				if (num < 0 && den < 0) return to_string(static_cast<int>(-num)) + "/" + to_string(static_cast<int>(-den));
				else if (num > 0 && den > 0) return to_string(static_cast<int>(num)) + "/" + to_string(static_cast<int>(den));
				else return "-" + to_string(static_cast<int>(abs(num))) + "/" + to_string(static_cast<int>(abs(den)));
			}
			else
			{
				if (num < 0 && den < 0) return to_string(static_cast<int>(-num / MKD)) + "/" + to_string(static_cast<int>(-den / MKD));
				else if (num > 0 && den > 0) return to_string(static_cast<int>(num / MKD)) + "/" + to_string(static_cast<int>(den / MKD));
				else return "-" + to_string(static_cast<int>(abs(num) / MKD)) + "/" + to_string(static_cast<int>(abs(den) / MKD));
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
		cout << "===================" << endl;
	}
}
