// https://cses.fi/problemset/task/1068
 
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
#define fast()                            \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
        cout.tie(0);                      \
    }
 
const int MAXN = 100005;
vector<int> adj[MAXN];   
bool visited[MAXN];      
 
void dfs(int u){
    visited[u]=true;
    for(int v: adj[u]){
        if(!visited[v]){
            dfs(v);
        }
    }
}
 
 
void recr(ll n){
    if(n==1){
        return;
    }
    if(n%2==0){
        cout<<n/2<<" ";
        recr(n/2);
    }else{
        cout<<3*n+1<<" ";
        recr(3*n+1);
    }
}
 
void solve() {
   ll n;
   cin>>n;
   cout<<n<<" ";
   recr(n);
   
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