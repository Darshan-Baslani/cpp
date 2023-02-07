#include<iostream>
using namespace std;

int sum(int *arr, int n, int idx) {
    if(idx == n-1)
        return arr[idx];

    return arr[idx]+sum(arr,n,idx+1);
}

int main() {

    int arr[] = {2,3,5,20,1};
    int n=5;
    cout<<sum(arr,n,0);

    return 0;
}