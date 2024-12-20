#include <iostream>

int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state of its operand 

    using std::cout;
    using std::cin;

    int temp;
    bool sunny = false;

    cout << "Enter the temperature: ";
    cin >> temp;

    /*
    if(temp > 0 && temp < 30){
        cout << "The temperature is bad!\n";
    }
    else{
        cout << "The temperature is good!\n";
    }
    */
    
    if(temp <= 0 || temp >= 30){
        cout << "The temperature is bad!\n";
    }
    else{
        cout << "The temperature is good!\n";
    }
    

   if(!sunny){
    cout << "It is cloudy outside!\n";
   }
   else{
    cout << "It is sunny outside!\n";
   }

    return 0;
}