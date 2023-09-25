#include <iostream>

using namespace std;

int main(){
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    if(num1 == num2)
        cout << "Both numbers are equal" << endl;
    else
        cout << "Both numbers are not equal" << endl;
}