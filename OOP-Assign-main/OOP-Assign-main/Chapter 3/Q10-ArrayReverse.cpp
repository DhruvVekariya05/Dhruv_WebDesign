#include <iostream>

using namespace std;

int main() {
  int N = 5;
  int arr1[N], reverse[N];
  cout << "Enter 5 integer values: ";
  for (int i = 0; i < N; i++) {
    cin >> arr1[i];
  }
  int count = N - 1;
  for (int i = 0; i < N; i++) {
    reverse[i] = arr1[count];
    count--;
  }

  cout << "Reversed Array: ";
  for (int i = 0; i < N; i++) {
    cout << reverse[i] << " ";
  }
}