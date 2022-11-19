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
        for (int i = 1; i <= 6; i++)
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
        for (int i = 1; i <= 6; i++)
        {
            cout << marks[i] << " marks in subject " << (i) << endl;
        }
    }
};
int main()
{
    student s1;
    s1.set_data();
    s1.displaY();
    return 0;
}