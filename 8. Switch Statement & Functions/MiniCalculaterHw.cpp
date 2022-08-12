#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cout << "WELCOME TO THE MINI - CLACULATER " << endl;
    cout << "ENTER THE VALUE OF A " << endl;
    cin >> a;
    cout << "ENTER THE VALUE OF B" << endl;
    cin >> b;

    char op;
    cout << "ENTER THE OPERATION YOU WANT TO PERFORM" << endl;
    cin >> op;

    switch (op)
    {

    case '+':
        cout << (a + b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    case '*':
        cout << (a * b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;

    case '%':
        cout << (a % b) << endl;
        break;

    default:
        cout << "PLEASE ENTER A VALID OPERATION" << endl;
    }
}
