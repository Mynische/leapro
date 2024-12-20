#include <iostream>

int main(){

    using std::cout;
    using std::cin;

    int rows;
    int columns;
    char symbol;

    cout << "Enter Rows: ";
    cin >> rows;

    cout << "Enter Columns: ";
    cin >> columns;

    cout << "Enter Symbol: ";
    cin >> symbol;

    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            cout << symbol;
        }
        cout << '\n';
    }


    /*    for(int i = 1; i <= 3; i++){
            for(int j = 1; j <= 10; j++){
                cout << j << ' ';
            }
            cout << '\n';
        }
    */
    cout << '\n';
    return 0;
}