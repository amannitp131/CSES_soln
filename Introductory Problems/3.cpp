// https://cses.fi/problemset/task/1069
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
   string s;
   cin>>s;
   int l=1,ans=-1;
   for(int i=1;i<s.length();i++){
     if(s[i]!=s[i-1]){
        ans=max(ans,l);
        l=1;
     }else{
        l++;
     }
   }
   cout<<max(ans,l)<<endl;
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
