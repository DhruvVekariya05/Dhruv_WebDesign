#include <iostream>

using namespace std;

template <class T>
void reverse(T num) {
  T rev = 0;
  while (num > 0) {
    rev = rev * 10 + num % 10;
    num /= 10;
  }
  cout << "Reverse: " << rev << endl;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  return 0;
}
