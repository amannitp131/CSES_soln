// https://cses.fi/problemset/task/1633
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


int recr(int n,int temp,vector<int>& dp){
    if(temp==n){
        return 1;
    }
    if(temp>n){
        return 0;
    }
    if (dp[temp] != -1){
       return dp[temp];
    }
    int ways = 0;
    for (int i = 1; i <= 6; i++) {
        ways = (ways + recr(n, temp + i, dp)) % MOD;
    }
    dp[temp] = ways;
    return dp[1];
}

void solve() {
   int n;
   cin>>n;
   vector<int> dp(n+6,-1);
   cout<< recr(n,0,dp)<<endl;
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
