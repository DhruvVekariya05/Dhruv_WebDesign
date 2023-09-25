#include <iostream>
using namespace std;

template <class T>
T maxOf2(T num1, T num2) {
  if (num1 > num2)
    return num1;
  else
    return num2;
}

int main() {
  int num1, num2;
  cout << "Enter two integers: ";
  cin >> num1 >> num2;
  cout << "Maximum of " << num1 << " and " << num2 << " is "
       << maxOf2(num1, num2) << endl;
  cout << "-----------------------------------" << endl;
  float num3, num4;
  cout << "Enter two floats: ";
  cin >> num3 >> num4;
  cout << "Maximum of " << num3 << " and " << num4 << " is "
       << maxOf2(num3, num4) << endl;
  cout << "-----------------------------------" << endl;
  char char1, char2;
  cout << "Enter two characters: ";
  cin >> char1 >> char2;
  cout << "Maximum of " << char1 << " and " << char2 << " is "
       << maxOf2(char1, char2) << endl;
}