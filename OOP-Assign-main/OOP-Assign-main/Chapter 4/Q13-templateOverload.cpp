//Write an overloaded template function area that calculates area of different shapes.

#include <iostream>

using namespace std;

template <class T>
T area(T length, T breadth) {
  return length * breadth;
}

int area(int radius) {
  return 3.14 * radius * radius;
}

int main() {
  int length, breadth;
  cout << "Enter length and breadth of rectangle: ";
  cin >> length >> breadth;
  cout << "Area of rectangle: " << area(length, breadth) << endl;
  float radius;
  cout << "Enter radius of circle: ";
  cin >> radius;
  cout << "Area of circle: " << area(radius) << endl;
  return 0;
}