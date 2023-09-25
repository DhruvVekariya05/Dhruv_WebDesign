#include <iostream>

using namespace std;

int main() {
  int num1, num2, num3;
  cout << "Enter three numbers: ";
  cin >> num1 >> num2 >> num3;
  if (num1 > num2) {
    if (num1 > num3)
      cout << "First number is the biggest among all three" << endl;
    else
      cout << "Last number is the biggest among all three" << endl;
  } else {
    if (num2 > num3)
      cout << "Second number is the biggest among all three" << endl;
    else
      cout << "Last number is the biggest among all three" << endl;
  }
}
