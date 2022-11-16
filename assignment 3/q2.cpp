#include <iostream>
using namespace std;
int power(int x, int y)
{
    int res = 1;
    for (int i = 0; i < y; i++)
    {
        res = res * x;
    }
    return res;
    ;
}
int main()
{
    int a, b, c;
    cout << "enter a : " << endl;
    cin >> a;
    cout << "enter b : " << endl;
    cin >> b;
    c = power(a, b);
    cout << c;
    return 0;
}
