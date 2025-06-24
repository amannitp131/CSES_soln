// https://cses.fi/problemset/task/1194
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

string dfs(int u,int v,vector<vector<char>>& grid,string temp,int n,int m){
   if(u==0|| u==n-1 || v==0 || v==m-1){
    return temp;
   }
   if(grid[u][v]=='.'){
      dfs(u,v+1,grid,temp+'R',n,m);
   dfs(u,v-1,grid,temp+'L',n,m);
   dfs(u+1,v,grid,temp+'D',n,m);
   dfs(u-1,v,grid,temp+'U',n,m);
   }
   return "";
}
void solve() {
   int n,m,u,v;
   cin>>n>>m;
   string temp="";
   vector<vector<char>> grid(n,vector<char>(m));
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
        if(grid[i][j]=='A'){
            u=i;v=j;
        }
    }
   }
   cout<<dfs(u,v,grid,temp,n,m)<<endl;
   
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
