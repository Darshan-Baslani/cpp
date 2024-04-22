// first 4 no would be 1, 1, 1, 1
// fibonacci of 5 th no woluld be the first no after 1, 1, 1, 1, ?
#include <iostream>
using namespace std;

int fibonacci(int n) {
  if (n <= 1)
    return 1;
  return fibonacci(n - 1) + fibonacci(n - 2) + fibonacci(n - 3) +
         fibonacci(n - 4);
}

int main() {
  cout << fibonacci(5 - 3);
  return 0;
}
