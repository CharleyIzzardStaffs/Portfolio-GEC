// 21 program 21.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "Enter some intergers.\n";
    int myNumbers[10] = { };
    for (int i = 0; i < 10; i++)
        cin >> myNumbers[i];

    int smallestNumber = myNumbers[9];
    for (int i = 0; i < 10; i++)
    {
        if (smallestNumber > myNumbers[i])
        {
            smallestNumber = myNumbers[i];
        }
    }
    cout << "the smallest number is: " << smallestNumber << endl;
}


