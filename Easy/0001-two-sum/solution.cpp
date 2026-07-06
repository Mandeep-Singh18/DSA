/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 1. Two Sum
 * │  Difficulty: Easy
 * │  Tags      : Array, Hash Table
 * │  URL       : https://leetcode.com/problems/two-sum/
 * │  Language  : C++
 * │  Date      : 2026-07-06
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> mpp;

        for(int i = 0; i < nums.size(); i++){
            int num = nums[i];
            int moreneeded = target - num;
            if(mpp.find(moreneeded) != mpp.end()){
                return {mpp[moreneeded], i};
            }
            mpp[num] = i;
        }
        return {};
    }
};
