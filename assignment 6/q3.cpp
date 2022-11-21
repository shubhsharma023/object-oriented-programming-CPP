// Write a C++ program to compute area of right angle triangle, equilateral
// triangle, isosceles triangle using function overloading concept
#include <iostream>
#include <math.h>

using namespace std;
class triangle
{
    float a, b, c;

public:
    triangle(float a, float b, float c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
    float area()
    {
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    float area(float a, float b)
    {
        return (a * b) / 2;
    }
    float area(float a)
    {
        return (a * a * sqrt(3)) / 4;
    }
};
int main()
{
    float a, b, c;
    cout << "Enter the sides of the triangle" << endl;
    cin >> a >> b >> c;
    triangle t(a, b, c);
    cout << "The area of the triangle is " << t.area() << endl;
    cout << "Enter the base and height of the triangle" << endl;
    cin >> a >> b;
    cout << "The area of the triangle is " << t.area(a, b) << endl;
    cout << "Enter the side of the triangle" << endl;
    cin >> a;
    cout << "The area of the triangle is " << t.area(a) << endl;
    return 0;
}