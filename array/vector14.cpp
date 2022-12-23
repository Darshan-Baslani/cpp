//given a vector arr[] sorted in increasing order of n size and an integer x, find the pairs that exists in the array whose sum is exactly x.
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> arr = {1,3,3,5};
    int x=6,n=arr.size();

    int left=0, right=n-1,counter=0;
    while(left<right) {
        if(arr[left]+arr[right] == x) {
            cout<<arr[left++]<<" "<<arr[right--]<<endl;
            counter++;
        }else if(arr[left]+arr[right] < x) {
            left++;               
        }else{
            right--;
        }
    }
    cout<<"No of pairs = "<<counter<<endl;

    return 0;
}