#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class number
{
private:
    int x;
    int y;

public:
    number()
    {
        cout << "Enter the value of first number " << endl;
        cin >> x;
        cout << "Enter the value of second number " << endl;
        cin >> y;
    }
    void get_value()
    {
        cout << "The value of first number is " << x << endl;
        cout << "The value of second number is " << y << endl;
    }
    friend int sum(number ob);
};
int sum(number ob)
{
    int z = ob.x + ob.y;
    return z;
}
int main()
{
    number n;
    n.get_value();
    int add = sum(n);
    cout << " the sum of first and second number is " << add << endl;
    return 0;
}