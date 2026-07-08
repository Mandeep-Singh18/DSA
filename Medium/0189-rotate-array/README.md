# 189. Rotate Array

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange?style=flat-square)](https://leetcode.com/problems/rotate-array/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Rotate Array](https://leetcode.com/problems/rotate-array/) &nbsp;|&nbsp; **📅 Date Solved:** 8 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, Math, Two Pointers

---

## 📋 Problem Statement

Given an integer array `nums`, rotate the array to the right by `k` steps, where `k` is non-negative.

 

Example 1:**

```

**Input:** nums = [1,2,3,4,5,6,7], k = 3
**Output:** [5,6,7,1,2,3,4]
**Explanation:**
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

```

Example 2:**

```

**Input:** nums = [-1,-100,3,99], k = 2
**Output:** [3,99,-1,-100]
**Explanation:** 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]

```

 

**Constraints:**

	• `1 <= nums.length <= 105`

	• `-231 <= nums[i] <= 231 - 1`

	• `0 <= k <= 105`

 

**Follow up:**

	• Try to come up with as many solutions as you can. There are at least **three** different ways to solve this problem.

	• Could you do it in-place with `O(1)` extra space?

---

## ✅ Accepted C++ Solution

```cpp
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
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 29.7 MB (beats 45.1%)  |

---

## 🏷️ Topics

`Array` · `Math` · `Two Pointers`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
