# 686. Repeated String Match

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange?style=flat-square)](https://leetcode.com/problems/repeated-string-match/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Repeated String Match](https://leetcode.com/problems/repeated-string-match/) &nbsp;|&nbsp; **📅 Date Solved:** 16 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** String, String Matching

---

## 📋 Problem Statement

Given two strings `a` and `b`, return _the minimum number of times you should repeat string _`a`_ so that string_ `b` _is a substring of it_. If it is impossible for `b`​​​​​​ to be a substring of `a` after repeating it, return `-1`.

**Notice:** string `"abc"` repeated 0 times is `""`, repeated 1 time is `"abc"` and repeated 2 times is `"abcabc"`.

 

Example 1:**

```

**Input:** a = "abcd", b = "cdabcdab"
**Output:** 3
**Explanation:** We return 3 because by repeating a three times "ab**cdabcdab**cd", b is a substring of it.

```

Example 2:**

```

**Input:** a = "a", b = "aa"
**Output:** 2

```

 

**Constraints:**

	• `1 <= a.length, b.length <= 104`

	• `a` and `b` consist of lowercase English letters.

---

## ✅ Accepted C++ Solution

```cpp
class Solution {
private:
    int BASE = 1000000;
public:
    int repeatedStringMatch(string A, string B) {
        if(A == B) return 1;
        int count = 1;
        string source = A;
        while(source.size() < B.size()){
            count++;
            source+=A;
        }
        if(source == B) return count;
        if(Rabin_Karp(source,B) != -1) return count;
        if(Rabin_Karp(source+A,B) != -1) return count+1;
        return -1;
    }
    int Rabin_Karp(string source, string target){
        if(source == "" or target == "") return -1;
        int m = target.size();
        int power = 1;
        for(int i = 0;i<m;i++){
            power = (power*31)%BASE;
        }
        int targetCode = 0;
        for(int i = 0;i<m;i++){
            targetCode = (targetCode*31+target[i])%BASE;
        }
        int hashCode = 0;
        for(int i = 0;i<source.size();i++){
            hashCode = (hashCode*31 + source[i])%BASE;
            if(i<m-1) continue;
            if(i>=m){
                hashCode = (hashCode-source[i-m]*power)%BASE;
            }
            if(hashCode<0)
                hashCode+=BASE;
            if(hashCode == targetCode){
                if(source.substr(i-m+1,m) == target)
                    return i-m+1;
            }
        }
        return -1;
    }
};
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 10.3 MB (beats 29.9%)  |

---

## 🏷️ Topics

`String` · `String Matching`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
