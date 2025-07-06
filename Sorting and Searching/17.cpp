// https://cses.fi/problemset/task/1085
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


bool can_divide(ll mid, vector<ll>& arr, int n, int k) {
    int count = 1;
    ll temp = 0;
    for (int i = 0; i < n; i++) {
        if (temp + arr[i] <= mid) {
            temp += arr[i];
        } else {
            count++;
            temp = arr[i];
        }
    }
    return count <= k;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    ll l = 0, r = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        l = max(l, arr[i]);
        r += arr[i];
    }

    while (l < r) {
        ll mid = l + (r - l) / 2;
        if (can_divide(mid, arr, n, k)) {
            r = mid;
        } else {
            l = mid + 1;
        }
    }
    cout << r << endl;
}

// Binary Search on Answer
// Search for the minimum/maximum possible value that satisfies a given condition.
// You do binary search over the answer space, not over array indices.
// Usually involves a bool is_possible(mid) checker.

// Similar leetcode question
// https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/description/
// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/
// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
// https://leetcode.com/problems/koko-eating-bananas/description/
// https://leetcode.com/problems/split-array-largest-sum/description/






int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
