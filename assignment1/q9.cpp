#include <iostream>
using namespace std;
class operations
{
private:
    float days;

public:
    void initial()
    {
        std::cout << "Hello! Kindly place your book in position, and write the days of late submission :" << std::endl;
        std::cin >> days;
    }
    void input()
    {
        if (days <= 5)
        {
            cout << "Thank You for your submission. Your fine is rupee " << days * .50 << endl;
        }
        else if (days > 5 && days <= 10)
        {
            cout << "Thank You for your submission. Your fine is rupee " << days * 1 << endl;
        }
        else if (days > 10 && days <= 30)
        {
            cout << "Thank You for your submission. Your fine is rupee " << days * 5 << endl;
        }
        else if (days > 30)
        {
            cout << "Dear customer your membership has been cancelled due to late submission. Your fine is rupee " << days * 5 << endl;
        }
    }
};
int main()
{
    operations o;
    o.initial();
    o.input();
    return 0;
}