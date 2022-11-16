#include <iostream>
using namespace std;
class Date
{
public:
    int day;
    int month;
    int year;

    Date(int a, int b, int c)
    {
        this->day = a;
        this->month = b;
        this->year = c;
    }
};
bool inArray(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return true;
        }
    }
    return false;
}
bool validDate(int a, int b, int c)
{
    int month_31[] = {1, 3, 5, 7, 8, 10, 12};
    if (a > 31 || a < 1 || b > 12 || b < 1 || c < 1)
    {
        return false;
    }
    else
    {
        if (b != 2)
        {
            if (a == 31)
            {
                if (!inArray(month_31, 7, b))
                {
                    return false;
                }
            }
        }
        else
        {
            if (a > 29)
            {
                return false;
            }
            else if (a == 29)
            {
                if (c % 4 != 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int main()
{
    cout << "enter the day, month and year ";
    int a, b, c;
    cin >> a >> b >> c;
    Date s = Date(a, b, c);
    cout << "the date enterd is " << s.day << " / " << s.month << " / " << s.year << endl;
    (validDate(s.day, s.month, s.year)) ? cout << "It is a valid date" : cout << "It is an invalid date";
}
