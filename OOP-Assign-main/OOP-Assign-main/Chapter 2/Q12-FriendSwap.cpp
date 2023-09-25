// Write a C++ program to swap numbers using friend function. 

#include <iostream>

using namespace std;

class Swap{
    private:
        int num1, num2;
    public:
        Swap(int num1, int num2){
            this->num1 = num1;
            this->num2 = num2;
        }
        friend void swap(Swap &s);
        void display(){
            cout << "After swapping: " << endl;
            cout << "num1 = " << num1 << endl;
            cout << "num2 = " << num2 << endl;
        }
};

void swap(Swap &s){
    int temp = s.num1;
    s.num1 = s.num2;
    s.num2 = temp;
}

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    Swap s(num1, num2);
    s.display();
    swap(s);
    s.display();
}