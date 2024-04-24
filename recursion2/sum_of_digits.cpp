#include <iostream>
using namespace std;

int sum_of_digits(int n) {
  if (n <= 9) {
    return n;
  }
  return (n % 10) + sum_of_digits(n / 10);
}

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;
  cout << sum_of_digits(n);
  return 0;
}
