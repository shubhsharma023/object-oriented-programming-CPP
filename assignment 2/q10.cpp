#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    cout << "Write the word you want to copy : " << endl;
    string name;
    cin >> name;
    string duplicate = "";
    for (int i = 0; i < name.length(); i++)
    {
        duplicate[i] = name[i];
    }
    cout << duplicate;
    return 0;
}