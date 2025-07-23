
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
    int n;
    cin >> n;
    vector<pair<pair<int, int>, int>> vec;

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        vec.push_back({{a, b}, i});
    }

    
    sort(vec.begin(), vec.end(), [](auto &x, auto &y) {
        if (x.first.first == y.first.first)
            return x.first.second > y.first.second;
        return x.first.first < y.first.first;
    });

    vector<int> ans1(n, 0), ans2(n, 0);

    
    int max_b = -1;
    for (int i = 0; i < n; i++) {
        int b = vec[i].first.second;
        int idx = vec[i].second;
        if (b <= max_b) {
            ans2[idx] = 1; 
        }
        max_b = max(max_b, b);
    }

    
    int min_b = INT_MAX;
    for (int i = n - 1; i >= 0; i--) {
        int b = vec[i].first.second;
        int idx = vec[i].second;
        if (b >= min_b) {
            ans1[idx] = 1; 
        }
        min_b = min(min_b, b);
    }

    for (int x : ans1) cout << x << " ";
    cout << "\n";
    for (int x : ans2) cout << x << " ";
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
