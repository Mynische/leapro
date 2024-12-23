#include <iostream>

using std::cout;
using std::cin;

void happyBirthday(std::string name, int age);


int main()
{
    // function = a block of reusable code

    std::string name = "Grisha";
    int age = 20;

    happyBirthday(name, age);
    happyBirthday(name, age);
    happyBirthday(name, age); 

    return 0;
}

void happyBirthday(std::string name, int age){
    cout << "Happy Birthday to you!\n";
    cout << "Happy Birthday to you!\n";
    cout << "Happy Birthday dear " << name << '\n';    
    cout << "Happy Birthday to you!\n";
    cout << "You are " << age << " years old!\n\n";
}