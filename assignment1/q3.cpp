#include <iostream>
class calculator
{
private:
    float a;
    float b;
    char button;

public:
    void initial()
    {
        std::cout << "This calculator can\n 1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n Inputs are 1, 2, 3 & 4" << std::endl;
    }
    void operations()
    {
        std::cin >>
            button;
        switch (button)
        {
        case '1':
            std::cout << "Enter the numbers to be Added" << std::endl;
            std::cin >> a >> b;
            std::cout << "The Result is = " << a + b << std::endl;
            break;
        case '2':
            std::cout << "Enter the numbers to be Subtracted" << std::endl;
            std::cin >> a >> b;
            std::cout << "The Result is = " << a - b << std::endl;
            break;
        case '3':
            std::cout << "Enter the numbers to be Multiplied" << std::endl;
            std::cin >> a >> b;
            std::cout << "The Result is = " << a * b << std::endl;
            break;
        case '4':
            std::cout << "Enter the numbers to be Divided" << std::endl;
            std::cin >> a >> b;
            std::cout << "The Result is = " << a / b << std::endl;
            break;
        default:
            std::cout << "Wrong input" << std::endl;
            break;
        }
    }
};
int main()
{
    class calculator cal;
    cal.initial();
    cal.operations();
    return 0;
}