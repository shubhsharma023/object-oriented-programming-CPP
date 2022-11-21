#include <iostream>
using namespace std;
class counter
{
    int count;

public:
    counter()
    {
        count = 0;
    }
    void show()
    {
        cout << "The count is " << count << endl;
    }
    void operator++()
    {
        count++;
    }
};
int main()
{
    counter c1;
    c1.show();
    ++c1;
    c1.show();
    return 0;
}