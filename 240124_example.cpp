#include <iostream>
using namespace std;

int main(){

    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number<0)
    {
        number = -number;
    }

    cout << "Absolute value of the number you entered is: "<< number;


    return 0;
}