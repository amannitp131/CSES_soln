// https://cses.fi/problemset/task/1091
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
    int n, m;
    cin >> n >> m;

    multiset<int> tickets;
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        tickets.insert(h);
    }

    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;

        auto it = tickets.upper_bound(t);

        if (it == tickets.begin()) {
            // No ticket ≤ t
            cout << -1 << "\n";
        } else {
            --it; // Now points to largest ticket ≤ t
            cout << *it << "\n";
            tickets.erase(it);
        }
    }
}

// Binary Search on Sorted Multiset / Data Structure with Erasure
//Given a set of values, for each query, find the largest value ≤ query and remove it after use.

// similar leetcode question
// https://leetcode.com/problems/time-based-key-value-store/
// https://leetcode.com/problems/remove-covered-intervals/
// https://leetcode.com/problems/find-right-interval/description/
// https://leetcode.com/problems/the-skyline-problem/description/
// https://leetcode.com/problems/closest-room/description/
// https://leetcode.com/problems/longest-increasing-subsequence/description/
// https://leetcode.com/problems/most-beautiful-item-for-each-query/description/




int main() {
    fast();
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
