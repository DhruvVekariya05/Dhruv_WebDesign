#include <iostream>

using namespace std;

template <class T>
class SimpleInterest {
 public:
  T p, r, t;
  SimpleInterest(T p, T r, T t) {
    this->p = p;
    this->r = r;
    this->t = t;
  }
  T interest() { return (p * r * t) / 100; }
};

int main() {
  cout << "For Float:" << endl;
  float p, r, t;
  cout << "Enter principal, rate and time: ";
  cin >> p >> r >> t;
  SimpleInterest<float> si(p, r, t);
  cout << "Interest: " << si.interest() << endl;
  cout << "-----------------------------------" << endl;
  cout << "For Integer:" << endl;
  int p1, r1, t1;
  cout << "Enter principal, rate and time: ";
  cin >> p1 >> r1 >> t1;
  SimpleInterest<int> si1(p1, r1, t1);
  cout << "Interest: " << si1.interest() << endl;
  return 0;
}