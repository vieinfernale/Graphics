#include <iostream>

int main()
{
    int x = 0;
    int* pointer;
 
    pointer = &x; /* pointer = address of x = &x; *pointer = value of x */

    std::cout << x << std::endl;
    std::cout << pointer << std::endl;
    std::cout << *pointer << std::endl;

    x = 1;

    std::cout << x << std::endl;
    std::cout << pointer << std::endl;
    std::cout << *pointer << std::endl;

}