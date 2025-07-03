// https://cses.fi/problemset/task/1634

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
const int MAXF = 1e9;  
const int MINF = -1e9; 

int recr(vector<int>& coins, int x, vector<int>& dp) {
    if (x == 0) return 0;
    if (x < 0) return MAXF;
    if (dp[x] != -1) return dp[x];

    int minCoins = MAXF;
    for (int coin : coins) {
        if (x - coin >= 0) {
            int res = recr(coins, x - coin, dp);
            if (res != MAXF) {
                minCoins = min(minCoins, res + 1);
            }
        }
    }
    dp[x] = minCoins;
    return dp[x];
}

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<int> dp(x + 1, -1);
    int result = recr(coins, x, dp);
    cout << (result == MAXF ? -1 : result) << endl;
}

// Unbounded Knapsack / Minimum Coin Change
// You are given a list of coin denominations and a total value x.
// Your task is to find the minimum number of coins (with unlimited supply of each) 
// required to form the value x. If it's not possible, return -1.
// This falls under Unbounded Knapsack because:
// You can use each coin unlimited times
// You're trying to minimize the number of coins used

// Time: O(n * x) where n = number of coins, x = target

// Space: O(x) for the memoization table

// similar leetcode question
// https://leetcode.com/problems/coin-change/description/
// https://leetcode.com/problems/combination-sum-iv/description/
// https://leetcode.com/problems/coin-change-ii/description/
// https://leetcode.com/problems/climbing-stairs/description/


int main() {
    fast();
    solve();
    return 0;
}
