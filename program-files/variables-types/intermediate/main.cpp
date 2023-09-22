#include <iostream>

int main(int argc, char const *argv[])
{
    // Integer Literals
    int ival = 12;           // Int
    int oval = 012;          // Octal
    int hval = 0x2a;         // Hexadecimal
    int lval = 256L;         // Long
    int uval = 0x80U;        // Unsigned
    // Floating point literals
    float fval = -57.0;      // Float
    float snval = 1.99e+2;   // Scientific notation
    float ffval = 8.00275F;  // Explicit float
    float ldval = 3.14e+38L; // Long double
    // Print
    std::cout << "Int: " << ival << '\n';
    std::cout << "Octal " << oval << '\n';
    std::cout << "Hexadecimal: " << hval << '\n';
    std::cout << "Octal: " << lval << '\n';
    std::cout << "Unsigned: " << uval << '\n';
    std::cout << "Float: " << fval << '\n';
    std::cout << "Scientific notation: " << snval << '\n';
    std::cout << "Float: " << ffval << '\n';
    std::cout << "Long double: " << ldval << '\n';
    return 0;
}


