#include <iostream>

using namespace std;

template <class T>
T maximum(T arr[], int size) {
  T max = arr[0];
  for (int i = 0; i < size; i++) {
    if (arr[i] > max) max = arr[i];
  }
  return max;
}

int main() {
  int N;
  cout << "Enter Array length";
  cin >> N;
  int arr[N];
  cout << "Enter " << N << " numbers";
  for (int i = 0; i < N; i++) cin >> arr[i];
  cout << "Maximum number is: " << maximum(arr, N) << endl;
}