//given a vector arr[] sorted in increasing order of n size and an integer x, find out if there exists a pair in the array which sum is exactly x.
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {2,3,5,5,9};
    int x;
    cout<<"Enter x: "; cin>>x;
    int left=0;
    int right = arr.size()-1;
    int indicator=0;
    while(left<right){

        if(arr[left]+arr[right] == x){
            cout<<"Yes";
            indicator=1;
            
            break;
        }else if(arr[left]+arr[right] < x){
            left++;
        }else{
            right--;
        }

    }

    if(indicator==0) cout<<"No";

    return 0;
}