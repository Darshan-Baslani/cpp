#include<iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int temp = arr[i];
        int j=i-1;
        while(j>=0 and arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main() {
    
    int arr[] = {1,3,6,0,2},n=5;

    selection_sort(arr,n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}