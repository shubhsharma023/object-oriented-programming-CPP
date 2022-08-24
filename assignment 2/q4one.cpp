#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n3, a, m;
    cout << "write the number whose series need to be found out = ";
    cin >> m;
    for (a = 3; a <= m; a++)
    {
        n3 = n1 + n2;
        cout << n3;
        n1 = n2;
        n2 = n3;
    }
}