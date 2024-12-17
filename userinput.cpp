#include <iostream>


int main()
{
    // cout << (insertion operator)
    // cin >>  (extraction operator)
    // getline() (accepting string containing white spaces)

    using std::string;
    using std::cout;
    using std::cin;
    using std::getline;

    string name;
    int age;

    cout << "What's your age?: ";
    cin >> age;

    cout << "What's your name?: ";
    getline(cin >> std::ws, name);

    cout << "Hello " << name << '\n';
    cout << "So you are " << age << " years old " << '\n';


    return 0;
}