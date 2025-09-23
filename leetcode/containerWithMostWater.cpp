// p11 https://leetcode.com/problems/container-with-most-water/ (medium)

#include <iostream>
#include <vector>

class Solution {
public:
  int maxArea(std::vector<int> &height) {
    int left = 0, right = height.size() - 1;
    int max = 0;
    while (left < right) {
      int area = (std::min(height[left], height[right]) * (right - left));
      if (max < area) {
        max = area;
      }

      if (height[left] < height[right])
        left++;
      else
        right--;
    }
    return max;
  }
};
