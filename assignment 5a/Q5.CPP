#include <iostream>
#include <string>
#include <list>
#include <vector>
#include <map>
using namespace std;
class Distance
{
private:
    int meter;

public:
    Distance()
    {
        int meter = 0;
    }
    friend int addfive(Distance);
};
int addfive(Distance d)
{
    d.meter += 5;
    return d.meter;
}
int main()
{
    Distance m;
    int y = addfive(m);
    cout << "the distance is " << y << endl;
    return 0;
}