# 169. Majority Element

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=flat-square)](https://leetcode.com/problems/majority-element/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Majority Element](https://leetcode.com/problems/majority-element/) &nbsp;|&nbsp; **📅 Date Solved:** 7 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, Hash Table, Divide and Conquer, Sorting, Counting

---

## 📋 Problem Statement

Given an array `nums` of size `n`, return _the majority element_.

The majority element is the element that appears more than `&lfloor;n / 2&rfloor;` times. You may assume that the majority element always exists in the array.

 

Example 1:**

```
**Input:** nums = [3,2,3]
**Output:** 3

```
Example 2:**

```
**Input:** nums = [2,2,1,1,1,2,2]
**Output:** 2

```

 

**Constraints:**

	• `n == nums.length`

	• `1 <= n <= 5 * 104`

	• `-109 <= nums[i] <= 109`

	• The input is generated such that a majority element will exist in the array.

 

**Follow-up:** Could you solve the problem in linear time and in `O(1)` space?

---

## ✅ Accepted C++ Solution

```cpp
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
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 28.1 MB (beats 67.1%)  |

---

## 🏷️ Topics

`Array` · `Hash Table` · `Divide and Conquer` · `Sorting` · `Counting`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
