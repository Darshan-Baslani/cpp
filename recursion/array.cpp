#include<iostream>
#include<vector>
using namespace std;

int temp(vector<int> v, int index) {
    if(index == v.size()-1){
        cout<<v[index];
        return index;
    }

    cout<<v[index];
    return temp(v,index+1);
}

int main() {

    vector<int> v = {1,2,3,4,5,6};
    int index = 0;
    int x = temp(v,index);

    return 0;
}