#include <iostream>
using namespace std;


int main(){

    int score1, score2, score3, maxScore, minScore, score;

    cout << "Input score1: ";
    cin >> score1;
    cout << "Input score2: ";
    cin >> score2;
    cout << "Input score3: ";
    cin >> score3;

    if (score1 > score2 && score1 > score3){
        maxScore = score1;
    }
    else if (score2 > score1 && score2 > score3)
    {
        maxScore = score2;
    }
    else{
        maxScore = score3;
    }
    if (score1<score2 && score1 <score3)
    {
        minScore = score1;
    }
    else if (score2 < score1 && score2 <= score3)
    {
        minScore = score2;
    }
    else{
        minScore = score3;
    }

    int temp = maxScore + minScore;
    if(temp%2 == 1)
    {
        temp += 1;
    }
    score = temp /2;

    cout << "Scores: "<< score1 << " " << score2 << " "<< score3 << endl;
    cout << "minimum and maximum scores: ";
    cout << minScore << " " << maxScore <<endl;
    cout << "Student score: " << score;
    return 0;
}