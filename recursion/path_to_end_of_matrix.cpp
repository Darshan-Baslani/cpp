#include<iostream>
using namespace std;

void f(int arr[2][3], int &ans, int n, int m, int n_idx, int m_idx) {
    if(n_idx == n-1 and m_idx == m-1){
        ans++;
        return;
    }
    if(n_idx == n-1){
        f(arr,ans,2,3,n_idx,m_idx + 1);
        return;
    }
    if(m_idx == m-1) {
        f(arr,ans,2,3,n_idx + 1,m_idx);
        return;
    }

    f(arr,ans,2,3,n_idx + 1,m_idx);
    f(arr,ans,2,3,n_idx,m_idx + 1);

}

int main() {

    int arr[2][3]={0};
    int ans=0;
    f(arr,ans,2,3,0,0);
    cout<<ans;

    return 0;
}