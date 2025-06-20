// https://cses.fi/problemset/task/1618

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
  int ans=0;
   for(int i=5;i<=n;i+=5){
    if(i%10!=0) ans++;
    int k=i;
    while(k%10==0){
        k=k/10;
        ans++;
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
