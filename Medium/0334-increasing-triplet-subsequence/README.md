# 334. Increasing Triplet Subsequence

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange?style=flat-square)](https://leetcode.com/problems/increasing-triplet-subsequence/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Increasing Triplet Subsequence](https://leetcode.com/problems/increasing-triplet-subsequence/) &nbsp;|&nbsp; **📅 Date Solved:** 13 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, Greedy

---

## 📋 Problem Statement

Given an integer array `nums`, return `true`_ if there exists a triple of indices _`(i, j, k)`_ such that _`i < j < k`_ and _`nums[i] < nums[j] < nums[k]`. If no such indices exists, return `false`.

 

Example 1:**

```

**Input:** nums = [1,2,3,4,5]
**Output:** true
**Explanation:** Any triplet where i < j < k is valid.

```

Example 2:**

```

**Input:** nums = [5,4,3,2,1]
**Output:** false
**Explanation:** No triplet exists.

```

Example 3:**

```

**Input:** nums = [2,1,5,0,4,6]
**Output:** true
**Explanation:** One of the valid triplet is (1, 4, 5), because nums[1] == 1 < nums[4] == 4 < nums[5] == 6.

```

 

**Constraints:**

	• `1 <= nums.length <= 5 * 105`

	• `-231 <= nums[i] <= 231 - 1`

 

**Follow up:** Could you implement a solution that runs in `O(n)` time complexity and `O(1)` space complexity?

---

## ✅ Accepted C++ Solution

```cpp
class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int min1 = INT_MAX;
        int min2 = INT_MAX;
        for(int n : nums) {
            if(n <= min1) {
                min1 = n;  
            } else if(n <= min2) {
                min2 = n; 
            } else {
                return true;  
            }
        }
        return false;  
    }
};
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 1 ms (beats 48.7%) |
| 💾 Memory  | 115.6 MB (beats 67.8%)  |

---

## 🏷️ Topics

`Array` · `Greedy`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
