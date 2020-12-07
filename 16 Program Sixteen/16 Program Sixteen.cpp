// 16 Program Sixteen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int playerLife = 100;
    cout << "You have " << playerLife << " life\n";
	int damageThisRound;
	for (int i = 1; i < 11; i++)
	{	
		cout << "question " << i << ": how much damage shall I deal?\n";
		cin >> damageThisRound;
		(playerLife -= damageThisRound);
		cout << "You have " << playerLife << " Life left.\n";
		if (playerLife <= 0)
		{
			cout << "Ended early. Player died.\n";
			break;
		}	
		if (i == 10)
		{
			cout << "all questions asked, played survived!\n";
			break;
		}
	}
}

