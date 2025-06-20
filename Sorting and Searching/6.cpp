// https://cses.fi/problemset/task/1640
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
    vector<pair<int, int>> vec(n); 
    for (int i = 0; i < n; i++) {
        cin >> vec[i].first;
        vec[i].second = i + 1; 
    }
    sort(vec.begin(), vec.end());
    int i = 0, j = n - 1;
    while (i < j) {
        int sum = vec[i].first + vec[j].first;
        if (sum == k) {
            cout << vec[i].second << " " << vec[j].second << endl;
            return;
        } else if (sum < k) {
            i++;
        } else {
            j--;
        }
    }
    cout << "IMPOSSIBLE" << endl;
}




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
