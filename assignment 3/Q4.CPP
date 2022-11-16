#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "SUM = " << sum;
}
int main()
{
    int n;
    cout << "Enter the no. of elements of the array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sum(arr, n);
    return 0;
}
