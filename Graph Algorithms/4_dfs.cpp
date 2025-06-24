// https://cses.fi/problemset/task/1668

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

bool ans=true;
void dfs(int node,vector<vector<int>>& vec,vector<int>& coloured,int parent_color){
   coloured[node]=(parent_color== 1 || parent_color== -1)  ? 2 : 1;
   for(auto child: vec[node]){
      if(coloured[child]!=-1){
        if(coloured[child]==coloured[node]){
            ans=false;
        }
      }else{
        dfs(child,vec,coloured,coloured[node]);
      }
   }

}


void solve() {
   int n,m;
   cin>>n>>m;
   vector<vector<int>> vec(n+1);
   vector<int> coloured(n+1,-1);
   for(int i=0;i<m;i++){
    int a,b;
    cin>>a>>b;
    vec[a].push_back(b);
    vec[b].push_back(a);
   }
    for (int i = 1; i <= n; i++) {
        if (coloured[i] == -1) {
            dfs(i, vec, coloured, 0);
        }
    }
   if(ans){
    for(int i=1;i<=n;i++){
        cout<<coloured[i]<<" ";
    }
   }else{
    cout<<"IMPOSSIBLE"<<endl;
   }
   
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
