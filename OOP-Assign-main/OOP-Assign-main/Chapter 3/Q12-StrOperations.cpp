#include <iostream>

using namespace std;

int main() {
  string str1, str2;
  cout << "Enter a string: ";
  cin >> str1;
  cout << "Enter a second string: ";
  cin >> str2;
  if (str1.compare(str2) == 0)
    cout << "Both strings are equal" << endl;
  else
    cout << "Both strings are not equal" << endl;
  str1.append(str2);
  cout << "Concatenated string: " << str1 << endl;

  char str3[100];
  str1.copy(str3, str1.length(), 0);
  cout << "Copied string: " << str3 << endl;
}