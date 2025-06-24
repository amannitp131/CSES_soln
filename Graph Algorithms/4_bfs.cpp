// https://cses.fi/problemset/task/1668

// Check a graph is bipartite or not

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

#include <bits/stdc++.h>
using namespace std;

bool bfs(int start, vector<vector<int>>& vec, vector<int>& coloured) {
    queue<int> q;
    q.push(start);
    coloured[start] = 1;  

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        for (auto child : vec[node]) {
            if (coloured[child] == -1) {
                coloured[child] = 3 - coloured[node]; // alternate color (1 → 2, 2 → 1)
                q.push(child);
            } else if (coloured[child] == coloured[node]) {
                return false;
            }
        }
    }

    return true;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n + 1);
    vector<int> coloured(n + 1, -1);

    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        vec[a].push_back(b);
        vec[b].push_back(a);
    }

    for (int i = 1; i <= n; i++) {
        if (coloured[i] == -1) {
            if (!bfs(i, vec, coloured)) {
                cout << "IMPOSSIBLE" << endl;
                return;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        cout << coloured[i] << " ";
    }
    cout << endl;
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
