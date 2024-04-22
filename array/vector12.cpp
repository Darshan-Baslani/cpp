//given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists a pair whose abosulute difference is exactly x.
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> arr = {-3,-1,1,6,8,12,15,19};
    int x,left=0, right=1,diff,n=arr.size(); 
    cout<<"Enter x: ";
    cin>> x;
    bool condition = false;
    while(left<n and right<n) {
        diff=arr[right]-arr[left];
        if(diff == x) {
            cout<<"YES";
            condition = true;
            break;
        }else if(diff < x) {
            right++;
        } else {
            left++;
        }

    }
    if(condition==false) cout<<"NO";
    return 0;
}