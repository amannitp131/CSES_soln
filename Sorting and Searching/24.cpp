// https://cses.fi/problemset/task/2183

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
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    ll res = 1;
    for (ll i = 0; i < n; i++) {
        if (arr[i] > res) {
            break;
        }
        res += arr[i];
    }
    cout << res << endl;
}

// Approach:
// 1. Read the number of coins and their values.
// 2. Sort the coin values in ascending order.
// 3. Initialize the smallest sum that cannot be formed (res) as 1.
// 4. Iterate through the sorted coins:
//    - If the current coin is greater than res, break (cannot form res).
//    - Otherwise, add the coin value to res (can form all sums up to res-1).
// 5. Output the smallest sum that cannot be formed.




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
