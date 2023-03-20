#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {

    int n1 = m - l + 1;
    int n2 = r - m;

    int arr1[n1];
    int arr2[n2];

    for(int i=0; i<n1; i++) {
        arr1[i] = arr[l+i];
    }
    for(int i=0; i<n2; i++) {
        arr2[i] = arr[m+1+i];
    }

    int i=0,j=0,k=l;
    while(i<n1 and j<n2) {
        if(arr1[i] <= arr2[j]) {
            arr[k++] = arr1[i++];
        }else{
            arr[k++] = arr2[j++];
        }
    }

    while(i<n1) {
        arr[k++] = arr1[i++];
    }
    while(j<n2) {
        arr[k++] = arr2[j++];
    }

}
/*
void mergeSort(int arr[], int l, int r) {
    if(l>=r)    return;

    int mid = (l+r) / 2;
    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}*/

int main() {

    int arr[] = {1,3,7,9,2,4,6,8};
    int n = (sizeof(arr) / sizeof(arr[0])) - 1,m=n/2;
    merge(arr,0,m,n);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl; 
    return 0;
}