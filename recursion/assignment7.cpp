/*
Given a string, remove adjacent duplicates characters from it. In other words, remove all
consecutive same characters except one using recursion.
Input: aabbbbcdd
Output: abcd
Input 2: abbcddaaaerr
Output 2: abcdaer
*/
#include<iostream>
#include<string>
using namespace std;

string f(string s,int idx) {
    if(s[idx] == '\0'){
        return s;
    }
    if(s[idx] == s[idx-1]) {
        s.erase(idx,1);
        return f(s,idx);
    }else{
        return f(s,idx+1);
    }
    
}

int main() {
    
    string s;
    cout<<"Enter string: "; cin>>s;

    cout<<f(s,0);

    return 0;
}