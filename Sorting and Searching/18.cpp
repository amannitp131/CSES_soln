// https://cses.fi/problemset/task/3420
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

int ans=0;
void recr(int idx,vector<int>& arr,int cnt,set<vector<int>>& ans,vector<int>& temp){
    for(int i=idx;i<arr.size();i++){
        if(arr[i])
    }
}

void solve() {
   int n;
   cin>>n;
   vector<int> arr(n);
   set<int> st;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   recr(n,arr,0,st,0);
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
