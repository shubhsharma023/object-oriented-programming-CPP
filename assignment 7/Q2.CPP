#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class student
{
protected:
    char name[100];
    int roll_number;

public:
    student()
    {
        cout << "enter name" << endl;
        cin >> name;
        cout << "enter roll number" << endl;
        cin >> roll_number;
    }
};
class exam : public student
{
protected:
    int marks[5];

public:
    exam()
    {
        cout << "enter marks" << endl;
        for (int i = 0; i < 5; i++)
        {
            cout << "enter marks of subject " << i + 1;
            cin >> marks[i];
        }
    }
    int percentage = ((marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5) * 100;
    int total = marks[0] + marks[1] + marks[2] + marks[3] + marks[4];
};
class result : public exam
{
public:
    result()
    {
        cout << "name: " << name << endl;
        cout << "roll_number: " << roll_number << endl;
        cout << "total marks obtained : " << total << "/500 with percentage " << percentage << endl;
    }
};
int main()
{
    result r;
    return 0;
}