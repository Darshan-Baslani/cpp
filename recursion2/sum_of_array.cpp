#include <iostream>
using namespace std;

int sum_of_array(int arr[], int i, int n) {
  if (i == n - 1)
    return arr[i];
  return (arr[i] + sum_of_array(arr, ++i, n));
}

int main() {
  int arr[] = {1, 2, 3};
  cout << sum_of_array(arr, 0, 3);
  return 0;
}
