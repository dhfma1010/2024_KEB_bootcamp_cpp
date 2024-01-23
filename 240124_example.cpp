#include <iostream>
using namespace std;

int main(){

    int age; 
    bool eligible;

    cout << "Input your age: ";
    cin >> age;

    eligible = (age >= 25) && (age <= 100);

    if (eligible){
        cout << "Eligible to rent a car. ";
    }
    else {
        cout << "not eligible to rent a car. ";

        return 0;
    }
}