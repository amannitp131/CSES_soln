// https://cses.fi/problemset/task/1096
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


void recr(ll sum,ll& ways,ll n){
   if(sum==n){
    ways++;
    ways=ways%MOD;
    return;
   }
   if(sum>n){
    return;
   }
    recr(sum+1,ways,n);
    recr(sum+2,ways,n);
    recr(sum+3,ways,n);
    recr(sum+4,ways,n);
    recr(sum+5,ways,n);
    recr(sum+6,ways,n);

}

void solve() {
   ll n,ways=0;
   cin>>n;
   recr(0,ways,n);
   cout<<ways<<endl;
   
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
