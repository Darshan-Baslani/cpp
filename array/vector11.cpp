//given a vector arr[] sorted in increasing order of n size and an integer x, find out if there exists a pair in the array which sum is exactly x.
#include<iostream>
#include<vector>
using namespace std;

int main()
{

    vector<int> arr = {1,2,4,6,8,9};
    int x;
    cout<<"Enter x:"; cin>>x;
    int indicator=0;
    for(int i=0; i<arr.size(); i++)
    {
        for(int j=0; j<arr.size(); j++)
        {
            if(arr[i] + arr[j] == x) indicator=1;
            if(indicator==1) cout<<arr[i]<<" "<<arr[j]<<endl;
            indicator=0;    
            
        }
        
    }

    return 0;
}