#include<iostream>
using namespace std;

string remove(string &s, int idx, int n) {
    string ans = "";
    if(idx == n)    return "";
    if(s[idx] == 'a')
        ans = "";
    else    
        ans = s[idx];

    return ans+remove(s,idx+1,n);
}

int main() {

    string s = "abaead";
    
    cout<<remove(s,0,s.size());

    return 0;
}