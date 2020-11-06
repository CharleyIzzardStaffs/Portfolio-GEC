// 12 Program 12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int rain = 1;
	int snow = 2;
	int userInputOne{};
	int userInputTwo{};
	cout << "press 1 for raining or 2 for snowing\n";
	cin >> userInputOne;
	if (userInputOne == rain)
	{
		cout << "What is the temp in Celsius?\n";
		cin >> userInputTwo;
		if (userInputTwo <= 15)
		{
			cout << "Wear a big coat\n";
		}
		else if (userInputTwo > 15)
		{
			cout << "Wear a light coat\n";
		}
	}
	if (userInputOne == snow)
	{
		cout << "What is the temp in Celsius?\n";
		cin >> userInputTwo;
		if (userInputTwo > 5)
		{
			cout << "Wrap up warm\n";
		}
		else if (userInputTwo >= 0)
		{
			cout << "Wrap up well or stay home\n";
		}
	}
	else if (userInputOne == !1 || !2)
	{
		cout << "it's not raining or snowing have a nice day.\n";
	}
	return 0;
}
