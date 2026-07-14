# 392. Is Subsequence

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=flat-square)](https://leetcode.com/problems/is-subsequence/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Is Subsequence](https://leetcode.com/problems/is-subsequence/) &nbsp;|&nbsp; **📅 Date Solved:** 14 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Two Pointers, String, Dynamic Programming

---

## 📋 Problem Statement

Given two strings `s` and `t`, return `true`_ if _`s`_ is a **subsequence** of _`t`_, or _`false`_ otherwise_.

A **subsequence** of a string is a new string that is formed from the original string by deleting some (can be none) of the characters without disturbing the relative positions of the remaining characters. (i.e., `"ace"` is a subsequence of `"abcde"` while `"aec"` is not).

 

Example 1:**

```
**Input:** s = "abc", t = "ahbgdc"
**Output:** true

```
Example 2:**

```
**Input:** s = "axc", t = "ahbgdc"
**Output:** false

```

 

**Constraints:**

	• `0 <= s.length <= 100`

	• `0 <= t.length <= 104`

	• `s` and `t` consist only of lowercase English letters.

 

**Follow up:** Suppose there are lots of incoming `s`, say `s1, s2, ..., sk` where `k >= 109`, and you want to check one by one to see if `t` has its subsequence. In this scenario, how would you change your code?

---

## ✅ Accepted C++ Solution

```cpp
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;

        while(i < s.size() && j < t.size()) {
            if(s[i] == t[j]) {
                i++;
                j++;
            }else {
                j++;
            }
        }

        return i == s.size();
    }
};
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 8.7 MB (beats 33.1%)  |

---

## 🏷️ Topics

`Two Pointers` · `String` · `Dynamic Programming`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
