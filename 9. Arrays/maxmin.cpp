#include <iostream>

using namespace std;

int getMax(int num[], int n)
{
    int max = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n)
{

    int min = INT32_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
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

    cout << "Minimun number from the array is " << getMin(num, size) << endl;
    cout << "Maximun number from the array is " << getMax(num, size) << endl;
}