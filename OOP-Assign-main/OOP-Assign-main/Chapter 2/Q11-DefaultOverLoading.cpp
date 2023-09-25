// Write a C++ program to demonstrate the use of default arguments in function overloading.

#include <iostream>

using namespace std;

void area(int radius){
    cout << "Area of circle is " << 3.14 * radius * radius << endl;
}

void area(int length, int width = 5){
    cout << "Area of rectangle is " << length * width << endl;
}

void area(int side1, int side2, int side3){
    cout << "Area of square is " << side1 * side2 * side3 << endl;
}

int main(){
    int radius, length, width, side1, side2, side3;
    cout << "Enter radius of circle: ";
    cin >> radius;
    area(radius);
    cout << "Enter length and width of rectangle: ";
    cin >> length >> width;
    area(length, width);
    cout << "Enter side of square: ";
    cin >> side1 >> side2 >> side3;
    area(side1, side2, side3);
}