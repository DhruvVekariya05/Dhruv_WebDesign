#include <iostream>

using namespace std;
int main() { 
  int n1, n2;
  cout << "Enter a number: ";
  cin >> n1 >> n2;
  int temp = n2;
  n2 = n1;
  n1 = temp;
  cout << "--------------------------Swapped Values-----------------------------------"<< endl;
  cout << "Num1 :" << n1<<endl;
  cout << "Num2 :" << n2<<endl;
  cout << "-----------------------------------------------------------------------------" << endl;

}