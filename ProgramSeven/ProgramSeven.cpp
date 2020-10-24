// ProgramSeven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    //std::cout << "Hello World!\n";
    float Fahrenheit = 95.0f;
    float Celcius = (Fahrenheit - 32)*0.5556;
    std::cout << Fahrenheit << "F is equal to " << Celcius << "C.\n";
}

