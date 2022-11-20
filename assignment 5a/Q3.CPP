#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class student
{
private:
    char name[14];
    int roll;
    char branch[10];

public:
    student()
    {
        cout << "name of the student is " << endl;
        cin >> name;
        cout << endl
             << "roll number of the student is " << endl;
        cin >> roll;
        cout << endl
             << "branch of the student is " << endl;
        cin >> branch;
        cout << endl;
    }
    friend void disp(student ob)
    {
        cout << ob.name << endl;
        cout << ob.roll << endl;
        cout << ob.branch << endl;
    }
};
int main()
{
    student s1;
    disp(s1);
    return 0;
}