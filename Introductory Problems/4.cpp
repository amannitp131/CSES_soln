// https://cses.fi/problemset/task/1094
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
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   ll ans=0;
   for(int i=1;i<n;i++){
    if(arr[i-1]>arr[i]){
       ans+=(arr[i-1]-arr[i]);
       arr[i]=arr[i-1];
    }
   }
   cout<<ans<<endl;
   
}

// Make Array Non-Decreasing with Minimum Operations

// The only allowed operation is:
// Increase the current element to match the previous one if it's smaller.
// You track the total amount of increase (cost) needed.

// This is a classic greedy, prefix-based pattern:
// Walk left to right.
// If current element arr[i] < arr[i-1], you increase arr[i] to arr[i-1].
// Add the difference to your ans.

// similar leetcode question:
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// https://leetcode.com/problems/minimum-time-to-make-rope-colorful/description/
// https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/description/
// https://leetcode.com/problems/ways-to-make-a-fair-array/description/




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
