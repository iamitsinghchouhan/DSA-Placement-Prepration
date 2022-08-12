#include <iostream>

using namespace std;

void printCounnting(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{

    int n;

    cin >> n;

    printCounnting(n);

    return 0;
}