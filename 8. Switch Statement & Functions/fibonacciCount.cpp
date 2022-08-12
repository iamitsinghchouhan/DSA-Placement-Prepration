#include <iostream>

using namespace std;

int fibo(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 1; i <= n; i++)
    {
        int nextNumber = a + b;
        a = b;
        b = nextNumber;
    }
    return b;
}

int main()
{

    int n;
    cin >> n;
    cout << fibo(n) << endl;
}