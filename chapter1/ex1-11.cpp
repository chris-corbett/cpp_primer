/*
    Exercise 1.11: Write a program that prompts the user for two integers.
    Print each number in the range specified by those two integers.

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