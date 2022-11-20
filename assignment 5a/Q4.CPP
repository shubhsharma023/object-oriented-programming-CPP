#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class Swap
{
private:
    int a;
    int b;
    int temp;

public:
    Swap(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    friend void swap(Swap &);
};
void swap(Swap &s1)
{
    cout << "Before swapping x and x are " << s1.a << " and " << s1.b << " respectively " << endl;
    s1.temp = s1.a;
    s1.a = s1.b;
    s1.b = s1.temp;
    cout << "After swapping x and x are " << s1.a << " and " << s1.b << " respectively  " << endl;
}
int main()
{
    Swap s(9, 50);
    swap(s);
    return 0;
}