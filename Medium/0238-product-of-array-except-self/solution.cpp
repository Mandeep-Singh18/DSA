/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 238. Product of Array Except Self
 * │  Difficulty: Medium
 * │  Tags      : Array, Prefix Sum
 * │  URL       : https://leetcode.com/problems/product-of-array-except-self/
 * │  Language  : C++
 * │  Date      : 2026-07-13
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);

        int left = 1;
        for (int i = 0; i < nums.size(); i++) {
            output[i] *= left;
            left *= nums[i];
        }

        int right = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            output[i] *= right;
            right *= nums[i];
        }

        return output; 
    }
};
