# 14. Longest Common Prefix

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=flat-square)](https://leetcode.com/problems/longest-common-prefix/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Longest Common Prefix](https://leetcode.com/problems/longest-common-prefix/) &nbsp;|&nbsp; **📅 Date Solved:** 14 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, String, Trie

---

## 📋 Problem Statement

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string `""`.

 

Example 1:**

```

**Input:** strs = ["flower","flow","flight"]
**Output:** "fl"

```

Example 2:**

```

**Input:** strs = ["dog","racecar","car"]
**Output:** ""
**Explanation:** There is no common prefix among the input strings.

```

 

**Constraints:**

	• `1 <= strs.length <= 200`

	• `0 <= strs[i].length <= 200`

	• `strs[i]` consists of only lowercase English letters if it is non-empty.

---

## ✅ Accepted C++ Solution

```cpp
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end());
        int v = strs.size();

        string first = strs[0], last = strs[v-1];

        for(int i = 0; i < min(first.size(), last.size()); i++) {
            if(first[i] != last[i]) {
                return ans;
            }else {
                ans += first[i];
            }

        }

        return ans;
    }
};
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 12 MB (beats 26.7%)  |

---

## 🏷️ Topics

`Array` · `String` · `Trie`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
