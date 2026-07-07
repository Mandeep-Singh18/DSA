/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 169. Majority Element
 * │  Difficulty: Easy
 * │  Tags      : Array, Hash Table, Divide and Conquer, Sorting, Counting
 * │  URL       : https://leetcode.com/problems/majority-element/
 * │  Language  : C++
 * │  Date      : 2026-07-07
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0; 
        int ele;

        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                count = 1;
                ele = nums[i];
            }
            else if(ele == nums[i]) count++;
            else count--;
        }

        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == ele){
                cnt++;
            } 
        }

        if(cnt > ((nums.size())/2)){
            return ele;
        }

        return -1;
    }
};
