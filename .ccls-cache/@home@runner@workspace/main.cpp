#include <iostream>
#include <iomanp>

using namespace std;
int main(){

double principal, rate, FinalAmount, interest;

//user input
cout << "Enter the principal amount: ";
 cin >> principal;
  cout << "Enter the rate of interest: ";
  cin >> rate;
  cout << "Enter the compound time period in years: ";
//convert
  double rate decimal = rate / 100;
  
  //calculations
  FinalAmount = principal * pow((1 + rate / 100), 2);

 
  //output
cout << "intrest rate: " << interest << endl;"
  cout << "compound time period in years: " << compound <<
  cout << "principal: " << principal <<
  cout << "rate: " << rate <<
  cout << "FinalAmount $: " << FinalAmount << endl;
  return 0;

  
  