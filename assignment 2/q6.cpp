#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "write out total number of elements in array ";
    cin >> n;
    int arr[n];
    cout << "write out elements of the array you want to sort in ascending order : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}