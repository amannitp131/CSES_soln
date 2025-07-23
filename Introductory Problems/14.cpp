// https://cses.fi/problemset/task/3419
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
   vector<bool> usedcol(INT_MAX,false);
   vector<bool> usedrow(INT_MAX,false);
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        int k=0,l=0;
        for( k=0;k<INT_MAX;k++){
            if(usedcol[k]==false){
                usedcol[k];
            } break;
        }
        for(l=k;l<INT_MAX;l++){
            if(usedcol[k]==false) break;
        }
        cout<<l<<" ";
    }
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
