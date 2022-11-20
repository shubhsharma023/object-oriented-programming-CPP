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
    friend void add(X, Y);
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
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "Summing data of X and Y objects gives me " << o1.data + o2.num;
}
int main()
{
    X a;
    a.setValue(5);
    a.displaY();
    Y b;
    b.setValue(6);
    b.displaY();
    add(a, b);
}