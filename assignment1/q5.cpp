#include <iostream>
using namespace std;
class thermometer
{
private:
    float c;

public:
    void initial()
    {
        cout << "Hello! Give your input in celsius and have the output in fahrenheit :" << endl;
        cin >> c;
    }
    void thermo()
    {
        cout << "Your temperature in fahrenheit is :\n"
             << (9 * c / 5) + 32 << " Degree fahrenheit" << endl;
    }
};
int main()
{
    thermometer t;
    t.initial();
    t.thermo();
    return 0;
}