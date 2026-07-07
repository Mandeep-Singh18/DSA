# 121. Best Time to Buy and Sell Stock

[![Difficulty](https://img.shields.io/badge/Difficulty-Easy-brightgreen?style=flat-square)](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) [![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)](https://isocpp.org/)

**🔗 LeetCode:** [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) &nbsp;|&nbsp; **📅 Date Solved:** 7 July 2026 &nbsp;|&nbsp; **🏷️ Tags:** Array, Dynamic Programming

---

## 📋 Problem Statement

You are given an array `prices` where `prices[i]` is the price of a given stock on the `ith` day.

You want to maximize your profit by choosing a **single day** to buy one stock and choosing a **different day in the future** to sell that stock.

Return _the maximum profit you can achieve from this transaction_. If you cannot achieve any profit, return `0`.

 

Example 1:**

```

**Input:** prices = [7,1,5,3,6,4]
**Output:** 5
**Explanation:** Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

```

Example 2:**

```

**Input:** prices = [7,6,4,3,1]
**Output:** 0
**Explanation:** In this case, no transactions are done and the max profit = 0.

```

 

**Constraints:**

	• `1 <= prices.length <= 105`

	• `0 <= prices[i] <= 104`

---

## ✅ Accepted C++ Solution

```cpp
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
```

---

## 📊 Submission Stats

| Metric   | Result           |
|----------|-----------------|
| ⏱️ Runtime | 0 ms (beats 100.0%) |
| 💾 Memory  | 97.4 MB (beats 25.1%)  |

---

## 🏷️ Topics

`Array` · `Dynamic Programming`

---

*Automatically pushed by [LeetPush](https://github.com/Mandeep-Singh18/leetpush) Chrome Extension*
