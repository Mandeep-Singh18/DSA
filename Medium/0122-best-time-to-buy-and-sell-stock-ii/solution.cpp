/*
 * ┌─────────────────────────────────────────────────────┐
 * │                   LeetPush Solution                 │
 * ├─────────────────────────────────────────────────────┤
 * │  Problem   : 122. Best Time to Buy and Sell Stock II
 * │  Difficulty: Medium
 * │  Tags      : Array, Dynamic Programming, Greedy
 * │  URL       : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
 * │  Language  : C++
 * │  Date      : 2026-07-13
 * └─────────────────────────────────────────────────────┘
 */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int profit  = 0;
        for(int i = 0; i < n-1; i++) {
            if(prices[i] < prices[i+1]) {
                profit += prices[i+1] - prices[i];
            }
        }

        return profit;
    }
};
