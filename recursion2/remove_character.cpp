#include <iostream>
#include <string>
using namespace std;

string remove_char(string &str, int n, int i) {
  if (str[i] == 'a') {
    str[i] = '\0';
  }
  if (i == n - 1) {
    return str;
  }
  remove_char(str, n, ++i);
  return str;
}

int main() {
  string str = "abcaccadc";
  cout << str << endl;
  cout << remove_char(str, str.length(), 0);
  return 0;
}
