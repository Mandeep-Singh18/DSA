# 238. Product of Array Except Self

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange?style=flat-square)](https://leetcode.com/problems/product-of-array-except-self/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Product of Array Except Self](https://leetcode.com/problems/product-of-array-except-self/) &nbsp;|&nbsp; **📅 Date Solved:** 13 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, Prefix Sum

---

## 📋 Problem Statement

Given an integer array `nums`, return _an array_ `answer` _such that_ `answer[i]` _is equal to the product of all the elements of_ `nums` _except_ `nums[i]`.

The product of any prefix or suffix of `nums` is **guaranteed** to fit in a **32-bit** integer.

You must write an algorithm that runs in `O(n)` time and without using the division operation.

 

Example 1:**

```
**Input:** nums = [1,2,3,4]
**Output:** [24,12,8,6]

```
Example 2:**

```
**Input:** nums = [-1,1,0,-3,3]
**Output:** [0,0,9,0,0]

```

 

**Constraints:**

	• `2 <= nums.length <= 105`

	• `-30 <= nums[i] <= 30`

	• The input is generated such that `answer[i]` is **guaranteed** to fit in a **32-bit** integer.

 

**Follow up:** Can you solve the problem in `O(1)` extra space complexity? (The output array **does not** count as extra space for space complexity analysis.)

---

## ✅ Accepted C++ Solution

```cpp
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
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 40.4 MB (beats 45.4%)  |

---

## 🏷️ Topics

`Array` · `Prefix Sum`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
