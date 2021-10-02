

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

//int CountDecimal(double num, double den)
//{
//	string numer = to_string(num);
//	string denon = to_string(den);
//	int nonDecimalPartLength1;
//	int nonDecimalPartLength2;
//	int result1;
//	int result2;
//	for (int i = 0; i < numer.length(); i++)
//	{
//		if (numer[i] == '.')
//		{
//			nonDecimalPartLength1 = i;
//		}
//	}
//	result1 = numer.length() - nonDecimalPartLength1 - 1;
//	for (int i = 0; i < denon.length(); i++)
//	{
//		if (denon[i] == '.')
//		{
//			nonDecimalPartLength2 = i;
//		}
//	}
//	result2 = numer.length() - nonDecimalPartLength2 - 1;
//	if (result1 == result2)
//	{
//		return result1;
//	}
//	else {
//		fmax(result1, result2);
//	}
//}
string simplification(double num, double den)
{
	if (num / den == round(num / den))
	{
		return to_string(static_cast<int>(num / den));
	}
	else if (num != round(num) || den != round(den))
	{
		return to_string(num / den) + "(~" + to_string(round(num / den)) + ")";
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
		if (y == 0)
		{
			cout << "The value of y mustn't be 0" << endl;
			cout << "===================" << endl;
		}
		else
		{
			cout << x << "/" << y << " = " << simplification(x, y) << endl;
			cout << "===================" << endl;
		}
	}
}
