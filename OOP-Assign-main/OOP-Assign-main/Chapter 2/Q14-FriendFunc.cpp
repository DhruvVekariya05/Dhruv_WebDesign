#include <iostream>
using namespace std;
class A{
    private:
        int num;
    public:
        A(int num){
            this->num = num;
        }
        friend void display(A &a);
};

void display(A &a){
    cout << "num = " << a.num << endl;
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    A a(num);
    display(a);
}
