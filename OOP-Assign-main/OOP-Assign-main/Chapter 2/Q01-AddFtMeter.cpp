#include <iostream>

using namespace std;

class DM;

class DB {
  int feet, inches;

 public:
  void getdata() {
    cout << "Enter feet and inches: ";
    cin >> feet >> inches;
  }
  void showdata() {
    cout << "Feet: " << feet << endl;
    cout << "Inches: " << inches << endl;
  }
  friend void add(DB c1, DM c2);
};

class DM {
  int meters, centimeters;

 public:
  void getdata() {
    cout << "Enter meters and centimeters: ";
    cin >> meters >> centimeters;
  }
  void showdata() {
    cout << "Meters: " << meters << endl;
    cout << "Centimeters: " << centimeters << endl;
  }
  friend void add(DB, DM dm);
};

void add(DB db, DM dm) {
  int feet = db.feet + (dm.meters * 3.28084);
  int inches = db.inches + (dm.centimeters * 0.393701);
  if (inches >= 12) {
    feet += inches / 12; 
    inches = inches % 12;
  }
  cout << "Sum of DB and DM: " << endl;
  cout << "Feet: " << feet << endl;
  cout << "Inches: " << inches << endl;
};

int main() {
  DB db;
  DM dm;
  db.getdata();
  dm.getdata();
  add(db, dm);
}

 