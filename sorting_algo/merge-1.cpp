#include <iostream>
using namespace std;

void sort(int arr[], int l, int m, int r) {
  int n1 = m - l + 1;
  int n2 = r - m;
  int arr1[n1];
  int arr2[n2];
  int i = 0, j = 0, k = l;

  while (i < n1) {
    arr1[i++] = arr[k++];
  }

  while (j < n2) {
    arr2[j++] = arr[k++];
  }

  i = j = 0;
  k = l;

  while (i < n1 && j < n2) {
    if (arr1[i] < arr2[j]) {
      arr[k++] = arr1[i++];
    } else {
      arr[k++] = arr2[j++];
    }
  }

  while (i < n1) {
    arr[k++] = arr1[i++];
  }

  while (j < n2) {
    arr[k++] = arr2[j++];
  }
}

void merge(int arr[], int l, int r) {
  if (l < r) {
    int m = l + (r - l) / 2;
    merge(arr, l, m);
    merge(arr, m + 1, r);

    sort(arr, l, m, r);
  }
}

int main() {
  int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
  merge(arr, 0, 8);
  for (int i = 0; i < 9; i++) {
    cout << arr[i];
  }
  return 0;
}
