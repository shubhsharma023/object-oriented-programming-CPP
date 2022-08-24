#include <iostream>
#include <math.h>
using namespace std;
int raiseto(int a, int b)
{
    int c = 1;
    for (int i = 0; i < a; i++)
    {
        c = c * b;
    }
    return c;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << raiseto(a, b);
    return 0;
}