#include <iostream>

using namespace std;


class Student{
  private:
   int mobile;
   int marks;
  public:
   string name;
   int rollNo;
   Student() {  
    cout << "Enter Name";
    cin >> name;
    cout << "Enter Roll No";
    cin >> rollNo;
    cout << "Enter your Marks"; 
    cin >> marks;
    }
   Student(string name, int rollNo,int marks=0) { 
    this->name = name;
    this->rollNo = rollNo;
    this->marks = marks;
   }
   Student(Student *s1) { 
    name = s1->name;
    rollNo = s1->rollNo;
   }
   string getName();

   friend string generateGrade(Student s);
   friend class iMsCITStudent;
};

string Student::getName() { return name; }

string generateGrade(Student s){
   if (s.marks > 90) return "A+";
   if (s.marks > 80) return "A";
   if (s.marks > 70) return "B";
   if (s.marks > 60) return "C";
   if (s.marks > 50) return "D";
   return "Error";
};
class iMsCITStudent {
  public:
  int getMarks(Student s1) { return s1.marks; }
};

int main() {
   Student s1;
   cout << s1.getName() << " Scored " << generateGrade(s1);
   iMsCITStudent im;
   cout << im.getMarks(s1);
}