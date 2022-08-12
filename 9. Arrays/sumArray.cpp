#include <iostream>

using namespace std;

int sumArray(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{

    int size;

    cin >> size;

    int num[100];
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Sum of all the element in the array is " << sumArray(num, size) << endl;
}