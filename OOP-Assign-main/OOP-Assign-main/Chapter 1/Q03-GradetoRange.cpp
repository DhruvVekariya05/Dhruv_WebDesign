#include <iostream>
#include <string>
using namespace std;

int main() {
  char grade;
  cout << "Enter your grade: ";
  cin >> grade;
  switch (grade) {
    case 'A':
      cout << "You scored above 90";
      break;
    case 'B':
      cout << "You scored above 80 and below 90";
      break;
    case 'C':
      cout << "You scored above 70 and below 80";
      break;
    case 'D':
      cout << "You scored above 35";
      break;
    case 'E':
      cout << "You Failed";
      break;
  }
  
}