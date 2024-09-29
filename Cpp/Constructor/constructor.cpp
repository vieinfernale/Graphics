#include <iostream>
#include <stdio.h>
#include <math.h>

/* Constructors can optionally take a member initializer list : it's a more efficient way to initialize class members than assigning values in the constructor body. */
/* The Member Initializer List leaves the Constructor body empty "{}" */
/* const members and members of reference type must be initialized in the member initializer list */

struct point {

    int x, y;

    point (int a, int b) : x(a), y(b) {} /* Initializer List - initialization */

    // point () {} /* Default Constructor */
    // point () = default;
    // point () = delete;
    // point (int a, int b ) { x = a; y = b; } /* Constructor - assignment */
};

long long exp(int x, int y) { //pow(x, y)
    int k = x;
    for(int i = 0; i < y-1; i++){
        x = x * k;
    }
    return x;
}

float magnitude(point pi, point pii) { 
        return sqrt( exp((pi.x - pii.x), 2) + exp((pi.y - pii.y), 2) ); 
}

int main() {

    point pi(1,2);
    std::cout << pi.x << " " << pi.y << std::endl;

    point pii(6,7);
    std::cout << pii.x << " " << pii.y << std::endl;

    std::cout << magnitude(pi, pii) << std::endl;
    printf("%.2f \n", magnitude(pi, pii));
}