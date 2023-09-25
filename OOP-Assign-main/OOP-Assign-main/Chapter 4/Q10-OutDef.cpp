#include <iostream>

using namespace std;

template <class T,class Z>
class Student {
 public:
  T name;
  Z rollNo;
  Student(T name = "", Z rollNo = 0) {
    this->name = name;
    this->rollNo = rollNo;
  }
  void display();
};

template <class T,class Z>
void Student<T,Z>::display() {
  cout << "Name: " << name << endl;
  cout << "Roll No: " << rollNo << endl;
}

int main() {
  string name;
  int rollNo;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Enter your roll number: ";
  cin >> rollNo;
  Student<string,int> s(name, rollNo);

  s.display();
}