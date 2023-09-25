#include <iostream>

using namespace std;

template <class T>
class Show {
  T value;

 public:
  Show(T value) { this->value = value; }
  void display() { cout << "Value: " << value << endl; }
};

int main() {
  Show<int> s1(10);
  s1.display();

  Show<float> s2(10.5);
  s2.display();

  Show<char> s3('A');
  s3.display();

  Show<string> s4("Hello");
  s4.display();

  return 0;
}