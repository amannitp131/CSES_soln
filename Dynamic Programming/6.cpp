// https://cses.fi/problemset/task/1638
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


int recr(char arr[][1000], int n,int u,int v,vector<vector<int>>& dp) { 
    if(u<0 || v<0 || u>=n || v>=n) return 0;
    if(arr[u][v]=='*') return 0;
    if(u==n-1 && v==n-1) return 1;
    if(dp[u][v]!=-1) return dp[u][v];

    int right = recr(arr,n,u, v+ 1,dp);
    int down = recr(arr,n,u + 1, v,dp);

    return dp[u][v]=(right + down) % MOD;
   
}
void solve() {
   int n;
   cin>>n;
   char arr[1000][1000];
   vector<vector<int>> dp(1000, vector<int>(1000, -1));
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cin>>arr[i][j];
    }
   }
   cout<<recr(arr, n ,0 ,0,dp)<<endl;
}

// DP on 2D Grid with Constraints
// You are given an n x n grid.
// Each cell is either:
// . (free)
// * (blocked/trap)

// You start from the top-left (0,0) and want to reach the bottom-right (n-1,n-1).
// You can only move right or down.
// You must count the number of valid paths from start to end.
// Return answer modulo 1e9+7.

// Similar leetcode problems
// https://leetcode.com/problems/unique-paths/description/
// https://leetcode.com/problems/unique-paths-ii/description/
// https://leetcode.com/problems/minimum-path-sum/description/
// https://leetcode.com/problems/number-of-enclaves/description/
// https://leetcode.com/problems/paths-in-matrix-whose-sum-is-divisible-by-k/description/




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
