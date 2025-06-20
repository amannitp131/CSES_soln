// https://cses.fi/problemset/task/1073
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
    vector<ll> vec(n), arr;
    for (int i = 0;i < n;i++) {
        cin >> vec[i];
        if (arr.empty()) arr.push_back(vec[i]);
        else {
            if (upper_bound(arr.begin(), arr.end(), vec[i]) != arr.end()) {
                auto it = upper_bound(arr.begin(), arr.end(), vec[i]);
                int idx = it - arr.begin();
                arr[idx] = vec[i];

            }
            else {
                arr.push_back(vec[i]);
            }
        }
    }
    cout << arr.size() << endl;
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
