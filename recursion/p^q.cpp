 #include<iostream>
 using namespace std;

int power(int p, int q) {
    if(q==1)
        return p;

    return p * power(p,q-1);
}

 int main() {

    int p,q;
    cout<<"Enter p and q: ";
    cin>>p>>q;

    cout<<power(p,q);

    return 0;
 }