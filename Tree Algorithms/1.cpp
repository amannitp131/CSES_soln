// https://cses.fi/problemset/task/1674
#include <bits/stdc++.h>
using namespace std;
 
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
 
const int MAXN = 200005;
vector<int> adj[MAXN];
vector<int> sub(MAXN); 
 
void dfs(int u) {
    sub[u] = 0;
    for (int v : adj[u]) {
        dfs(v);
        sub[u] += 1 + sub[v];
    }
}
 
void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n - 1; i++) {
        int boss;
        cin >> boss;
        adj[boss].push_back(i + 2);
    }
    dfs(1);
    for (int i = 1; i <= n; i++) {
        cout << sub[i] << " ";
    }
    cout << endl;
}
 
int main() {
    fast();
    solve();
    return 0;
