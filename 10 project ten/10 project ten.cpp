// 10 project ten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
int main()
{
    int Haribo = 40;
    int Students = 14;
    int hariboPerStudent = (Haribo / Students);
    int hariboForTutor = (Haribo % Students);
    cout << "Haribo for students: " << hariboPerStudent << endl;
    cout << "Haribo for tutor: " << hariboForTutor << endl;
}
