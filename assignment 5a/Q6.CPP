#include <iostream>
using namespace std;
class Y;
class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    void displaY()
    {
        cout << "the value of number stored in class X is " << data << endl;
    }
    friend void big(X, Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    void displaY()
    {
        cout << "the value of number stored in class Y is " << num << endl;
    }
    friend void big(X, Y);
};
void big(X o1, Y o2)
{
    if (o1.data > o2.num)
    {
        cout << "The number greater is " << o1.data << endl;
    }
    else
    {
        cout << "the number greater is " << o2.num << endl;
    }
}
int main()
{
    X a;
    a.setValue(5);
    a.displaY();
    Y b;
    b.setValue(6);
    b.displaY();
    big(a, b);
}