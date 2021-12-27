// Multiplicator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float multiplicator(float a, float b)
{
    int c;
    c = a * b;
    return c;
}


int main()
{
    float c;

    c = multiplicator(5, 3);
    std::cout << c <<"\n";
    return 0;
}

