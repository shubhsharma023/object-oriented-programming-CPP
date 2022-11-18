#include <iostream>
using namespace std;
class depositor
{
private:
    char name[30];
    int accNo;
    char type[30];
    int bal;
    int deposit;
    int withdrawn;

public:
    void getDetails();
    void depositamt();
    void withdraw();
    void display();
};
void depositor::getDetails()
{
    cout << "Enter name of the depositor: ";
    cin >> name;
    cout << "Enter Account number: ";
    cin >> accNo;
    cout << "Enter type of account: ";
    cin >> type;
    cout << "Enter account balance: ";
    cin >> bal;
}
void depositor::depositamt()
{
    cout << "Enter the amount to deposit: ";
    cin >> deposit;
    bal += deposit;
    cout << "Current balance now is : " << bal << endl;
}
void depositor::withdraw()
{
    cout << "Balance available to withdraw : " << bal << endl;
    cout << "Enter the amount to withdraw :";
    cin >> withdrawn;
    if (withdrawn > bal)
    {
        cout << "Amount greater than balance, Please retry" << endl;
        withdraw();
    }
    else
    {
        cout << "Amount Withdrawn" << endl;
        bal = bal - withdrawn;
        cout << "Current Balance is: " << bal << endl;
    }
}
void depositor::display()
{
    cout << "Name : " << name << endl;
    cout << "Balance : " << bal << endl;
}
int main()
{
    depositor dip;
    dip.getDetails();
    dip.depositamt();
    dip.withdraw();
    dip.display();
}