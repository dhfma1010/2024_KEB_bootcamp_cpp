#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // variable declaration
    double number;
    int intPart;
    double fractPart;
    // input
    cout << "Input a floating-point number: ";
    cin >> number;
    // processing
    intPart = static_cast<int>(number);
    fractPart = number - intPart;
    // output
    cout << fixed << showpoint << setprecision(2);
    cout << "The original number: " << number << endl;
    cout << "The integral part: " << intPart << endl;
    cout << "The fractional part:" << fractPart;
    return 0;


}