// https://cses.fi/problemset/task/1619
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
   cin>>n;
   vector<int> arr(200005,0); 
   for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    arr[a]=1;
    arr[b]=-1;
   }
   int ans=INT_MIN;int s=0;
   for(int i=0;i<200005;i++){ 
      s=s+arr[i];
      ans=max(s,ans);
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

