#include <iostream>

using namespace std;

int countBit(int n)
{
    int count = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{

    int a, b;
    cin >> a >> b;

    cout << "Total one in the Bit: " << countBit(a) + countBit(b) << endl;
}