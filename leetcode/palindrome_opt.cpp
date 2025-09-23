#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
      if (x < 0 || (x%10 == 0 && x!=0)) return false;
      int reversed = 0;
      while (x > reversed) {
        reversed = reversed*10 + x%10;
        x /= 10;
      }
      return (x == reversed/10) || (x == reversed);
    }
};

int main() {
  Solution *sol = new Solution();
  cout << sol->isPalindrome(121) << endl;
  return 0;
}

