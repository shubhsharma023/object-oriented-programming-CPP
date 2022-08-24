#include <iostream>
class operations
{
private:
    int a;
    float b;
    char c;
    char button;

public:
    void initial()
    {
        std::cout << "WHAT YOU WANT TO DISPLAY?\n1.Integer\n2.decimal\n3.Character\n(Inputs are 1, 2, 3 only) " << std::endl;
    }
    void input()
    {
        std::cin >>
            button;
        switch (button)
        {
        case '1':
            std::cout << "give your input" << std::endl;
            if (std::cin >> a)
            {

                std::cout << "so your output is\n"
                          << a << std::endl;
            }
            else if (std::cin >> b, c)
            {
                std::cout << "Wrong Input" << std::endl;
            }
            break;
        case '2':
            std::cout << "give your input" << std::endl;
            if (std::cin >> b)
            {

                std::cout << "so your output is\n"
                          << b << std::endl;
            }
            else if (std::cin >> a, c)
            {
                std::cout << "Wrong Input" << std::endl;
            }
            break;
        case '3':
            std::cout << "give your input" << std::endl;
            if (std::cin >> c)
            {

                std::cout << "so your output is\n"
                          << c << std::endl;
            }
            else if (std::cin >> b, a)
            {
                std::cout << "Wrong Input" << std::endl;
            }
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