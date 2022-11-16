#include <iostream>
using namespace std;
int main()
{
    long fact = 1;
    int n, m = 1;
    cout << "Enter the number whose factorial needs to be found out = ";
    cin >> n;
    while (m <= n)
    {
        fact *= m;
        m++;
    }
    cout << "Factorial of " << n << " is = " << fact;

    while (n <= 0)

        cout << "Error no output" << endl;
}