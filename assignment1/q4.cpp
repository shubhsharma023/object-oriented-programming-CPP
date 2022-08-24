#include <iostream>
int main()
{

    int i, k;
    std::cout << "Prime numbers between 0 and 300 are : " << std::endl;

    for (i = 1; i <= 300; i++)
    {
        for (k = 2; k < i; k++)
        {
            if (i % k == 0)
            {
                break;
            }
        }
        if (k == i)
        {
            std::cout << k << "\t";
        }
    }
    return 0;
}