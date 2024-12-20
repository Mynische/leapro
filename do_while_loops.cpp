#include <iostream>

int main()
{
    // do while loops = do some block of code first,
    //                  THEN repeat again if condition is true

    using std::cout;
    using std::cin;
    using std::endl;

    int number;

    do{
        cout << "Enter a positive #: ";
        cin >> number;
    }while(number < 0);

    cout << "The # is: " << number << '\n';

    return 0;
}