// Write a C++ program (using function overloaded) to sort 5 integer values, or 5 long values, or
// 5double values.

#include <iostream>

using namespace std;

void sort(int arr[], int n){
    int temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void sort(long arr[], int n){
    long temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

void sort(double arr[], int n){
    double temp;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[j] < arr[i]){
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main(){
    int arr1[5];
    long arr2[5];
    double arr3[5];

    cout << "Enter 5 integer values: ";
    for(int i = 0; i < 5; i++){
        cin >> arr1[i];
    }
    cout << "Enter 5 long values: ";
    for(int i = 0; i < 5; i++){
        cin >> arr2[i];
    }
    cout << "Enter 5 double values: ";
    for(int i = 0; i < 5; i++){
        cin >> arr3[i];
    }
    sort(arr1, 5);
    sort(arr2, 5);
    sort(arr3, 5);
    for(int i = 0; i < 5; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << arr3[i] << " ";
    }
    cout << endl;
}