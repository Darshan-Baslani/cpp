#include <iostream>
using namespace std;

int fibonacci(int n) {
  // base case
  if (n <= 1)
    return n;

  int ans = fibonacci(n - 2) + fibonacci(n - 1);
  return ans;
}

int main() {
  cout << fibonacci(10);
  return 0;
}
