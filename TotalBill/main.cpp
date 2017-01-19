#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int items;
	double price;
	cout << "Please enter the number of items bought: ";
	cin >> items;
	while (items <= 0)
	{
		cout << "number of items invalid. Must be above 0: $";
		cin >> items;
	}
	cout << "Please input the price of each item: $";
	cin >> price;
	while (price < 0.0)
	{
		cout << "price entered is invalid. It must be a possitive value: $";
		cin >> price;
	}
	cout << "The total bill is $" << setprecision(2) << fixed << showpoint << items * price << '\n' ;
	system("pause");
	return 0;
}