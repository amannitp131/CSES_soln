// https://cses.fi/problemset/task/1660
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
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
    }
    int i = 0, j = 0, s = 0, ans = 0;
    while (j < n) {
        if (s < k) {
            s += arr[j];
            j++;
        }
        if (s > k) {
            s -= arr[i];
            i++;
        }
        if (s == k) {
            ans++;
            s -= arr[i];
            i++;
        }
    }
    while (s > k) {
        s -= arr[i];
        i++;
        if (s == k) {
            ans++;
            s -= arr[i];
            i++;
        }

    }

    cout << ans<< endl;

}
// Sliding Window (Two Pointers) – Fixed Sum

// This pattern maintains a window of elements using two pointers i and j such that:
// You expand the window (j++) while the current sum is less than or equal to k
// You shrink the window (i++) if the sum exceeds k
// Whenever the sum equals k, record a valid subarray (e.g., increment count or store start-end)

// When to Use:
// All elements are non-negative
// You want to find/count/return subarrays with fixed sum k

//  When Not to Use:
// Array contains negative numbers ⇒ use prefix sum + hashmap instead 
// (because sliding window breaks in that case)

// similar leetcode question
// https://leetcode.com/problems/binary-subarrays-with-sum/description/
// https://leetcode.com/problems/count-number-of-nice-subarrays/description/
// https://leetcode.com/problems/subarray-product-less-than-k/description/




int main() {
    fast();
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
