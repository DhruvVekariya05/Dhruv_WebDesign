#include <iostream>
using namespace std;

int sumOfDigit(int number) {
  if (number < 0) return -1;
  int sum = 0;
  for (int i = number; i > 0; i /= 10) {
    sum += i % 10;
  };
  return sum;
}

int main() {
  int n;
  cout << "Enter total no. of numbers you want to enter";
  cin >> n;
  int arr[n];
  cout << "Enter " << n << " numbers: ";
  for (int i = 0; i < n; i++) cin >> arr[i];
  for (int i = 0; i < n; i++) {
    int sum = sumOfDigit(arr[i]);
    if (sum == -1)
      cout << arr[i] << " is a Negative Number"<<endl;
    else
      cout << "The Sum of digits of " << arr[i] << " is " << sum<<endl;
  }
}