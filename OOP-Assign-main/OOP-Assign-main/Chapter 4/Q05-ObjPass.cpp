// Write a program to pass an object to template function and display its
// members.

#include <iostream>

using namespace std;

class Student {
 public:
  string name;
  int rollNo;
  Student(string name = "", int rollNo = 0) {
    this->name = name;
    this->rollNo = rollNo;
  }
};

template <class T>
void display(T obj) {
  cout << obj.name << endl;
  cout << obj.rollNo << endl;
}

int main() {
  string name;
  int rollNo;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your roll number: ";
  cin >> rollNo;
  Student s(name, rollNo);

  display(s);
}