#include <iostream>

int main()
{
    // sizeof() = determines the size in bytes of a:
    //            variables, data types, class, objects, etc.

    double gpa = 2.5;
    std::string name = "Grisha";
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Aladdin"};

    // std::cout << sizeof(students) << " bytes\n";
    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";

    return 0;
}