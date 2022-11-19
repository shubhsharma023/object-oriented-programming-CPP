#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class student
{
private:
    char name[10];
    int roll_no;
    int marks[6];

public:
    void set_data()
    {
        cout << "name of the student is";
        cin >> name;
        cout << "roll number of the student is ";
        cin >> roll_no;
        for (int i = 1; i <= 2; i++)
        {
            cout << "marks in subject " << i << " is ";
            ;
            cin >> marks[i];
            cout << endl;
        }
    }
    void displaY()
    {
        cout << name << " having roll number " << roll_no << " is having " << endl;
        for (int i = 1; i < 2; i++)
        {
            cout << marks[i] << " marks in subject " << (i + 1) << endl;
        }
    }
};
int main()
{
    student s[10];
    for (int i = 0; i < 10; i++)
    {
        s[i + 1].set_data();
        s[i].displaY();
        cout << endl;
    }
    return 0;
}