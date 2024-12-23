#include <iostream>

/*
double square(double length);
double cube(double length);

int main()
{
    //return = returns a value back to the spot
    //         where you called the encompassing function
    
    using std::cout;
    using std::cin;

    double length = 6.0;
    double area = square(length);
    double volume = cube(length);

    cout << "Area: " << area << "cm^2\n";
    cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}
*/

using std::string;

string concatStrings(string string1, string string2);

int main()
{
    using std::cout;

    string firstName = "Grisha";
    string lastName = "Vlad";
    string fullName = concatStrings(firstName, lastName);

    cout << "Hello " << fullName << '\n';

    return 0;
}

string concatStrings(string string1, string string2){
    return string1 + " " + string2;
}