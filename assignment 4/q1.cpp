#include <iostream>
using namespace std;
class student
{
private:
    char name[30];
    int
        rollNo;
    int total;
    float per = total / 600 * 100;

public:
    void getDetails();
    void putDetails();
};
void student::getDetails()
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks out of 600: ";
    cin >> total;
    per = (float)total / 600 * 100;
}
void student::putDetails()
{
    cout << "Student details:\n";
    cout << "Name:"
         << name << ", \nRoll Number:"
         << rollNo << ", \nTotal:" << total << ", \nPercentage:" << per;
}
int main()
{
    student std;
    std.getDetails();
    std.putDetails();
}