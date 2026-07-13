# 2348. Number of Zero-Filled Subarrays

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange?style=flat-square)](https://leetcode.com/problems/number-of-zero-filled-subarrays/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Number of Zero-Filled Subarrays](https://leetcode.com/problems/number-of-zero-filled-subarrays/) &nbsp;|&nbsp; **📅 Date Solved:** 13 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, Math

---

## 📋 Problem Statement

Given an integer array `nums`, return _the number of **subarrays** filled with _`0`.

A **subarray** is a contiguous non-empty sequence of elements within an array.

 

Example 1:**

```

**Input:** nums = [1,3,0,0,2,0,0,4]
**Output:** 6
**Explanation:** 
There are 4 occurrences of [0] as a subarray.
There are 2 occurrences of [0,0] as a subarray.
There is no occurrence of a subarray with a size more than 2 filled with 0. Therefore, we return 6.
```

Example 2:**

```

**Input:** nums = [0,0,0,2,0,0]
**Output:** 9
**Explanation:
**There are 5 occurrences of [0] as a subarray.
There are 3 occurrences of [0,0] as a subarray.
There is 1 occurrence of [0,0,0] as a subarray.
There is no occurrence of a subarray with a size more than 3 filled with 0. Therefore, we return 9.

```

Example 3:**

```

**Input:** nums = [2,10,2019]
**Output:** 0
**Explanation:** There is no subarray filled with 0. Therefore, we return 0.

```

 

**Constraints:**

	• `1 <= nums.length <= 105`

	• `-109 <= nums[i] <= 109`

---

## ✅ Accepted C++ Solution

```cpp
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
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 3 ms (beats 40.4%) |
| 💾 Memory  | 111.4 MB (beats 42.1%)  |

---

## 🏷️ Topics

`Array` · `Math`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
