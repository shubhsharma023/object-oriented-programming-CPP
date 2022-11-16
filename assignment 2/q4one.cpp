#include <iostream>
using namespace std;
int main()
{
    int n1 = 1;
    int n2 = 1;
    int n;
    cin >> n;
    cout << n1 << " " << n2;
    for (int i = 3; i <= n; i++)
    {
        int n3 = n1 + n2;
        cout << " " << n3;
        n1 = n2;
        n2 = n3;
    }
    cout << endl;
    int N1 = 1;
    int N2 = 1;
    cout << N1 << " " << N2;
    while (n != 2)
    {
        int N3 = N1 + N2;
        cout << " " << N3;
        N1 = N2;
        N2 = N3;
        n--;
    }

    return 0;
}
