#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "write out size of array ";
    cin >> n;
    int arr[n];
    cout << "write out elements of the array ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    cout << "lagrest element of array is " << max;
    return 0;
}