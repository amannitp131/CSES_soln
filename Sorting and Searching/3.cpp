// https://cses.fi/problemset/task/1090
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
   ll n,x;
   cin>>n>>x;
   vector<ll> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int cnt=0;
   sort(arr.begin(),arr.end());
   int i=0,j=n-1;
   while(i<j){
      if(arr[i]+arr[j]>x){
        j--;
      }else{
         cnt++;
         i++;j--;
      }
   }
cout<<n-cnt<<endl;
   
}

// Greedy Pairing with Two Pointers

// You're given an array of n elements and a value x.
// You can pair up elements such that the sum of any pair ≤ x, and 
// each element can be used at most once.
// You want to minimize the number of remaining elements (or equivalently,
//  maximize the number of valid pairs).

// Similar leetcode question
// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
// https://leetcode.com/problems/move-zeroes/description/
// https://leetcode.com/problems/3sum/description/
// https://leetcode.com/problems/4sum/description/



int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
