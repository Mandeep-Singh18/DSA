/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 14. Longest Common Prefix
 * │  Difficulty: Easy
 * │  Tags      : Array, String, Trie
 * │  URL       : https://leetcode.com/problems/longest-common-prefix/
 * │  Language  : C++
 * │  Date      : 2026-07-14
 * └─────────────────────────────────────────────────────┘
 */

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
