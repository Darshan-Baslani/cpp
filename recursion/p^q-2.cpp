#include<iostream>
 using namespace std;

int power(int p, int q) {
    if(q==1)
        return p;


    
    if(q%2==0)
        return power(p,q/2) * power(p,q/2);
    else    
        return p*(power(p,q/2) * power(p,q/2));
}

 int main() {

    int p,q;
    cout<<"Enter p and q: ";
    cin>>p>>q;

    cout<<power(p,q);

    return 0;
 }