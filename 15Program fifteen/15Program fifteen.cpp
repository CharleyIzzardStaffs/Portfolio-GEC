// 15Program fifteen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "enter a number between 1 and 10.\n";
    char star = '*';
    int input;
    /*char playAgain;*/
    cin >> input;
    for (int i = 0; i < input + 1; i++)
    {
        cout << endl;
        for (int j = 0; j < i; j++)
        {
            cout << star;
        }
    }
}
