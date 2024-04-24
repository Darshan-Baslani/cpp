#include <iostream>
using namespace std;

int max_finder(int arr[], int n, int i, int &max) {
  if (arr[i] > max) {
    max = arr[i];
  }
  if (i == n - 1) {
    return max;
  }
  max_finder(arr, n, ++i, max);
  return max;
}

int main() {
  int arr[] = {1, 3, 5, 2, 6, 9};
  cout << max_finder(arr, 6, 0, arr[0]);
  return 0;
}
