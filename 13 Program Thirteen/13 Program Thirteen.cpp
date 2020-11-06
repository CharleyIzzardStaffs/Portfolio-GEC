// 13 Program Thirteen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    char userStatus;
    int UserGameChoice;
    cout << "Please tell me your status with ‘s’ for student, ‘t’ for teacher or ‘o’ for other\n";
    cin >> userStatus;
    if (userStatus == 'o')
    {
        cout << "you are not entitled to a discount on any game.\n";
    }
    else if (userStatus == 's', 't')
    {
        cout << "which game would you like, 1 or 2\n";
        cin >> UserGameChoice;
        if (UserGameChoice == 1)
        {
            cout << "you get a 20% discount\n";
        }
        else if (UserGameChoice == 2)
        {
            cout << "you get a 10% discount\n";
        }
    }
    
}


