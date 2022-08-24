#include <iostream>
using namespace std;
class complex
{
public:
    int real;
    int imag;
    complex(int x, int y)
    {
        real = x;
        imag = y;
    }
    void display()
    {
        cout << real << " + " << imag << "i";
    }
};
complex add(complex x, complex y)
{
    complex temp((x.real + y.real), (x.imag + y.imag));
    return temp;
}
complex sub(complex x, complex y)
{
    complex temp((x.real - y.real), (x.imag - y.imag));
    return temp;
}
int main()
{
    complex num1(1, 2);
    complex num2(3, 4);
    num1.display();
    cout << endl;
    add(num1, num2).display();
    cout << endl;
    sub(num1, num2).display();

    return 0;
}