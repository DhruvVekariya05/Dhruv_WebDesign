#include <iostream>

using namespace std;

template <class T>
class Array {
  T *arr;
  int size;

 public:
  Array(int size) {
    this->size = size;
    arr = new T[size];
  }
  void input() {
    cout << "Enter " << size << " elements" << endl;
    for (int i = 0; i < size; i++) cin >> arr[i];
  }
  void display() {
    cout << "Elements are: ";
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;
  }
  T maximum() {
    T max = arr[0];
    for (int i = 0; i < size; i++) {
      if (arr[i] > max) max = arr[i];
    }
    return max;
  }
  T minimum() {
    T min = arr[0];
    for (int i = 0; i < size; i++) {
      if (arr[i] < min) min = arr[i];
    }
    return min;
  }
  T sum() {
    T sum = 0;
    for (int i = 0; i < size; i++) {
      sum += arr[i];
    }
    return sum;
  }
  T average() { return sum() / size; }
};

int main() {
  int size;
  cout << "Enter Array length: ";
  cin >> size;
  Array<int> arr(size);
  arr.input();
  arr.display();
  cout << "Maximum number is: " << arr.maximum() << endl;
  cout << "Minimum number is: " << arr.minimum() << endl;
  cout << "Sum of numbers is: " << arr.sum() << endl;
  cout << "Average of numbers is: " << arr.average() << endl;
}