#include <iostream>
using namespace std;
int main()
{
    float b;
    char button;
    cout << "Give your numerical input(One number) " << endl;
    cin >> b;
    cout << "WOULD YOU LIKE TO \n1. ADD 50 \n2. SUBTRACT 50" << endl;
    cin >> button;
    switch (button)
    {
    case '1':
        b += 50;
        // cout << "your value after this case will increase by : " << a += 50 << endl;
        cout << b;
        break;
    case '2':
        b -= 50;
        cout << b;
        // cout << "your value after this case will increase by : " << a -= 50 << endl;
        break;
    default:
        cout << "Bad Input!" << endl;
        break;
    }
    return 0;
}