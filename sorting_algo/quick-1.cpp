#include<iostream> 
using namespace std;

int partision(int arr[], int f, int l) {
    int pivot = arr[l];

    int i=f-1;
    for(int j=f; j<l; j++) {
        if(arr[j] < pivot) {
            swap(arr[++i],arr[j]);
        }
    }
    swap(arr[++i],arr[l]);
    return i;
}

void quick_sort(int arr[], int l, int r) {
    if(l>=r)    return;

    int pi = partision(arr,l,r);
    quick_sort(arr,l,pi-1);
    quick_sort(arr,pi+1,r);
}

int main() {

    int arr[] = {18,12,30,16,35,20};
    int n = sizeof(arr) / sizeof(arr[0]);

    quick_sort(arr,0,n-1);

    for(int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }

    return 0;
}