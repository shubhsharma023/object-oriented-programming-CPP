#include <iostream>
class operations
{
private:
    float a;
    float b;
    char button;

public:
    void initial()
    {
        std::cout << "GIVE YOUR INPUTS (2 NUMBERS) " << std::endl;
        std::cin >> a;
        std::cin >> b;
        std::cout << "WHAT ARITHMETIC OPERATION YOU WANT TO PERFORM? \n1.ADD\n2.SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n(Inputs are 1, 2, 3 only) " << std::endl;
    }
    void input()
    {

        std::cin >> button;
        switch (button)
        {
        case '1':
            std::cout << a + b << std::endl;

            break;
        case '2':
            std::cout << a - b << std::endl;

            break;
        case '3':
            std::cout << a * b << std::endl;

            break;
        case '4':
            std::cout << a / b << std::endl;

            break;
        default:
            std::cout << "Wrong input" << std::endl;
            break;
        }
    }
};
int main()
{
    operations o;
    o.initial();
    o.input();
}