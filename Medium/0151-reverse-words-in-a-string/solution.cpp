/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 151. Reverse Words in a String
 * │  Difficulty: Medium
 * │  Tags      : Two Pointers, String
 * │  URL       : https://leetcode.com/problems/reverse-words-in-a-string/
 * │  Language  : C++
 * │  Date      : 2026-07-15
 * └─────────────────────────────────────────────────────┘
 */

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
