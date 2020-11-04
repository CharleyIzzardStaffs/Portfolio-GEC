#include <iostream>
using namespace std;
int main()
{
	std::cout << "Please choose an option\n" << "1) Sunny\n" << "2) Cloudy\n" << "3) Raining\n" << "4) Exit\n";
	int weather_report{};
	cin >> weather_report;
	switch (weather_report)
	{
	case 1:
		cout << "Don't wear coat\n";
		break;
	case 2:
		cout << "Do wear coat\n";
		break;
	case 3:
		cout << "Wear a big coat\n";
		break;
	case 4:
		cout << "Goodbye!\n";
		break;
	default:
		cout << "Please choose a real option.\n";
		break;
	}
}
