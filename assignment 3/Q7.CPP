#include <iostream>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
typedef Student ss;
int main()
{
    cout << "enter the number of students ";
    int n;
    cin >> n;
    ss arr[n];
    cout << "enter the details" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }
    cout << "The details of Students entered are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
}
