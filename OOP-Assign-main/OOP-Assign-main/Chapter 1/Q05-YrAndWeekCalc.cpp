#include <iostream>

using namespace std;

int main() {
  int days;
  cout << "Enter no of days: ";
  cin >> days;
  int remainingDays = days;
  int years = remainingDays / 365;
  remainingDays %= 365;
  int weeks = remainingDays / 7;
  remainingDays %= 7;
  cout << "----------------------------------------------------" << endl;
  cout << days << " days is equal to " << years << " year(s) and " << weeks
       << " week(s)" << endl;
  cout << "----------------------------------------------------" << endl;
}