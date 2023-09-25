#include <iostream>

using namespace std;

template <class T>
T add(T num1, T num2) {
  return num1 + num2;
}

int main() {
  int num1, num2;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;
  cout << "Sum of " << num1 << " and " << num2 << " is " << add(num1, num2)
       << endl;
}