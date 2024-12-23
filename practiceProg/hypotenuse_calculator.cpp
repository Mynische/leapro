#include <iostream>
#include <cmath>

int main()
{
    using std::cout;
    using std::cin;
    using std::string;

    double a;
    double b;
    double c;

    cout << "To find the value of hypotenuse of a triangle." << '\n';

    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    //a = pow(a, 2);
    //b = pow(b, 2);
    c = sqrt(pow(a, 2) + pow(b, 2));

    cout << "The value of side C is " << c << '\n';

    return 0;
}