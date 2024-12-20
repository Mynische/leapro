#include <iostream>

int main()
{
    // pseudo-random = NOT truly random (but close)

    using std::cout;
    using std::cin;

    srand(time(NULL));

    for(int i = 1; i <=8; i++){
        for(int j = 1; j <=1; j++){
            int num1 = (rand() % 20) + 1;
            int num2 = (rand() % 20) + 1;
            int num3 = (rand() % 20) + 1;
            cout << num1 << ' ';
            cout << num2 << ' ';
            cout << num3 << ' ';
        }
        cout << '\n';
    }

    return 0;
}