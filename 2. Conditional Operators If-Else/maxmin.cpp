#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Enter The Numbers" << endl;
    cin >> n1 >> n2;

    int max, min;

    if (n1 > n2)
    {
        max = n1;
        min = n2;
    }
    else
    {
        max = n2;
        min = n1;
    }
    cout << "MAX=" << max << endl;
    cout << "MIN=" << min << endl;

    return 0;
}
