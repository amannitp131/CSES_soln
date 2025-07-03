// https://cses.fi/problemset/task/1745
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
const int MOD = 1e9 + 7;

set<int> st;
void recr(int n, vector<int>& vec, int idx, int sum, vector<vector<int>>& dp) {
    if (idx == n) {
        st.insert(sum);
        return;
    }
    if (dp[sum][idx] != -1) return;
    
    // Include current element
    recr(n, vec, idx + 1, sum + vec[idx], dp);
    // Exclude current element
    recr(n, vec, idx + 1, sum, dp);
    
    dp[sum][idx] = 1;
}

void solve() {
    int n,s=0;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0;i < n;i++) {
        cin >> vec[i];
        s+=vec[i];
    }
    vector<vector<int>> dp(s,vector<int>(n,-1));
    recr(n, vec, 0, 0,dp);
    st.erase(0);
    cout << st.size() << endl;
    for (int x : st) {
        cout << x << " ";
    }
    cout << endl;
    st.clear();

}

// Subset Sum
// Subset Sum is the general problem of determining whether any subset of a list sums 
// up to a target. In this case:
// Instead of checking for a single sum, you record all possible sums.
// You track using DP or recursive backtracking with memoization.

// similar leetcode problem:
// https://leetcode.com/problems/partition-equal-subset-sum/description/
// https://leetcode.com/problems/target-sum/description/
// https://leetcode.com/problems/combination-sum-iv/description/
// https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1






int main() {
    fast();
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
