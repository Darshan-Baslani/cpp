/*
Write a recursive program to efficiently print the reverse of a given string in C++.
Input 1: “collegewallah”
Output 1: “hallawegelloc”
Input 2: “pwskills”
Output2: “sllikswp”
*/
#include<iostream>
using namespace std;

string reverse(string s,int idx, string &rev) {

    if(s[idx] == '\0') {
        return rev + s[idx];
    }

    reverse(s,idx+1,rev);
    rev += s[idx];
    return rev;
}

int main() {

    string s,rev="";
    cout<<"Enter string: "; cin>>s;

    cout<<reverse(s,0,rev);

    return 0;
}