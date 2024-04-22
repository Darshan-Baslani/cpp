#include<iostream>
using namespace std;

void f(string x, int i, string ans){
    if(i == x.length()){
        cout<<ans<<" ";
        return;
    }
    f(x,i+1,ans + x[i]);
    f(x,i+1,ans);
}

int main() {

    string x = "abc";
    f(x,0,"");

    return 0;
}