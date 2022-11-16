#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int imag;
    complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }
    complex operator+(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
    complex operator-(complex c)
    {
        complex temp;
        temp.real = real - c.real;
        temp.imag = imag - c.imag;
        return temp;
    }
};
int main()
{
    complex c1(4, 6);
    complex c2(7, 3);
    complex c3;
    complex c4;
    c3 = c1 + c2;
    c4 = c1 - c2;
    cout << c3.real << "+i" << c3.imag << endl;
    cout << c4.real << "+i" << c4.imag << endl;

    return 0;
}
