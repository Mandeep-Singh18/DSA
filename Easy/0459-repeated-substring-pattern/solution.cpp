/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 459. Repeated Substring Pattern
 * │  Difficulty: Easy
 * │  Tags      : String, String Matching
 * │  URL       : https://leetcode.com/problems/repeated-substring-pattern/
 * │  Language  : C++
 * │  Date      : 2026-07-16
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string doubled = s + s;
        doubled = doubled.substr(1, doubled.size() - 2); // trim first & last char
        return doubled.find(s) != string::npos;
    }
};
