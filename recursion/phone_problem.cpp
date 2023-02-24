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
#include<vector>
using namespace std; 

void f(string x, int i,string ans, vector<string> &v) {
    if(i == x.length()) {
        v.push_back(ans);
        return;
    }
    switch(x[i]) {
        case '2':
            f(x, i+1, ans+'a', v);
            f(x, i+1, ans+'b', v);
            f(x, i+1, ans+'c', v);
            break;
        case '3':
            f(x, i+1, ans+'d', v);
            f(x, i+1, ans+'e', v);
            f(x, i+1, ans+'f', v);
            break;
        case '4':
            f(x, i+1, ans+'g', v);
            f(x, i+1, ans+'h', v);
            f(x, i+1, ans+'i', v);
            break;
        case '5':
            f(x, i+1, ans+'j', v);
            f(x, i+1, ans+'k', v);
            f(x, i+1, ans+'l', v);
            break;
        case '6':
            f(x, i+1, ans+'m', v);
            f(x, i+1, ans+'n', v);
            f(x, i+1, ans+'o', v);
            break;
        case '7':
            f(x, i+1, ans+'p', v);
            f(x, i+1, ans+'q', v);
            f(x, i+1, ans+'r', v);
            f(x, i+1, ans+'s', v);
            break;
        case '8':
            f(x, i+1, ans+'t', v);
            f(x, i+1, ans+'u', v);
            f(x, i+1, ans+'v', v);
            break;
        case '9':
            f(x, i+1, ans+'w', v);
            f(x, i+1, ans+'x', v);
            f(x, i+1, ans+'y', v);
            f(x, i+1, ans+'z', v);
            break;
    }
}

int main() {
    vector<string> v;
    string x = "23";
    f(x, 0, "", v);
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
