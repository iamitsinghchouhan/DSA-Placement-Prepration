#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        int count = j + i - 1;
        while (j <= n - i + 1)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
}