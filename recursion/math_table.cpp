#include<iostream>
using namespace std;

void table(int num, int k, int idx) {
    if(idx == k){
        cout<<num*idx<<endl;
        return;
    }
    cout<<num*idx<<endl;
    table(num, k, idx+1);
    
    return;
}

int main() {

    int num,k;
    cout<<"Enter num and k: "; cin>>num>>k;

    table(num,k,1);

    return 0;
}