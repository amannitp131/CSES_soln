// https://cses.fi/problemset/task/1070
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
   if(n<=3 && n>1){
    cout<<"NO SOLUTION";
   }else{
    
    for(int i=2;i<=n;i+=2){
        cout<<i<<" ";
    }
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
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
