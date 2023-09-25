#include <iostream>

using namespace std;

class Employee{
    private:
        string name;
        int age;
        string designation;
        int salary;
    public:
        Employee(string name, int age, string designation, int salary){
            this->name = name;
            this->age = age;
            this->designation = designation;
            this->salary = salary;
        }
        void display(){
            cout << "----------Employee Details----------" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Designation: " << designation << endl;
            cout << "Salary: " << salary << endl;
            cout << "------------------------------------" << endl;
        }
};

int main(){
    string name, designation;
    int age, salary;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter designation: ";
    cin >> designation;
    cout << "Enter salary: ";
    cin >> salary;
    Employee e(name, age, designation, salary);
    e.display();
}