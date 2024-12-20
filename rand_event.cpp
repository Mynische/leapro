#include <iostream>
#include <ctime>

int main()
{
    using std::cout;
    using std::cin;

    srand(time(0));
    int randNum = (rand() % 5) + 1;

    switch(randNum){
        case 1: cout << "You win a bumper sticker!\n";
            break;
        case 2: cout << "You win a t-shirt!\n";
            break;
        case 3: cout << "You win a free lunch!\n";
            break;
        case 4: cout << "You win a gift card!\n";
            break;
        case 5: cout << "You win a concert ticket!\n";
            break;
    }

    return 0;
}