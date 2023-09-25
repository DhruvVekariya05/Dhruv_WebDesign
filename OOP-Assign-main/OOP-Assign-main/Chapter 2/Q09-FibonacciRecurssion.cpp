#include <iostream>

using namespace std;

int getFiboDigit(int n) {
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;
  else
    return getFiboDigit(n - 1) + getFiboDigit(n - 2);
}

int main() {
  int num;
  cout << "Enter the number of elements: ";
  cin >> num;
  cout << "Fibonacci series: ";
  for (int i = 0; i < num; i++) {
    cout << getFiboDigit(i) << " ";
  }
}
