# 459. Repeated Substring Pattern

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=flat-square)](https://leetcode.com/problems/repeated-substring-pattern/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Repeated Substring Pattern](https://leetcode.com/problems/repeated-substring-pattern/) &nbsp;|&nbsp; **📅 Date Solved:** 16 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** String, String Matching

---

## 📋 Problem Statement

Given a string `s`, check if it can be constructed by taking a substring of it and appending multiple copies of the substring together.

 

Example 1:**

```

**Input:** s = "abab"
**Output:** true
**Explanation:** It is the substring "ab" twice.

```

Example 2:**

```

**Input:** s = "aba"
**Output:** false

```

Example 3:**

```

**Input:** s = "abcabcabcabc"
**Output:** true
**Explanation:** It is the substring "abc" four times or the substring "abcabc" twice.

```

 

**Constraints:**

	• `1 <= s.length <= 104`

	• `s` consists of lowercase English letters.

---

## ✅ Accepted C++ Solution

```cpp
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        doubled = doubled.substr(1, doubled.size() - 2); // trim first & last char
        return doubled.find(s) != string::npos;
    }
};
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 3 ms (beats 87.8%) |
| 💾 Memory  | 15.2 MB (beats 82.0%)  |

---

## 🏷️ Topics

`String` · `String Matching`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
