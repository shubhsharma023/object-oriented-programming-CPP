#include <bits/stdc++.h>
#include <vector>
using namespace std;
class rectangle
{
    float length;
    float width;

public:
    void setlength(float x)
    {
        length = x;
    }
    void setwidth(float x)
    {
        width = x;
    }
    float perimeter()
    {
        float perimeter;
        perimeter = length + length + width + width;
        return perimeter;
    }
    float area()
    {
        float area;
        area = length * width;
        return area;
    }
    void show()
    {
        cout << "length=" << length << endl;
        cout << "width=" << width << endl;
    }
    int sameArea(rectangle a)
    {
        if (length * width == a.area())
            return 1;
        else
            return 0;
    }
};
int main()
{
    rectangle one;
    rectangle two;
    one.setlength(5);
    one.setwidth(2.5);
    two.setlength(5);
    two.setwidth(18.9);
    one.show();
    cout << "area of first triangle is :" << one.area() << endl;
    cout << "perimeter of first triangle is :" << one.perimeter() << endl;
    two.show();
    cout << "area of second triangle is :" << two.area() << endl;
    cout << "perimeter of second triangle is :" << two.perimeter() << endl;
    int check = one.sameArea(two);
    if (check == 1)
    {
        cout << "the areas of the given two rectangles are same" << endl;
    }
    else
    {
        cout << "the areas of the given two rectangles are not same" << endl;
    }
    one.setlength(15);
    one.setwidth(6.3);
    one.show();
    cout << "area of first triangle is :" << one.area() << endl;
    cout << "perimeter of first triangle is :" << one.perimeter() << endl;
    two.show();
    cout << "area of second triangle is :" << two.area() << endl;
    cout << "perimeter of second triangle is :" << two.perimeter() << endl;
    check = one.sameArea(two);
    if (check == 1)
    {
        cout << "the areas of the given two rectangles are same" << endl;
    }
    else
    {
        cout << "the areas of the given two rectangles are not same" << endl;
    }
}