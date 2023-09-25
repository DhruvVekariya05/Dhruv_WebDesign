//Write a program that has a template class STUDENT to read and print the details of student.
// Use multiple arguments.

#include <iostream>

using namespace std;

template <class T1, class T2, class T3>
class Student {
  T1 name;
  T2 roll;
  T3 marks;

 public:
  void get() {
    cout << "Enter name, roll and marks: ";
    cin >> name >> roll >> marks;
  }
  void dis() {
    cout << "Name: " << name << endl;
    cout << "Roll: " << roll << endl;
    cout << "Marks: " << marks << endl;
  }
};

int main() {
  Student<string, int, float> s;
  s.get();
  s.dis();
  return 0;
}
