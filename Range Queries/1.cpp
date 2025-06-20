// https://cses.fi/problemset/task/1646
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
   ll n,q;
   cin>>n>>q;
   vector<ll> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=1;i<n;i++){
    arr[i]+=arr[i-1];
   }
   for(int i=0;i<q;i++){
    ll a,b;
    cin>>a>>b;a--;b--;
    if(a>0){
        cout<<arr[b]-arr[a-1]<<endl;
    }else{
        cout<<arr[b]<<endl;
    }

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
