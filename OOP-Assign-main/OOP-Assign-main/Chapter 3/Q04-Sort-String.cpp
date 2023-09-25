// Write a C++ program to sort a list of names in ascending order using arrays.
#include <iostream>
using namespace std;
void sort(string arr[], int size) {
  string temp;
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
  string arr[5];
  cout << "Enter 5 strings:";
  for (int i = 0; i < 5; i++) {
    cin >> arr[i];
  };
  sort(arr, 5);
  cout << "After Sorting" << endl;
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << endl;
  }
}