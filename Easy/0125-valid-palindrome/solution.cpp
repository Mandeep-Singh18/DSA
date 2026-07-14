/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 125. Valid Palindrome
 * │  Difficulty: Easy
 * │  Tags      : Two Pointers, String
 * │  URL       : https://leetcode.com/problems/valid-palindrome/
 * │  Language  : C++
 * │  Date      : 2026-07-14
 * └─────────────────────────────────────────────────────┘
 */

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
