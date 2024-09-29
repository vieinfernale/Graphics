#include <iostream>

/* Recursivity is the property that functions have to be called by themselves. */

long long n (int x) 
{
    if (x > 1)
        return (x * n (x-1));
    else
        return (1);
};

int main() {
    int x = 10;
    std::cout << n(x);
}