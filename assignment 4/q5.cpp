#include <bits/stdc++.h>
#include <vector>
using namespace std;
class distancee
{
public:
    int feet;
    float inch;
    void set(int a, float b)
    {
        feet = a;
        inch = b;
    }
    void disp()
    {
        cout << "Distance in feet and inches: " << feet << " feet" << inch << "inches " << endl;
    }
    distancee add(distancee a)
    {
        distancee temp;
        temp.feet = feet + a.feet;
        temp.inch = (inch + a.inch);
        if (temp.inch >= 12)
        {
            temp.inch = temp.inch - 12;
            temp.feet = temp.feet + 1;
        }
        return temp;
    }
};
int main()
{
    distancee one, two, three;
    one.set(5, 4);
    two.set(5, 8.1);
    three = two.add(one);
    three.disp();
}