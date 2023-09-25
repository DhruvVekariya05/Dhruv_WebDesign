#include <iostream>
using namespace std;

template <class T>
void swapvalue(T &num1, T &num2) {
  T temp = num1;
  num1 = num2;
  num2 = temp;
}

int main() {
  int num1, num2;
  cout << "Enter two intergers: ";
  cin >> num1 >> num2;
  cout << "Before swapping: " << endl;
  cout << "num1 = " << num1 << " num2 = " << num2 << endl;
  swapvalue(num1, num2);
  cout << "After swapping: " << endl;
  cout << "num1 = " << num1 << " num2 = " << num2 << endl;
  cout << "-----------------------------------" << endl;
  float num3, num4;
  cout << "Enter two floats: ";
  cin >> num3 >> num4;
  cout << "Before swapping: " << endl;
  cout << "num3 = " << num3 << " num4 = " << num4 << endl;
  swapvalue(num3, num4);
  cout << "After swapping: " << endl;
  cout << "num3 = " << num3 << " num4 = " << num4 << endl;
}
