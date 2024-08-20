/*
    Exercise 1.10: In addition to the ++ operator that adds 1 to its operand,
    there is a decrement operator (--) that subtracts 1.
    Use the decrement operator to write a while that prints the numbers from ten down to zero.

    19/08/2024
*/

#include <iostream>

int main()
{
    int val = 10;
    while (val > 0)
    {
        std::cout << val << std::endl;
        --val;
    }

    return 0;
}