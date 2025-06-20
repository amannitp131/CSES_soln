// https://cses.fi/problemset/task/1083
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
   ll n;
   cin>>n;
   ll sum =0;
   for(int i=0;i<n-1;i++){
    int a;
    cin>>a;
    sum+=a;
   }
   cout<<((n*(n+1))/2)-sum<<endl;
   
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
