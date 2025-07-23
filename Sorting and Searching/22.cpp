// https://cses.fi/problemset/task/1631
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


void solve() {
    int n;
    cin >> n;
    vector<long long> t(n);
    long long total = 0, max_t = 0;
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        total += t[i];
        max_t = max(max_t, t[i]);
    }
    cout << max(total, 2 * max_t) << endl;
}

// Greedy + Scheduling / Load Balancing Pattern
// It's a classic greedy scheduling problem where tasks are assigned to minimize maximum time (makespan).
// Related to multiprocessor scheduling and job allocation problems.

// similar leetcode question
// https://leetcode.com/problems/minimum-cost-to-split-an-array/description/



int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
