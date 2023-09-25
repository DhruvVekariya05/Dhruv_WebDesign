// Write a C++ program to calculate area and circumference of circle using inline function

#include <iostream>

using namespace std;

inline void area(int radius){
    cout << "Area of circle is " << 3.14 * radius * radius << endl;
}

inline void circumference(int radius){
    cout << "Circumference of circle is " << 2 * 3.14 * radius << endl;
}

int main(){
    int radius;
    cout << "Enter radius of circle: ";
    cin >> radius;
    area(radius);
    circumference(radius);
}