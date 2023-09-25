/**
 *  Create a class paper with width and height as data member. Create function outside a class
 *  that finds out area and perimeter of that paper Pass object as argument.    
*/
#include <iostream>
using namespace std;
class triangle{
    private:
    int height,base;
    public:
    triangle() { 
        cout << "Enter Height: ";
        cin >> height;
        cout << "Enter base: ";
        cin >> base;
    }
    friend void findArea(triangle p1);
};

void findArea(triangle p1){
    int area = .5*(p1.height*p1.base);
    cout << "Area is " << area<<endl;
}
int main(){
    triangle p1;
    findArea(p1);
    return 0;
}
