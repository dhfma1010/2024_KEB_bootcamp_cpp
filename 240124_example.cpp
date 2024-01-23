#include <iostream>
using namespace std;

int main(){
    unsigned int givenInt, firstDigit;

    cout << "Input a positive integer: ";
    cin >> givenInt;

    firstDigit = givenInt % 10;

    cout << "Input integer" <<givenInt << endl;
    cout << "Extracted first digit. " << firstDigit  << endl;
    return 0;
}