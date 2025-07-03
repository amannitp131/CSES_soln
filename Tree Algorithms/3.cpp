// https://cses.fi/problemset/task/1130
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
 
int ans = 0;
void recr(int n, vector<pair<int, int>>& vec, vector<int>& vis, int cnt, int idx) {
    if (count(vis.begin(), vis.end(), 0) == 0 || idx == n - 1) {
        ans = max(ans, cnt);
        return;
    }
    for (int i = 0;i < n - 1;i++) {
        if (vis[vec[i].first - 1] != 1 && vis[vec[i].second - 1] != 1) {
            vis[vec[i].first - 1] = 1;
            vis[vec[i].second - 1] = 1;
            recr(n, vec, vis, cnt + 1, idx + 1);
            vis[vec[i].first - 1] = 0;
            vis[vec[i].second - 1] = 0;
            recr(n, vec, vis, cnt, idx + 1);
        }
    }
}
void solve() {
    int n;
    cin >> n;
    vector<int> vis(n, 0);
    vector<pair<int, int>> vec;
    for (int i = 0;i < n - 1;i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back({ a,b });
    }
    recr(n, vec, vis, 0, 0);
    cout << ans << endl;
 
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
