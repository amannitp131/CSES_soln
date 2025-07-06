// https://cses.fi/problemset/task/1141
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
   map<int,int>mp;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int i=0,ans=INT_MIN;
   for(int j=0;j<n;j++){
     mp[arr[j]]++;

     while( mp[arr[j]]>1){
         mp[arr[i]]--;
        i++;
     }
      ans = max(ans, j - i + 1);
   }
 cout<<ans<<endl;
   
}

// Sliding Window + Hash Map (for Frequency Tracking)

// Maintain a sliding window of elements that satisfies a certain property
//  (e.g., all elements are unique).Expand the window until the property is violated, 
//  then shrink it from the left until the property is satisfied again.

// Similar leetcode question
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
// https://leetcode.com/problems/fruit-into-baskets/description/
// https://leetcode.com/problems/minimum-window-substring/description/
// https://leetcode.com/problems/subarrays-with-k-different-integers/description/



int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
