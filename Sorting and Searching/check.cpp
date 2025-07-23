#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};

int bfs(int x, int y, int m, int n, vector<vector<int>>& A, int f1, int f2, vector<vector<bool>>& vis) {
    queue<pair<int, int>> q;
    q.push({x, y}); vis[x][y] = true;
    int cnt = 1;
    while (!q.empty()) {
        auto [i, j] = q.front(); q.pop();
        for (int d = 0; d < 4; d++) {
            int ni = i + dx[d], nj = j + dy[d];
            if (ni >= 0 && ni < m && nj >= 0 && nj < n && !vis[ni][nj]) {
                int f = A[ni][nj];
                if (f == f1 || f == f2) {
                    vis[ni][nj] = true;
                    q.push({ni, nj});
                    cnt++;
                }
            }
        }
    }
    return cnt;
}

int numberOfFlowers(int m, int n, vector<vector<int>> A) {
    set<int> flowers;
    for (auto& row : A) for (int f : row) flowers.insert(f);
    vector<int> types(flowers.begin(), flowers.end());
    int res = 0;

    for (int i = 0; i < types.size(); i++) {
        for (int j = i; j < types.size(); j++) {
            vector<vector<bool>> vis(m, vector<bool>(n));
            for (int x = 0; x < m; x++) {
                for (int y = 0; y < n; y++) {
                    int f = A[x][y];
                    if (!vis[x][y] && (f == types[i] || f == types[j])) {
                        res = max(res, bfs(x, y, m, n, A, types[i], types[j], vis));
                    }
                }
            }
        }
    }
    return res;
}

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> A(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];
    cout << numberOfFlowers(m, n, A);
    return 0;
}
