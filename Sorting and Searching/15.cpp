// https://cses.fi/problemset/task/1661
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
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long prefix_sum = 0;
    long long ans = 0;
    map<long long, int> mp;

    mp[0] = 1; 

    for(int i = 0; i < n; i++) {
        prefix_sum += arr[i];

        // If prefix_sum - k was seen before, we found valid subarrays ending here
        ans += mp[prefix_sum - k];

        mp[prefix_sum]++;
    }

    cout << ans << endl;
}

// Prefix Sum + Hash Map
// You're given an array and a target sum x.
// You are to count the number of subarrays whose sum equals x.
// Since the array can contain negative numbers, 
// simple sliding window or two-pointer methods do not work.

// Similar leetcode question
// https://leetcode.com/problems/subarray-sum-equals-k/description/
// http://leetcode.com/problems/subarray-sums-divisible-by-k/description/




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
