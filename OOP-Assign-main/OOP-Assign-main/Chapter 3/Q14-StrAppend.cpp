#include <iostream>

using namespace std;

int main() {
  string greeting = "Hello, ";
  string name;
  cout << "Enter your name: ";
  cin >> name;
  greeting.append(name);
  cout << greeting << endl;
}