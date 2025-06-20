// https://cses.fi/problemset/task/1071
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
    long long a, b;
    cin >> a >> b;
    long long ans = (max(a, b) - 1) * (max(a, b) - 1);
    if (a >= b) {
        if (a % 2 == 0) {
            cout << ans + (a) + a - b << endl;
        } else {
            cout << ans + b << endl;
        }
    } else {
        if (b % 2 == 0) {
            cout << ans + a << endl;
        } else {
            cout << ans + (b) + b - a << endl;
        }
    }
}



int main() {
    fast();
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
