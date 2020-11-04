// ProgramFour.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int cost;

	enum carMake
	{
		ford = 1,
		fiat,
		tesla,
		VW,
		BMW,
		AstonMarten,
		Honda,
		NIssan,
		Toyota,
		Audi,
		Jaguar,
		Dodge
	};
	carMake Car = Honda;
	cost = 13000;
	cout << "The cost of my car is: " << cost << " & my car ID is: " << Car << endl;
}

