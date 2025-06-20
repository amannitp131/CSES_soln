// https://cses.fi/problemset/task/1095
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
   int a,b;
   cin>>a>>b;
   int k=a;
   ll pow=1;
   while(pow*2<=b){
    a=(a*a);
    pow=pow*2;

   }
   for(int i=pow;i<b;i++){
    a=(a*k)%MOD;
   }
   cout<<a<<endl;
   
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
