#include <iostream>
#include <string>
using namespace std;
class stringg
{
    char *s;
    int len;

public:
    stringg()
    {
        s = new char[1];
        s[0] = '\0';
        len = 0;
    }
    stringg(char *s)
    {
        len = strlen(s);
        this->s = new char[len + 1];
        strcpy(this->s, s);
    }
    void show()
    {
        cout << s << endl;
    }
    stringg operator+(stringg s2)
    {
        stringg temp;
        temp.len = len + s2.len;
        temp.s = new char[temp.len + 1];
        strcpy(temp.s, s);
        strcat(temp.s, s2.s);
        return temp;
    }
    bool operator==(stringg s2)
    {
        if (strcmp(s, s2.s) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stringg s1("Hello");
    stringg s2("World");
    stringg s3;
    s3 = s1 + s2;
    s3.show();
    if (s1 == s2)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not equal" << endl;
    }
    return 0;
}
