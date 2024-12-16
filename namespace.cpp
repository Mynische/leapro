#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;
}

int main()
{
    using std::cout;
    using std::string;
    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identity named entities 
    //             as long as the name spaces are different.

    using namespace first;

    cout << x << '\n';

    return 0;
}