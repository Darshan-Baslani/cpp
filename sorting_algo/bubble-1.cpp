#include<iostream>
#include<vector>
using namespace std;

void bubble_sort(vector<int> &v) {
    int n = v.size();

    for(int i=0; i<n-1; i++) {
        bool flag = false;
        for(int j=0; j<n-i-1; j++) {
            if(v[j] > v[j+1]) {
                flag = true;
                swap(v[j],v[j+1]);
            }
        }
        if(!flag) break;
    }

}

int main() {

    int n;
    cout<<"Enter length of vector: ";
    cin>>n;

    vector<int> v(n);

    for(int i=0; i<n; i++) {
        cout<<"Enter element: ";
        cin>>v[i];
    }

    bubble_sort(v);

    cout<<"\nSorted:\n";
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }

    return 0;
}