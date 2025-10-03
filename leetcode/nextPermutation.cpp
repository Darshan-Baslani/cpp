/**
 * P31 : https://leetcode.com/problems/next-permutation/description/ (medium)
Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]
Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]
Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]
 */

#include <iostream>
#include <utility>
#include <vector>

class Solution {
public:
  void nextPermutation(std::vector<int> &nums) {
    if (nums.size() == 1)
      return;
    if (nums[nums.size() - 1] > nums[nums.size() - 2]) {
      std::swap(nums[nums.size() - 1], nums[nums.size() - 2]);
      return;
    }
  Iter:
    int iterCount = 0;
    for (int i = nums.size() - 1; i >= 1; i--) {
      if (nums[i] < nums[i - 1]) {
        std::swap(nums[i], nums[i - 1]);
        iterCount++;
      }
    }
    if (iterCount == nums.size() - 1)
      goto Iter;
  }
};
