/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 2348. Number of Zero-Filled Subarrays
 * │  Difficulty: Medium
 * │  Tags      : Array, Math
 * │  URL       : https://leetcode.com/problems/number-of-zero-filled-subarrays/
 * │  Language  : C++
 * │  Date      : 2026-07-13
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
       long long cnt = 0, streak = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                streak++;
                cnt += streak;
            }
            else{
                streak = 0;
            }
        };

        return cnt;
    }
};
