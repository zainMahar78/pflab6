#include <iostream>
using namespace std;
float discount(string d, string m, float t);
main()
{
	string day;
	string month;
	float totalAmount;
	cout << "Enter Purchase Day: ";
	cin >> day;
	cout << "Enter Purchase Month: ";
	cin >> month;
	cout << "Enter Purchase Amount: ";
	cin >> totalAmount;
	float result = discount(day, month, totalAmount);
	cout << "Payable Amount after discount: " << result;
}
float discount(string d, string m, float t)
{
	float payable=t;
	if (d == "Sunday" && m == "October")
	{
		payable = t - (t * 10 / 100);
	}
	if	(d == "Sunday" && m != "October")
		{
			payable = t - (t * 5 / 100);
		}
	return payable;
}