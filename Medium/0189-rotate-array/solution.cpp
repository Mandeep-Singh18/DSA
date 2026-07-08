/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 189. Rotate Array
 * │  Difficulty: Medium
 * │  Tags      : Array, Math, Two Pointers
 * │  URL       : https://leetcode.com/problems/rotate-array/
 * │  Language  : C++
 * │  Date      : 2026-07-08
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+ k);
        reverse(nums.begin()+ k, nums.end());
    }
};
