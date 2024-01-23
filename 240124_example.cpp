#include <iostream>
using namespace std;

int main(){

    int score;

    cout << "Enter a score 0~100: ";
    cin >> score;

    if (score >= 80)
    {
        cout << "Wow Pass" << endl;
    }
    else{

        cout << "No Pass" << endl;
    }

    return 0;


}