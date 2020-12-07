// 19 program Nineteen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void outputResults(int, int, int, int);
int main()
{
    cout << "please enter 10 numbers" << endl;
    int a;
    int b;
    int c;
    int d;
    int e; 
    int f;
    int g;
    int h;
    int i;
    int j;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i>> j;
    if (a % 2 == 0)
    {
        cout << "is even" << endl;
    }
    else
        outputResults(a,a++,NULL,NULL);
}
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
    cout << "num of odd: " << numOfOdd << endl << "odd total: " << oddTotal << endl << "num of even: " << numOfEven << endl << "even total: " << evenTotal << endl;
}
