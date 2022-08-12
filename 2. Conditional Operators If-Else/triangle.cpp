#include <iostream>

using namespace std;

int main()
{
    int sideA, sideB, sideC;
    cout << "Enter the value of three sides of the triangle" << endl;
    cin >> sideA >> sideB >> sideC;
    if (sideA == sideB && sideB == sideC)
    {
        cout << "This is an Equilateral Triangle" << endl;
    }

    else if (sideA == sideB || sideA == sideC || sideB == sideC)
    {
        cout << "This is an isosceles trianglle" << endl;
    }

    else
    {
        cout << "This is an scalene Triangle" << endl;
    }
    return 0;
}