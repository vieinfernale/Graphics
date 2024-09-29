#include <iostream>

/* The operator keyword declares a function specifying what operator-symbol means when applied to instances of a class. This gives 
    the operator more than one meaning, or "overloads" it. The compiler distinguishes between the different meanings of an operator by 
    examining the types of its operands. Overloaded operators are implemented as functions. */

// type(builtin, struct, class) operator operator-symbol ( parameter-list ) { return modified operator function }

struct Complex {
   double re, im;
   Complex( double r, double i ) : re(r), im(i) {} /* Member Initialized List */
   Complex operator+( Complex &other );
   void Display( ) {   std::cout << re << ", " << im << std::endl; }
};

// Operator overloaded using a member function
Complex Complex::operator+( Complex &other ) {
   return Complex( re + other.re, im + other.im );
}

int main() {
   Complex a = Complex( 1.2, 3.4 );
   Complex b = Complex( 5.6, 7.8 );
   Complex c = Complex( 0.0, 0.0 );

   c = a + b;
   c.Display();
}