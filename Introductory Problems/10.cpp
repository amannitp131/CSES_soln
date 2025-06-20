// https://cses.fi/problemset/task/2431
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

void solve(const string& s) {
    int q;
    cin >> q;
    cout << s[q - 1] << endl;
}

int main() {
    fast();
    string s = "";
    int i = 1;
    while ((int)s.length() < 1e6) {
        s += to_string(i);
        i++;
    }
    int t;
    cin >> t;
    while (t--) {
        solve(s);
    }
    return 0;
}