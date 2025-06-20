// https://cses.fi/problemset/task/1193
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
string ans="";
void dfs(int i, int j, vector<vector<char>>& vec, char ch, string temp, int n, int m, vector<vector<bool>>& vis) {
    if (i < 0 || i >= n || j < 0 || j >= m) return; 
    if (vis[i][j]) return; 
    if (vec[i][j] == ch) {
        if (ans.length() == 0 || ans.length() > temp.length()) ans = temp;
        return;
    }
    vis[i][j] = true;
    dfs(i + 1, j, vec, ch, temp + 'D', n, m, vis); 
    dfs(i - 1, j, vec, ch, temp + 'U', n, m, vis); 
    dfs(i, j + 1, vec, ch, temp + 'R', n, m, vis); 
    dfs(i, j - 1, vec, ch, temp + 'L', n, m, vis); 
    vis[i][j] = false; 
}

void solve() {
   int n,m;string temp="";
   cin>>n>>m;
   vector<vector<char>> vec(n,vector<char>(m));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>vec[i][j];
    }
   }
   char ch;
   ans = "";
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(vec[i][j]=='A' || vec[i][j]=='B'){
            if(vec[i][j]=='A') ch='B';
            if(vec[i][j]=='B') ch='A';
            vector<vector<bool>> vis(n, vector<bool>(m, false));
                dfs(i, j, vec, ch, temp, n, m, vis);
        }
    }
   }
   cout<<ans<<endl;
   
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
