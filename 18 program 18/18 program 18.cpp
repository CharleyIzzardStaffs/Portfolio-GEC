// 18 program 18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int smallestNumber(int a, int b);
int main()
{
    cout << "Enter two numbers." << endl;
    int a;
    int b;
    cin >> a >> b;
    smallestNumber(a,b);
}
int smallestNumber(int a, int b)
{
    if (a > b){
        cout << a << " is bigger than " << b << endl;
    }
    else if (a < b){
        cout << b << " is bigger than " << a << endl;
    }
    else if (a == b){
        cout << "both numbers are the same." << endl;
    }
    return 0;
}