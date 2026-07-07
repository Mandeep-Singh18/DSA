/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 283. Move Zeroes
 * │  Difficulty: Easy
 * │  Tags      : Array, Two Pointers
 * │  URL       : https://leetcode.com/problems/move-zeroes/
 * │  Language  : C++
 * │  Date      : 2026-07-07
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] != 0) {
                swap(nums[right], nums[left]);
                left++;
            }
        } 
    }
};
