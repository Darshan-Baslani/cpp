// the approach used here is quite simple
// imagine how would you find power of big numbers
// ex : 2^6
// an easy way would be to multiple 2^3 * 2^3
// 2^3 is easy to find compared to 2^6
// for odd power we can do 2 * 2^3 * 2^3

#include <iostream>
using namespace std;

int power(int a, int b) {
  if (b == 1)
    return a;
  if (b % 2 == 0)
    return power(a, b / 2) * power(a, b / 2);
  else
    return a * power(a, b / 2) * power(a, b / 2);
}

int main() {
  cout << power(5, 3);
  return 0;
}
