// 3005
// https://leetcode.com/problems/count-elements-with-maximum-frequency/description/
// (easy)
#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
  public:
    int maxFrequencyElements(std::vector<int> &nums) {
      std::unordered_map<int, int> mp;
      for (int ele : nums) {
        mp[ele] += 1;
      }
      int maxValue = 0;
      for (auto ele : mp) {
        if (maxValue < ele.second) {
          maxValue = ele.second;
        }
      }
      int maxValueOccurences = 0;
      int maxKey = 0;
      for (auto ele: mp) {
        if (maxValue == ele.second) {
          maxValueOccurences++;
        }
      }
      return maxValue==1?(nums.size()):maxValueOccurences>1?maxValue*maxValueOccurences:maxValue;
    }
  };
  