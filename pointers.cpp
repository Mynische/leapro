#include <iostream>

int main()
{
    // pointers = variables that stores a memory address of another variable
    //            sometimes it's easier to work an address

    // & address-of operator
    // * dereference operator

    std::string name = "Grisha";
    int age = 20;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *pFreePizzas << '\n';

    return 0; 
}