#include <iostream>

int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::getline;

    string name;

    while(name.empty()){
       cout << "Enter your name: ";
       getline(cin, name); 
    }

    //while(1==1){
    //    cout << "HELP, I'm stuck in an infinite loop";
    //}

    cout << "Hello " << name << '\n';

return 0;
}