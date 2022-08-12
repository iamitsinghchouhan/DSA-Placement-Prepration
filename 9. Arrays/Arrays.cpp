#include <iostream>

using namespace std;

int main()
{
    // declare
    int number[15];

    // accessing the array
    cout << "value at 9 index" << number[8] << endl;

    // initialising an array
    int second[3] = {5, 7, 11};

    // assessing the element of the array
    cout << "value at 2 index " << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    for (int i = 0; i <= n; i++)
    {
        cout << third[i] << " ";
    }
    cout << endl;

    int fourth[10] = {0};
    n = 10;
    for (int i = 0; i <= n; i++)
    {
        cout << fourth[i] << " ";
    }
    cout << endl;

    // initialising all locations with 1 [not posible with below line]
    int fifth[10] = {1};
    n = 10;
    for (int i = 0; i <= n; i++)
    {
        cout << fifth[i] << " ";
    }

    cout << endl;
}