#include<iostream>
using namespace std;

int max_in_array(int *arr, int index,int n, int &max) {
    if(arr[index] > max)
        max = arr[index];
    if(index == n) 
        return max;
    
    return max_in_array(arr, index+1, n, max);
}

int main() {

    int arr[] = {2,4,6,1,5};
    int max = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<max_in_array(arr,0,n,max);

    return 0;
}