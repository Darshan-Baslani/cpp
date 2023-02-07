#include<iostream>
using namespace std;
//input = 5, output =3
//explain: 1-2+3-4+5 = 3 
//input = 10, output = -5
//ex : 1-2+3-4+5-6+7-8+9-10 = -5
int alterSum(int n, int idx) {
    if(n==idx){
        if(n%2==0){
            return -(idx);
        }else{
            return idx;
        }
    }
    if(idx%2==0)
        idx = -(idx);

    return idx + alterSum(n,abs(idx)+1);
}

int main() {

    int n;
    cout<<"Enter n: "; cin>>n;
    
    cout<<alterSum(n,1);

    return 0;
}