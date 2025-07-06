// https://cses.fi/problemset/task/1731
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

struct TrieNode {
    bool isEnd;
    TrieNode* next[26];
    TrieNode() {
        isEnd = false;
        memset(next, 0, sizeof(next));
    }
};

void insert(TrieNode* root, const string& word) {
    TrieNode* node = root;
    for (char c : word) {
        int idx = c - 'a';
        if (!node->next[idx])
            node->next[idx] = new TrieNode();
        node = node->next[idx];
    }
    node->isEnd = true;
}

int solveWordBreak(const string& s, TrieNode* root) {
    int n = s.size();
    vector<int> dp(n + 1, 0);
    dp[n] = 1; // base case: empty suffix has 1 way

    for (int i = n - 1; i >= 0; --i) {
        TrieNode* node = root;
        for (int j = i; j < n; ++j) {
            int idx = s[j] - 'a';
            if (!node->next[idx]) break;
            node = node->next[idx];
            if (node->isEnd) {
                dp[i] = (dp[i] + dp[j + 1]) % MOD;
            }
        }
    }
    return dp[0];
}

void solve() {
    string s;
    int n;
    cin >> s >> n;
    TrieNode* root = new TrieNode();
    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        insert(root, word);
    }

    cout << solveWordBreak(s, root) << "\n";
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
