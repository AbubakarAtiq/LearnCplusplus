#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>
#include <ostream>
#include <string>
#include <system_error>

using namespace std;
int main() {
  system("echo Welcome to snack video Rupee per coins calculator Program");
  system("echo Made by abubakar atiq-217-24481");
  double coins; // store the value of coins enter
  double y = 0.0002;
  double output;
  cout << "Remember 50coins are equal to 0.01Rs" << endl;
  cout << "Enter-number-of-coins-earned:";
  cin >> coins;
  /*
      coins=50->0.01Rs
      coins=100->0.02Rs
      50Coins=0.01Rs
      1coins=0.01Rs/50
      1coins=0.0002Rs
      coins-coins=coins*0.0002Rs
  */
  output = coins * y;
  cout << "Coins:" << coins << endl;
  cout << "Rupees earned:" << output << endl;
  main();
  return 0;
}