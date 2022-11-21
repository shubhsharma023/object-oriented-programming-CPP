#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }
    void show()
    {
        cout << "The complex number is " << real << "+" << img << "i" << endl;
    }
    friend complex add(complex c1, complex c2);
};
complex add(complex c1, complex c2)
{
    complex temp(c1.real + c2.real, c1.img + c2.img);
    return temp;
}
int main()
{
    complex c1(2, 3), c2(4, 5), c3(0, 0);
    c3 = add(c1, c2);
    c3.show();
    return 0;
}