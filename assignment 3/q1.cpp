#include <iostream>
using namespace std;
float multiply(float a, float b);
int main()
{
    float prod, x, y;
    cout << "Write the first number" << endl;
    cin >> x;
    cout << "Write the second number" << endl;
    cin >> y;
    prod = multiply(x, y);
    cout << "The product is : \n"
         << prod << endl;
    return 0;
}
float multiply(float x, float y)
{
    return (x * y);
}