#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class number
{
private:
    int value_1;
    int value_2;

public:
    number(int x, int y)
    {
        value_1 = x;
        value_2 = y;
        cout << "The value of first number is " << x << endl;
        cout << "The value of second number is " << y << endl;
    }
    friend int bigger(number ob);
};
int bigger(number ob)
{
    if (ob.value_1 > ob.value_2)
    {
        return ob.value_1;
    }
    else
    {
        return ob.value_2;
    }
}
int main()
{
    number n2(4, 5);
    int z = bigger(n2);
    cout << "The greater number is " << z << endl;
    return 0;
}