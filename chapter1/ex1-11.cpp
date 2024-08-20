/*
    pg. 13
    19/08/2024
*/
#include <iostream>

int main()
{
    std::cout << "Please enter two numbers:" << std::endl;
    int r1 = 0, r2 = 0;
    std::cin >> r1 >> r2;

    while (r1 <= r2)
    {
        std::cout << r1 << std::endl;
        ++r1;
    }
    return 0;
}