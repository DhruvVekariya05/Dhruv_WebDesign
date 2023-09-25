#include <iostream>

using namespace std;

int main() {
  string name;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Capacity of the string before resizing: " << name.capacity() << endl;
  name.resize(40);
  cout << "Capacity of the string after resizing: " << name.capacity() << endl;
}