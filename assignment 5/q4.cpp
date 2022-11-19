#include <iostream>
using namespace std;
void increase()
{
    static int num = 0;
    cout << ++num << endl;
}
int main()
{
    increase();
    increase();
    return 0;
}