#include <iostream>
using namespace std;

int main(){
    unsigned int givenInt, firstDigit, secondDigit, thirdDigit, forthDigit;

    cout << "Input a positive integer: ";
    cin >> givenInt;

    firstDigit = givenInt % 10;
    secondDigit = givenInt % 100 / 10;
    thirdDigit = givenInt % 1000 / 100;
    forthDigit = givenInt % 10000 / 1000;

    cout << "Input integer " <<givenInt << endl;
    cout << "Extracted first digit. " << firstDigit  << endl;
    cout << "Extracted second digit. " << secondDigit  << endl;
    cout << "Extracted third digit. " << thirdDigit  << endl;
    cout << "Extracted forth digit. " << forthDigit  << endl;


    return 0;
}