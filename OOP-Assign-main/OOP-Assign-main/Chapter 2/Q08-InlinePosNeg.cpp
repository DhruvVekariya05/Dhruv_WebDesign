#include <iostream>

using namespace std;

inline void check(int num){
    return num >=0;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    court<<check(num)?"Number is Positive":"Number is Negative";
}
