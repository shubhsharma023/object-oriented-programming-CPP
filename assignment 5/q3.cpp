#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class Employee
{
    int id;
    char name[30];
    int age;

public:
    void getdata(); // Declaration of function
    void putdata(); // Declaration of function
};
void Employee::getdata()
{ // Defining of function
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
    cout << "enter age : ";
    cin >> age;
}
void Employee::putdata()
{
    // Defining of function
    cout << id << " ";
    cout << name << " ";
    cout << age << " ";
    cout << endl;
}
int main()
{
    Employee emp[4]; // One member
    for (int i = 0; i < 5; i++)
    {
        emp[i].getdata(); // Accessing the function
        emp[i].putdata(); // Accessing the function
    }
    return 0;
}