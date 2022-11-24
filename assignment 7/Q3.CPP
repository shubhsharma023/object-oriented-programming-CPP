#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class shape
{
public:
    int x;
    int y;

public:
    shape()
    {
        cout << "enter the sides" << endl;
        cin >> x >> y;
    }
    virtual void get() = 0;
};
class rectangle : public shape
{
public:
    void get()
    {
        cout << "The are of rectangle is " << x * y << endl;
    }
};
class triangle : public shape
{
public:
    void get()
    {
        cout << "The area of triangle is " << 0.5 * x * y << endl;
    }
};
int main()
{
    shape *p1, *p2;
    rectangle r;
    p1 = &r;
    p1->get();
    triangle t;
    p2 = &t;
    p2->get();
    return 0;
}