// https://cses.fi/problemset/task/3220
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
const ll MOD = 1e9 + 7;


void solve() {
    ll n, k;
    cin >> n >> k;
    ll x, a, b, c;
    cin >> x >> a >> b >> c;

    queue<ll> q;
    long long s = x; 
    ll ans = 0;

    q.push(x);
    ll l = x;

    // Generate first k-1 numbers
    for (ll i = 1; i < k; i++) {
        l = (1LL * l * a + b) % c;
        s += l;
        q.push(l);
    }

    ans ^= s;

    // Now slide the window
    for (ll i = k; i < n; i++) {
        ll out = q.front(); q.pop(); // remove leftmost
        l = (1LL * l * a + b) % c;    // generate new value
        s = s - out + l;              // update sum
        ans ^= s;                     // update result
        q.push(l);                    // push new value
    }

    cout << ans << endl;
}
// Sliding Window with On-the-Fly Sequence Generation and Rolling Sum/XOR
// 
// Sum of each window 
// Max/min in each window 
// XOR of window sums → optimization over rolling window
// Prefix sum with sliding removal/addition
// Queue/deque/circular buffer is often used to store last k elements.

// Similar leetcode question
// https://leetcode.com/problems/sliding-window-maximum/description/
// https://leetcode.com/problems/frequency-of-the-most-frequent-element/description/
// https://leetcode.com/problems/product-of-the-last-k-numbers/description/
// https://leetcode.com/problems/xor-queries-of-a-subarray/description/
// https://leetcode.com/problems/continuous-subarray-sum/description/



int main() {
    fast();
    ll t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
