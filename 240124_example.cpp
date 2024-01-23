// if ~ absolute num.

#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Input integer: ";
    cin >> num;

    if(num < 0)
    {
        num = -num;
    }

    cout << "Absolute value of the number : " << num;
    return 0;


}
