/*
    pg. 22
    20/08/2024
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item sum, item;
    if (std::cin >> sum)
    {
        while (std::cin >> item)
        {
            sum += item;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}