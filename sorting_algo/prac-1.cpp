//given an integer array arr, move all 0's to end of it while maintaning the relative order of non 0's element
//input = 050342   output = 534200 
#include<iostream>
using namespace std;

void f(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int temp = arr[i];
        int j=i-1; 
        bool flag=false;
        while(j>=0 and arr[j] == 0) {
            arr[j+1] = arr[j];
            j--;
            flag = true;
        }
        if(!flag) break;
        arr[j+1] = temp;
    }
}

int main() {

    int arr[] = {0,5,0,3,4,2},n=6;

    f(arr,n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}