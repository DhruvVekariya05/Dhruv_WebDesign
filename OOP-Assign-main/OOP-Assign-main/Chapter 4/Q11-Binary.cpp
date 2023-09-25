#include <iostream>
using namespace std;

template <class T>
class Binary {
 public:
  T num;
  Binary(T num = 0) { this->num = num; }
  int binary() {
    int bin = 0, rem, i = 1;
    while (num > 0) {
      rem = num % 2;
      bin += rem * i;
      num /= 2;
      i *= 10;
    }
    return bin;
  }
};

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  Binary<int> b(num);
  cout << "Binary: " << b.binary() << endl;
  return 0;
}

