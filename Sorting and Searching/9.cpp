// https://cses.fi/problemset/task/1641
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
    vector<pair<int, int>> pr(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pr[i] = {x, i + 1};
    }
    sort(pr.begin(), pr.end());
    for (int i = 0; i < n; i++) {
        int j = i + 1, l = n - 1;
        while (j < l) {
            int sum = pr[i].first + pr[j].first + pr[l].first;
            if (sum == k) {
                cout << pr[i].second << " " << pr[j].second << " " << pr[l].second << endl;
                return;
            } else if (sum < k) {
                j++;
            } else {
                l--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
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
