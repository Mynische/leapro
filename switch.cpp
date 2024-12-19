#include <iostream>

int main()
{
    // switch = alternative to using many "else if" statements 
    //          compare one value against matching cases

    using std::cout;
    using std::cin;

    /*int month;
    cout << "Enter the month (1-12): ";
    cin >> month;

    switch(month){
        case 1:
            cout << "It is January" << '\n';
            break;
        case 2:
            cout << "It is February" << '\n';
            break;
        case 3:
            cout << "It is March" << '\n';
            break;
        case 4:
            cout << "It is April" << '\n';
            break;
        case 5:
            cout << "It is May" << '\n';
            break;
        case 6:
            cout << "It is June" << '\n';
            break;
        case 7:
            cout << "It is July" << '\n';
            break;
        case 8:
            cout << "It is August" << '\n';
            break;
        case 9:
            cout << "It is September" << '\n';
            break;
        case 10:
            cout << "It is October" << '\n';
            break;
        case 11:
            cout << "It is November" << '\n';
            break;
        case 12:
            cout << "It is December" << '\n';
            break;
        default:
            cout << "Please enter in only numbers (1-12)" << '\n';     
    }
    */

   char grade;

   cout << "The letter grades are: (A, B, C, D, F)" << '\n';
   cout << "What letter grade: ";
   cin >> grade;

   switch(grade){
    case 'A':
        cout << "You did great!" << '\n';
        break;
    case 'B':
        cout << "You did good" << '\n';
        break;
    case 'C':
        cout << "You did okay" << '\n';
    case 'D':
        cout << "You did not do good" << '\n';
        break;
    case 'F':
        cout << "YOU FAILED!" << '\n';
        break;
    default:
        cout << "Please enter only in a letter grade (A, B, C, D, F)" << '\n';
   }

    return 0;
}