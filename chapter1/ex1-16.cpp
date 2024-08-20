/*
    pg. 17
    19/08/2024
*/

#include <iostream>

int main()
{
    int sum = 0, value = 0;
    while (std::cin >> value)
        sum += value;

    std::cout << "The sum of the numbers is " << sum << std::endl;

    return 0;
}