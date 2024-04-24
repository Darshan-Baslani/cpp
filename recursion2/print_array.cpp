#include <iostream>
using namespace std;

void print_array(int arr[], int n, int i) {
  if (i == n - 1) {
    cout << arr[i] << " ";
    return;
  }
  cout << arr[i] << " ";
  print_array(arr, n, ++i);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  print_array(arr, 5, 0);
  return 0;
}
