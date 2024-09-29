#include <iostream>

void f(int& a){ // Reference
    a = a + 1;
}

void fII(int b){ // Value
    b = b + 1;
}

int main()
{
    /* When a variable is passed by reference we are not passing a copy of its value, 
    but we are somehow passing the variable itself to the function and any modification that we do to the local variables of the function 
    will translate to the initial variables passed as arguments in the call to the function. */

    /* &x = address of x */

    int x = 1;
    f(x);
    std::cout << x << std::endl;

    int y = 1;
    fII(y);
    std::cout << y << std::endl;
}