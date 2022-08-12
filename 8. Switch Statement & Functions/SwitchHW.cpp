// EXIT FROM A INFINITE LOOP WITHOUT USING A BREAK FUNCTION

#include <iostream>

using namespace std;

int main()
{

    while (1)
    {

        switch (1)
        {
        case 1:
            cout << "In Switch" << endl;
            break;
        }
        cout << "In Loop" << endl;
        exit(0);
    }
}