#include <iostream>

using namespace std;

class Employee {
    private:
        string name;
        int salary;
        int age;
    public:
        void get_data() {
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter salary: ";
            cin >> salary;
            cout << "Enter age: ";
            cin >> age;
        }
        void show() {
            cout<<"-------------------------"<<endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
            cout << "Age: " << age << endl;
            cout<<"-------------------------"<<endl;
        }
};

int main() {
    Employee e[3];
    for (int i = 0; i < 3; i++) {
        cout << "-------------------------" << endl;
        cout << "Enter details of employee " << i + 1 << endl;
        e[i].get_data();
        cout << "-------------------------" << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << "Details of employee " << i + 1 << endl;
        e[i].show();
    }
}