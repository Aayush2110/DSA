#include<iostream>
using namespace std;
 
void selectionsort(int arr[], int n){

    for(int i=0;i<n-1;i++){

    int min_index=i;

    for(int j=i+1;j<n;j++){

        if(arr[j]<arr[min_index]){
            min_index=j;
        }
    }
    swap(arr[i], arr[min_index]);
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

    selectionsort(arr, n);

    cout << "Sorted array is:\n";

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}