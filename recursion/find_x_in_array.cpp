#include<iostream>
using namespace std;

bool f(int *arr, int x, int n,int idx) {
    if(idx == (n-1))
        return false;
    if(arr[idx] == x)
        return true;
    f(arr,x,n,idx+1);
}

int main() {
    int arr[] = {4,12,54,14,3,8,6,1}, x=14, n=8;

    cout<<f(arr,x,n,0);

    return 0;
}