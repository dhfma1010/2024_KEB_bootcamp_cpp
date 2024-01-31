// if ~ else Pass/Fail

#include <iostream>
using namespace std;

int main(){

    int score;

    cout << "Input a score 0~100: ";
    cin >> score;

    if(score >= 90)
    {
        cout << "Pass!!" << endl;
    }
    else{
        cout << "No Pass" << endl;
    }
    return 0;
}