// if ~ Gross payment of employee

#include <iostream>
#include <iomanip>;
using namespace std;

int main(){

    double hours;
    double rate;
    double regularPay;
    double overPay;
    double totalPay;

    cout << "Input hours worked: ";
    cin >> hours;
    cout << "Input pay rate: ";
    cin >> rate;

    regularPay = hours * rate;
    overPay = 0.0;

    if(hours > 40.0)
    {
        overPay = (hours-40.0) * rate * 0.30;
    }

    totalPay = regularPay + overPay;

    cout << fixed << showpoint;
    cout << "Regular pay = " << setprecision(2) << regularPay << endl;
    cout << "Ober time pay = " << setprecision(3) << overPay << endl;
    cout << "Total pay = " << setprecision(4) << totalPay << endl;

    return 0;



}