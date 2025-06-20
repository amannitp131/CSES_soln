// https://cses.fi/problemset/task/1094
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
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   ll ans=0;
   for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
       ans+=(arr[i-1]-arr[i]);
       arr[i]=arr[i-1];
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
