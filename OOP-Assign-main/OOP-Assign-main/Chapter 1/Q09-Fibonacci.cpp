#include<iostream>

using namespace std;

int main() { 
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    int prev = 0, next = 1;
    for (int i = 1; i <= num; i++) {
        cout << prev << " ";
        int temp = prev;
        prev = next;
        next = temp + next;
    }
}
