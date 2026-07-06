# 1. Two Sum

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=flat-square)](https://leetcode.com/problems/two-sum/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Two Sum](https://leetcode.com/problems/two-sum/) &nbsp;|&nbsp; **📅 Date Solved:** 6 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, Hash Table

---

## 📋 Problem Statement

Given an array of integers `nums` and an integer `target`, return _indices of the two numbers such that they add up to `target`_.

You may assume that each input would have **_exactly_ one solution**, and you may not use the _same_ element twice.

You can return the answer in any order.

 

Example 1:**

```

**Input:** nums = [2,7,11,15], target = 9
**Output:** [0,1]
**Explanation:** Because nums[0] + nums[1] == 9, we return [0, 1].

```

Example 2:**

```

**Input:** nums = [3,2,4], target = 6
**Output:** [1,2]

```

Example 3:**

```

**Input:** nums = [3,3], target = 6
**Output:** [0,1]

```

 

**Constraints:**

	• `2 <= nums.length <= 104`

	• `-109 <= nums[i] <= 109`

	• `-109 <= target <= 109`

	• **Only one valid answer exists.**

 

**Follow-up: **Can you come up with an algorithm that is less than `O(n2)` time complexity?

---

## ✅ Accepted C++ Solution

```cpp
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
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 14.8 MB (beats 37.5%)  |

---

## 🏷️ Topics

`Array` · `Hash Table`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
