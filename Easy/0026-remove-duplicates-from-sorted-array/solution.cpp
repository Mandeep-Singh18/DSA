/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 26. Remove Duplicates from Sorted Array
 * │  Difficulty: Easy
 * │  Tags      : Array, Two Pointers
 * │  URL       : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 * │  Language  : C++
 * │  Date      : 2026-07-07
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i-1]) {
                nums[l] = nums[i];
                l++;
            }
        }

        return l;
    }
};
