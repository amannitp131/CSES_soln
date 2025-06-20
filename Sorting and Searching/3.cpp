// https://cses.fi/problemset/task/1090
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
   ll n,x;
   cin>>n>>x;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int ans=0;
   sort(arr.begin(),arr.end());
   for(int i=0;i<n;i++){
    if(arr[i]+arr[i+1]<=x){
        ans++;
        i++;
    }else{
        ans=n-i+1;
        break;
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
