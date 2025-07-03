// https://cses.fi/problemset/task/1639
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

void recr(string s1,string s2,int idx1,int idx2){
    if(s1[idx1]==s2[idx2]){
        idx1++;
        idx2++;
    }else{
        at s1[idx1] inset s2[idx2]
        idx1++
        idx2++
        recr()
        
    }
}
void solve() {
   string s1,s2;
   cin>>s1>>s2;
   recr(s1,s2,0,0);

   
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
