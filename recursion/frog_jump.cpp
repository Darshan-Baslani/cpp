#include<iostream>
using namespace std;

int frog(int arr[], int n, int idx) {
    if(n==idx) return 0;
    if(idx == (n-1)) return frog(arr,n,idx+1);

    return min(frog(arr,n,idx+2) + abs(arr[idx] - arr[idx+2]), frog(arr,n,idx+1) + abs(arr[idx] - arr[idx+1]));
}

int main() {

    int n=4;
    int arr[] = {10,30,40,20};

    cout<<frog(arr,n,0);

    return 0;
}