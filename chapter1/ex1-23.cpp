/*
    pg. 24
    20/08/2024
*/

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item current, item;
    int count = 1;

    if (std::cin >> current)
    {
        while (std::cin >> item)
        {
            if (current.isbn() == item.isbn())
            {
                ++count;
            }
            else
            {
                std::cout << current.isbn() << " occurs " << count << " times!" << std::endl;
                current = item;
                count = 1;
            }
        }
        std::cout << current.isbn() << " occurs " << count << " times!" << std::endl;
    }

    return 0;
}