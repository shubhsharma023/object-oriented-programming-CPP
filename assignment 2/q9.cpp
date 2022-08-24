#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    cout << "Write the name in lower case and get the result in upper case :" << endl;
    string name;
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] >= 97 && name[i] <= 122)
        {
            name[i] = name[i] - 32;
        }
    }
    cout << name;

    return 0;
}