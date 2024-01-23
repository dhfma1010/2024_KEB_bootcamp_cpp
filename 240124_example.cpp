#include <iostream>
using namespace std;


int main(){

    int num1, num2;
    int larger;

    cout << "Input the first number: ";
    cin >> num1;
    cout << "Input the second number: ";
    cin >> num2;

    if(num1 >= num2)
    {
        larger = num1;

    }
    else
    {
        larger = num2;
    }

    cout << "The larger num is : " << larger;
    return 0;

}