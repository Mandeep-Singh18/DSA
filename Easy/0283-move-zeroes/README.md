# 283. Move Zeroes

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=flat-square)](https://leetcode.com/problems/move-zeroes/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Move Zeroes](https://leetcode.com/problems/move-zeroes/) &nbsp;|&nbsp; **📅 Date Solved:** 7 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, Two Pointers

---

## 📋 Problem Statement

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

**Note** that you must do this in-place without making a copy of the array.

 

Example 1:**

```
**Input:** nums = [0,1,0,3,12]
**Output:** [1,3,12,0,0]

```
Example 2:**

```
**Input:** nums = [0]
**Output:** [0]

```

 

**Constraints:**

	• `1 <= nums.length <= 104`

	• `-231 <= nums[i] <= 231 - 1`

 

**Follow up:** Could you minimize the total number of operations done?

---

## ✅ Accepted C++ Solution

```cpp
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
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 23.9 MB (beats 19.1%)  |

---

## 🏷️ Topics

`Array` · `Two Pointers`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
