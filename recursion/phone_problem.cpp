/* Given a string containing digits from 2-9 inclusive, return all possible letter combination that the number could present
2 = a,b,c
3 = d,e,f
4 = g,h,i
5 = j,k,l
6 = m,n,o 
7 = p,q,r,s
8 = t,u,v
9 = w,x,y,z
 */
#include<iostream>
using namespace std; 

void f(string x, int i,string ans) {
    if(i == x.length()) {
        cout<<ans<<" ";
        return;
    }
    f(x,i+1,ans + x[i]);
    f(x,i+1,ans);
}

int main() {

    string x = "23";
    string s2 = "abc";
    string s3 = "def";
    string s4 = "ghi";
    string s5 = "jkl";
    string s6 = "mno";
    string s7 = "pqrs";
    string s8 = "tuv";
    string s9 = "wxyz";
    //f("",0,"");
    for(int i=0; i<x.length(); i++) {
        switch(x[i]) {
            case '2':
                f(s2,0,"");
                break;
            case '3':
                f(s3,0,"");
                break;
            case '4':
                f(s4,0,"");
                break;
            case '5':
                f(s5,0,"");
                break;
            case '6':
                f(s6,0,"");
                break;
            case '7':
                f(s7,0,"");
                break;
            case '8':
                f(s8,0,"");
                break;
            case '9':
                f(s9,0,"");
                break;
            default:
                cout<<"Invalid input";
                break;
        }
    }

    return 0;
}