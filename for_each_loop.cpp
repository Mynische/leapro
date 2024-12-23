#include <iostream>

int main()
{
    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    //std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};
    int grades[] = {65, 72, 82, 99};

    for(int grade : grades){
        std::cout << grade<< '\n';
    }

    return 0;
}
