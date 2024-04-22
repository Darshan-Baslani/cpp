#include<iostream>
using namespace std;

void sort(string city[], int n) {
    for(int i=0; i<n; i++) {
        int min_idx=i;
        for(int j=i+1; j<n; j++) {
            if(city[min_idx] > city[j]) {
                min_idx = j;
            }
        }
        swap(city[min_idx],city[i]);
    }    
}

int main() {

    int n;
    cout<<"Enter no of city you want to enter: ";
    cin>>n;
    string city[n];
    for(int i=0; i<n; i++) {
        cout<<"Enter city: ";
        cin>>city[i];
    }

    sort(city,n);

    cout<<"\nSorted Order:\n";
    for(int i=0; i<n; i++) {
        cout<<city[i]<<" ";
    }

    return 0;
}