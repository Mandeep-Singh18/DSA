# 125. Valid Palindrome

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=flat-square)](https://leetcode.com/problems/valid-palindrome/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Valid Palindrome](https://leetcode.com/problems/valid-palindrome/) &nbsp;|&nbsp; **📅 Date Solved:** 14 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Two Pointers, String

---

## 📋 Problem Statement

A phrase is a **palindrome** if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true`_ if it is a **palindrome**, or _`false`_ otherwise_.

 

Example 1:**

```

**Input:** s = "A man, a plan, a canal: Panama"
**Output:** true
**Explanation:** "amanaplanacanalpanama" is a palindrome.

```

Example 2:**

```

**Input:** s = "race a car"
**Output:** false
**Explanation:** "raceacar" is not a palindrome.

```

Example 3:**

```

**Input:** s = " "
**Output:** true
**Explanation:** s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

**Constraints:**

	• `1 <= s.length <= 2 * 105`

	• `s` consists only of printable ASCII characters.

---

## ✅ Accepted C++ Solution

```cpp
class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int end=s.size()-1;
        while(start<=end){

            if(!isalnum(s[start])){start++; continue;}
            if(!isalnum(s[end])){end--;continue;}

            if(tolower(s[start])!=tolower(s[end]))return false; 
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 9.9 MB (beats 78.1%)  |

---

## 🏷️ Topics

`Two Pointers` · `String`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
