#include <iostream>
using namespace std;
int main()
{
    int i, j, sum, n, m, arr[m][n];

    cout << "write out the dimension of the 2D array" << endl;
    cout << "i = ";
    cin >> i;
    cout << "j = ";
    cin >> j;
    for (n = 0; n < i; n++)
    {
        for (m = 0; m < j; m++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Matrix is:\t";
    for (n = 0; n < i; n++)
    {
        for (m = 0; m < j; m++)
        {
            cout << arr[i][j] << "";
        }
        cout << "\n";
    }
    return 0;
}