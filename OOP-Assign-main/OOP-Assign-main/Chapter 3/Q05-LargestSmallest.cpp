// Write a C++ program to sort a list of names in ascending order using arrays.
#include <iostream>
using namespace std;
void sort(int arr[], int size) {
  int temp;
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] > arr[j]) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main() {
  int N = 10;
  int arr[N];
  cout << "Enter 10 numbers:";
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
  };
  sort(arr, N);
  cout << "Largest Number is " << arr[N - 1] << endl;
  cout << "Smallest Number is " << arr[0] << endl;
}