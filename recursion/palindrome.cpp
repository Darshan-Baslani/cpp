#include<iostream>
using namespace std;

int palindrome(int no) {
    if(no<=0)
        return 0;
    int ans=no%10;
    return palindrome(no/10)*10 + ans;
}

int main() {

    int no=121;
    int x,temp=0;
    x=palindrome(no);
    if(x==no)
        cout<<"Palindrome";
    else    
        cout<<"Not a Palindrome";

    return 0;
}