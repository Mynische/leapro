#include <iostream>

int main()
{
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    using std::cout;
    using std::cin;
    using std::string;

    /*
    int grade;
    cout << "Enter grade: ";
    cin >> grade;
    grade >= 60 ? cout << "You pass!\n" : cout << "You fail!\n";
    */

   //int number = 8;
   //number % 2 == 1 ? cout << "ODD\n" : cout << "EVEN\n";

    bool hungry;
    cout << "Are you hungry (true or false): ";
    cin >> hungry;

    //hungry == true ? cout << "You are hungry\n" : cout << "You are full\n";
    cout << (hungry ? "You are hungry\n": "You are full\n");

    return 0;
}