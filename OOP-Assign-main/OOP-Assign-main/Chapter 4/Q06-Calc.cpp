#include <iostream>

using namespace std;

template <class T>
class Calculator {
 public:
  T add(T num1, T num2) { return num1 + num2; }
  T subtract(T num1, T num2) { return num1 - num2; }
  T multiply(T num1, T num2) { return num1 * num2; }
  T divide(T num1, T num2) { return num1 / num2; }
};

int main() {
  int num1, num2;

  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  Calculator<int> intCalc;
  cout << "Sum of " << num1 << " and " << num2 << " is "
       << intCalc.add(num1, num2) << endl;
  cout << "Difference of " << num1 << " and " << num2 << " is "
       << intCalc.subtract(num1, num2) << endl;
  cout << "Product of " << num1 << " and " << num2 << " is "
       << intCalc.multiply(num1, num2) << endl;
  cout << "Quotient of " << num1 << " and " << num2 << " is "
       << intCalc.divide(num1, num2) << endl;
}