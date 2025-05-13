// Problem 1: Two Sum 
// Link : https://leetcode.com/problems/two-sum/description/

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            vector<int> temp = {-1, -1};
            for(int i=0; i<nums.size(); i++) {
                for(int j=i+1; j<nums.size(); j++) {
                    if((nums[i] + nums[j]) == target){
                        vector<int> ans = {i, j};
                        return ans;
                    }
                }
            }
            return temp;
            
        }
};
