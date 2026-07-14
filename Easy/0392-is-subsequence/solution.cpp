/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 392. Is Subsequence
 * │  Difficulty: Easy
 * │  Tags      : Two Pointers, String, Dynamic Programming
 * │  URL       : https://leetcode.com/problems/is-subsequence/
 * │  Language  : C++
 * │  Date      : 2026-07-14
 * └─────────────────────────────────────────────────────┘
 */

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
