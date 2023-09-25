#include <iostream>

using namespace std;

class Currency {
    private:
        int rupee;
        int paisa;
    public:
        Currency(int r, int p) {
            rupee = r;
            paisa = p;
        }
        void get_data() {
            cout << "Enter rupees: ";
            cin >> rupee;
            cout << "Enter paisa: ";
            cin >> paisa;
        }
        void show() {
            cout << "Rupees: " << rupee << endl;
            cout << "Paisa: " << paisa << endl;
        }
        Currency add(Currency c) {
            int paisa = this->paisa + c.paisa;
            int rupee = this->rupee + c.rupee;
            if (paisa >= 100) {
                paisa -= 100;
                rupee++;
            }
            Currency temp(rupee,paisa);
            return temp;
        }
};

int main() {
    Currency c1, c2, c3;
    cout << "Enter details of first currency" << endl;
    c1.get_data();
    cout << "Enter details of second currency" << endl;
    c2.get_data();
    c3 = c1.add(c2);
    cout << "Details of first currency" << endl;
    c1.show();
    cout << "Details of second currency" << endl;
    c2.show();
    cout << "Details of third currency" << endl;
    c3.show();
}
