#include <iostream>

int myNum = 3;

void printNum();

int main()
{
    // Local variables = declared inside the function or block {}
    // Global variables = declared outside of all functions
    
    printNum();
    int myNum = 1;
    std::cout << ::myNum << '\n';

    return 0;
}
void printNum(){
    
    std::cout << myNum << '\n';
}