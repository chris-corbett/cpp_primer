/*
    pg. 22
    20/08/2024
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;

    while (std::cin >> item)
    {
        std::cout << item << std::endl;
    }

    return 0;
}