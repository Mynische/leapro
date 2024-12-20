#include <iostream>

int main()
{
    using std::string;
    using std::cout;
    using std::cin;
    using std::getline;
    using std::endl;
    
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    // name.clear(); to clear a name

    /*
    if(name.empty()){
        cout << "You didn't enter your name\n";
    }
    else if(name.length() > 12){
        cout << "Your name can't be over 12 characters\n";  
    }
    else{
        cout << "Hello " << name << '\n';
    }
    */

    //name.append("@gmail.com");
    //cout << "Your username is now " << name << '\n';

    //cout << name.at(0) << '\n';

    //name.insert(0, "@");
    //cout << name << '\n';

    //cout << name.find(' ') << endl;

    name.erase(0, 6);

    cout << name << endl;

    return 0;
}