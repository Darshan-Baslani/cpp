#include<iostream>
#include<set>
using namespace std;

int main() {
  set<int> s1 = {1,2,3,4,5};

  for(int elem : s1) {
    cout<<elem<<" ";
  }
  cout<<endl;
  
  s1.insert(10);
  s1.insert(7);

  for(int elem : s1) {
    cout<<elem<<" ";
  }
  cout<<endl;

  s1.erase(10);

  for(int elem : s1) {
    cout<<elem<<" ";
  }
  cout<<endl;

  return 0;
}
