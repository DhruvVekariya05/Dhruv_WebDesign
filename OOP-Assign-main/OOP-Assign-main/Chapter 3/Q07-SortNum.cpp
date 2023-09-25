#include<iostream>

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

int main(){
    int n;
    cout << "Enter Array length";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers";
    for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, n);
    cout << "Sorted Array : " << endl;
    for (int i = 0; i < n;i++){
        cout << " " << arr[i] << " ";
    };
}