# 41. First Missing Positive

[![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red?style=flat-square)](https://leetcode.com/problems/first-missing-positive/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [First Missing Positive](https://leetcode.com/problems/first-missing-positive/) &nbsp;|&nbsp; **📅 Date Solved:** 13 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, Hash Table

---

## 📋 Problem Statement

Given an unsorted integer array `nums`. Return the _smallest positive integer_ that is _not present_ in `nums`.

You must implement an algorithm that runs in `O(n)` time and uses `O(1)` auxiliary space.

 

Example 1:**

```

**Input:** nums = [1,2,0]
**Output:** 3
**Explanation:** The numbers in the range [1,2] are all in the array.

```

Example 2:**

```

**Input:** nums = [3,4,-1,1]
**Output:** 2
**Explanation:** 1 is in the array but 2 is missing.

```

Example 3:**

```

**Input:** nums = [7,8,9,11,12]
**Output:** 1
**Explanation:** The smallest positive integer 1 is missing.

```

 

**Constraints:**

	• `1 <= nums.length <= 105`

	• `-231 <= nums[i] <= 231 - 1`

---

## ✅ Accepted C++ Solution

```cpp
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int contains = 0;

        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) contains++;
            if(nums[i] <= 0 || nums[i] > n) {
                nums[i] = 1;
            }
        }

        if(contains == 0) return 1;

        for(int i = 0; i < n; i++) {
            int a = abs(nums[i]);

            if(a == n){
                nums[0] = -abs(nums[0]); 
            } else {
                nums[a] = -abs(nums[a]);
            }
        }

        for(int i = 1;i < n;i++) {
            if(nums[i] > 0){
                return i;
            }
        }

        if(nums[0] > 0) {
            return n;
        }

        return n+1;
    }
};
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 3 ms (beats 53.1%) |
| 💾 Memory  | 55 MB (beats 86.0%)  |

---

## 🏷️ Topics

`Array` · `Hash Table`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
