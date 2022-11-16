#include <iostream>
using namespace std;

int swap(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
}
int main()
{
    int a, b;
    cout << "Enter the value of a : " << endl;
    cin >> a;
    cout << "A = " << a << endl;
    cout << "Enter the value of b : " << endl;
    cin >> b;
    cout << "B = " << b << endl;

    swap(a, b);
    cout << "After swap" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}
