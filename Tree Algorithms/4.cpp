// https://cses.fi/problemset/task/1131
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

int recr(vector<vector<int>>& arr, vector<int>& vis, int idx, int cnt) {
    vis[idx] = 1;
    int maxlen = cnt;
    for (auto ele : arr[idx]) {
        if (!vis[ele]) {
            maxlen = max(maxlen, recr(arr, vis, ele, cnt + 1));
        }
    }
    return maxlen;
}

void solve() {
   int n,ans=-1;
   cin>>n;
   vector<vector<int>> arr(n);
   for(int i=0;i<n-1;i++){
    int a,b;
    cin>>a>>b;
    arr[a-1].push_back(b-1);
    arr[b-1].push_back(a-1);
   }
   for(int i=0;i<n;i++){
     vector<int> vis(n,0);
    ans=max(ans, recr(arr,vis,i,0));
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
