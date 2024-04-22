#include<iostream>
using namespace std;

bool armStrong(int n, int &ans) {
    if(n<=0)
        return true;
    int rem = n%10;
    ans += rem*rem*rem;
    armStrong(n/10,ans);
    return ans==n?true:false;
}
        
int main() {

    int n;
    cout<<"Enter any no: ";
    cin>>n;
    int ans = 0;
    cout<<armStrong(n,ans);

    return 0;
}