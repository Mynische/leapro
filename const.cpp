#include <iostream>

int main()
{
    // The cosnt keyword specifies that a variable's value is constant.
    // Tells the compiler to prevent anything from modifying it.
    // (read-only)

    const double PI = 3.14159; // It is a convention to write the name of const value in upper case.
    // double PI = 420.69;
    const int LIGHT_SPEED = 299798458;
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << " cm" << '\n';



    return 0;
}