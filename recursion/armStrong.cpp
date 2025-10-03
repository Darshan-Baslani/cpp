#include <iostream>
using namespace std;

int armStrong(int n, int &ans) {
  if (n <= 0) {
    return ans;
  }
  int rem = n % 10;
  ans += rem * rem * rem;
  ans = armStrong(n / 10, ans);
  return ans == n ? 1 : ans;
}

int main() {

  int n = 152;
  // cout << "Enter any no: ";
  // cin >> n;
  int ans = 0;
  if (armStrong(n, ans) == 1) {
    cout << "no. is armStrong";
  } else {
    cout << "no. is not armstrong";
  }

  return 0;
}
