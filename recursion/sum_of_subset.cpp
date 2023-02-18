#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> result;

void f(int *arr, int idx, int n, int sum) {
    if(idx == n) {
        result.push_back(sum);
        return;
    }

    f(arr, idx+1, n, (sum + arr[idx]));
    f(arr, idx+1, n, sum);
}

int main() {

    int arr[] = {2,3,5};

    f(arr,0,3,0);
    sort(result.begin(), result.end());
    for(int i=0; i<result.size(); i++) {
        cout<<result[i]<<" ";
    }

    return 0;
}