// https://cses.fi/problemset/task/1192
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
 
void dfs(int u,int v,vector<vector<int>>& visited,vector<vector<char>>& grid,int n,int m){
   if (u < 0 || u >= n || v < 0 || v >= m) return;
   if(grid[u][v]=='#' || visited[u][v]==1) return;
   else visited[u][v]=1;
 
   dfs(u+1,v,visited,grid,n,m);
   dfs(u-1,v,visited,grid,n,m);
   dfs(u,v+1,visited,grid,n,m);
   dfs(u,v-1,visited,grid,n,m);
}
 
void solve() {
   int n,m,ans=0;
   cin>>n>>m;
   vector<vector<char>> grid(n,vector<char>(m));
   vector<vector<int>> visited(n,vector<int>(m,0));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
    }
   }
    for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]=='.' && visited[i][j]==0){
            dfs(i,j,visited,grid,n,m);
            ans++;
        }
    }
   }
cout<<ans<<endl;
   
}

// Connected Components in a Grid" using DFS (Flood Fill)
// This is a classic pattern where you:
// Traverse a 2D matrix
// Use DFS/BFS/Union-Find to find connected regions 
// under certain conditions (e.g., ., 1, or specific values)

// similar leetcode questions are
// https://leetcode.com/problems/number-of-islands/description/
// https://leetcode.com/problems/max-area-of-island/description/
// https://leetcode.com/problems/flood-fill/description/
 
 
 
 
int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}