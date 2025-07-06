// https://cses.fi/problemset/task/1074
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
    int n,ans=INT_MAX;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    ll median = arr[n / 2];

    ll total = 0;
    for (int i = 0; i < n; i++) {
        total += abs(arr[i] - median);
    }

    cout << total << endl;
}

// Median Minimizes Sum of Absolute Differences
// Given an array of integers, choose a value x (from the array) such that 
// the total sum of absolute differences is is minimized

// similar leetcode problem
// https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/
// https://leetcode.com/problems/last-moment-before-all-ants-fall-out-of-a-plank/description/
// https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid/
// https://leetcode.com/problems/minimum-cost-to-make-array-equal/description/



int main() {
    fast();
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
