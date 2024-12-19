#include <iostream>

int main()
{

    //if statements = do something if a condition is true.
    //                if not, then don't do it.

    using std::cout;
    using std::cin;   
    
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age >= 100){
        cout << "You are too old to enter this site!" << '\n';
    }
    else if(age >= 18){
        cout << "Welcome to the site!" << '\n';
    }
    else if(age < 0) {
        cout << "You haven't been born yet!" << '\n';
    }
    else if(age = 17){
        cout << "You can come back next year!" << '\n';
    }
    else{
        cout << "You are not old enough to enter!" << '\n';
    }

    return 0;
}