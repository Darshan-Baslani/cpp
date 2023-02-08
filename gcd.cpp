#include<iostream>
using namespace std;

int gcd(int n1, int n2, int idx, int &hcf) {
    if(idx > n1 or idx > n2)
        return 1;

    if(n1%idx == 0 and n2%idx == 0 and idx>hcf)
        hcf = idx;
    gcd(n1,n2,idx+1,hcf);
    return hcf;
}

int main() {

    int n1,n2,hcf=1;
    cout<<"Enter two no: "; 
    cin>>n1>>n2;
    if(n1>n2)
        n1 -= n2;
    else    
        n2 -= n1;
    cout<<gcd(n1,n2,1,hcf);

    return 0;
}