#include <iostream>

using namespace std;

void sumOfDigits() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    cout << "Sum of digits: " << sum << endl;
}

void armstrong(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }
    if (sum == temp)
        cout << temp << " is an Armstrong number" << endl;
    else
        cout << temp << " is not an Armstrong number" << endl;
}

void palindrome(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int temp = num;
    int rev = 0;
    while (num > 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    if (rev == temp)
        cout << temp << " is a Palindrome number" << endl;
    else
        cout << temp << " is not a Palindrome number" << endl;
}

void multiplicationOfDigits(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int mul = 1;
    while (num > 0) {
        mul *= num % 10;
        num /= 10;
    }
    cout << "Multiplication of digits: " << mul << endl;
}

int main() {
    int choice;
    do {
        cout << "--------------------------------------------------"<< endl;
        cout << "1. Sum of Digit" << endl;
        cout << "2. Armstrong or Not" << endl;
        cout << "3. Palindrome or Not" << endl;
        cout << "4. Multiplication of Digit" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "--------------------------------------------------"<< endl;
        switch (choice) {
            case 1:
                sumOfDigits();
                break;
            case 2:
                armstrong();
                break;
            case 3:
                palindrome();
                break;
            case 4:
                multiplicationOfDigits();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (choice != 5);
}