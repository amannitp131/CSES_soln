// https://cses.fi/problemset/task/1754
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
   ll a,b;
   cin>>a>>b;
   if(a==b){
    if(a%3!=0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   }else{
    if(abs(a-b)%3==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
   }
   
}




int main() {
    fast();
    int t;
    cin>>t;
    while (t--) {
        solve();
    }
    return 0;
}
