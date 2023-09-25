#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    (num1 > num2) ? cout << num1 << " is greater than " << num2 : cout << num2 << " is greater than " << num1;
}