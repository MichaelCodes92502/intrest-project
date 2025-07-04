
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double principal, rate, time, FinalAmount, interest;

    //user input
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the rate of interest: ";
    cin >> rate;
    cout << "Enter the compound time period in years: ";
    cin >> time;

    //calculations
    FinalAmount = principal * pow((1 + rate / 100), time);
    interest = FinalAmount - principal;

    //output
    cout << fixed << setprecision(2);
    cout << "Principal: $" << principal << endl;
    cout << "Interest rate: " << rate << "%" << endl;
    cout << "Time period: " << time << " years" << endl;
    cout << "Interest earned: $" << interest << endl;
    cout << "Final Amount: $" << FinalAmount << endl;
    
    return 0;
}
