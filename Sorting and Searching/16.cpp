// https://cses.fi/problemset/task/1163
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
    int x, n;
    cin >> x >> n;
    vector<int> arr(n);
    multiset<int> pos;
    pos.insert(0);
    pos.insert(x);
    multiset<int> segment;
    segment.insert(x);
    for (int i = 0;i < n;i++) {
        cin >> arr[i];
        auto idx = pos.upper_bound(arr[i]);
        auto right = idx;
        auto left = prev(idx);
        segment.erase(segment.find(*right - *left));
        segment.insert(arr[i] - *left);
        segment.insert(*right - arr[i]);
        pos.insert(arr[i]);
        cout << *segment.rbegin() << " ";
    }


}




int main() {
    fast();
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
