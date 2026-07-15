# 151. Reverse Words in a String

[![Difficulty](https://img.shields.io/badge/Difficulty-Medium-orange?style=flat-square)](https://leetcode.com/problems/reverse-words-in-a-string/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/) &nbsp;|&nbsp; **📅 Date Solved:** 15 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Two Pointers, String

---

## 📋 Problem Statement

Given an input string `s`, reverse the order of the **words**.

A **word** is defined as a sequence of non-space characters. The **words** in `s` will be separated by at least one space.

Return _a string of the words in reverse order concatenated by a single space._

Note that `s` may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

Example 1:**

```

**Input:** s = "the sky is blue"
**Output:** "blue is sky the"

```

Example 2:**

```

**Input:** s = "  hello world  "
**Output:** "world hello"
**Explanation:** Your reversed string should not contain leading or trailing spaces.

```

Example 3:**

```

**Input:** s = "a good   example"
**Output:** "example good a"
**Explanation:** You need to reduce multiple spaces between two words to a single space in the reversed string.

```

 

**Constraints:**

	• `1 <= s.length <= 104`

	• `s` contains English letters (upper-case and lower-case), digits, and spaces `' '`.

	• There is **at least one** word in `s`.

 

Follow-up: If the string data type is mutable in your language, can you solve it in-place with O(1)` extra space?

---

## ✅ Accepted C++ Solution

```cpp
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans = "";
        reverse(s.begin(), s.end());

        for(int i = 0; i < n; i++) {
            string word = "";
            if(s[i] == ' ') continue;

            while(i < n && s[i] != ' '){
                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());
            ans += " " + word;
        }

        return ans.substr(1);

    }
};
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 10.3 MB (beats 62.5%)  |

---

## 🏷️ Topics

`Two Pointers` · `String`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
