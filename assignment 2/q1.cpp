#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Give you number to find our odd or even" << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "The number is even";
    }
    else
    {

        cout << "The number is odd";
    }

    return 0;
}
