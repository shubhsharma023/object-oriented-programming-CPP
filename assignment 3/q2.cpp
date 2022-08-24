#include <iostream>
using namespace std;
float power(float x, float y);
int main()
{
    float prod, a, b;
    cout << "Write the first number" << endl;
    cin >> a;
    cout << "Write exponential" << endl;
    cin >> b;
    prod = power(a, b);
    cout << "The value is : \n"
         << prod << endl;
    return 0;
}
float power(float a, float b)
{
}