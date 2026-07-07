/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 121. Best Time to Buy and Sell Stock
 * │  Difficulty: Easy
 * │  Tags      : Array, Dynamic Programming
 * │  URL       : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 * │  Language  : C++
 * │  Date      : 2026-07-07
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini = INT_MAX;
        int ans = 0;
        for(int i = 0; i < prices.size(); i++) {
            int p = prices[i] -  mini;
            ans = max(ans, p);
            mini = min(mini, prices[i]);
        }

        return ans;
    }
};
