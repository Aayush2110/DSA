#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){

    for(int i = 0; i < n - 1; i++){

        bool swapped = false;   // Reset every pass

        for(int j = 0; j < n - i - 1; j++){

            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }

        }

        if(swapped == false){
            break;
        }
    }
}

int main(){

    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of array:\n";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bubblesort(arr, n);

    cout << "Sorted array is:\n";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}