#include <iostream>
#include <vector>
using namespace std;

int temp(vector<int> v, int index) {
  if (index == v.size() - 1) {
    cout << v[index];
    return index;
  }

  cout << v[index];
  return temp(v, index + 1);
}

int main() {

  vector<int> v = {4, 3, 2, 1, 56, 6, 8, 2, 0};
  int index = 0;
  int x = temp(v, index);

  return 0;
}
