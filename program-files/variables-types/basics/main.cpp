#include <iostream>
int main()
{
    // Initialize variables
    bool flag = 0;           // Boolean: true [non 0] or false [0].
    char letter = 'A';       // Single character.
    // Integers
    short sval = 32767;      // Smaller integer
    int ival = 2147483647;   // Integer number.
    long lval = 0x7ffffff;   // bigger integer.
    // Floating points
    float fval = 0.07f;      // Single precision float.
    double dval = 0.01;      // Double precision float
    // Auto
    auto some_int = 13;      // Automatic type [int].
    auto some_float = 13.0f; // Automatic type [float].
    auto some_double = 13.0; // Automatic type [double].

    // Declare variables
    char name_0 = 'G', name_1 = 'N', name_2 = 'U';
    int year, month, day;
    // Initialize declare variables
    year = 2019;
    month = 3;
    day = 23;

    // Print values
    std::cout << "Bool: " << flag << '\n';
    std::cout << "Char: " << letter << '\n';
    std::cout << "Short: " << sval << '\n';
    std::cout << "Int: " << ival << '\n';
    std::cout << "Long: " << lval << '\n';
    std::cout << "Float: " << fval << '\n';
    std::cout << "Double: " << dval << '\n';
    std::cout << "Auto int" << some_int << '\n';
    std::cout << "Auto float: " << some_float << '\n';
    std::cout << "Auto double: " << some_double << '\n';
    std::cout << "Char: " << name_0 << name_1 << name_2 << '\n';
    std::cout << "Date: " << year << "/" << month << "/" << day << '\n';

    return 0;
}
