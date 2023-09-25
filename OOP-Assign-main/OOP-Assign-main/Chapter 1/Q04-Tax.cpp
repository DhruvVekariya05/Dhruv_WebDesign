#include <iostream>

using namespace std;

int main() {
  int salary;
  cout << "Enter your salary: ";
  cin >> salary;
  // Let Income Tax be 5% for salary more then 50,000₨
  if (salary < 50000) {
    cout << "You Dont have to pay tax";
    return 0;
  }
  int incomeTax = salary * .05;
  int net = salary + incomeTax;
  cout << "--------------------------------------------------" << endl;
  cout << "Your Salary :" << salary << endl;
  cout << "Your Income Tax :" << incomeTax << endl;
  cout << "Your Net Salary :" << net << endl;
  cout << "--------------------------------------------------" << endl;
}