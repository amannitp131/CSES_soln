// https://cses.fi/problemset/task/1083
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
   ll n;
   cin>>n;
   ll sum =0;
   for(int i=0;i<n-1;i++){
    int a;
    cin>>a;
    sum+=a;
   }
   cout<<((n*(n+1))/2)-sum<<endl;
   
}

// Missing Number in Arithmetic Sequence" / Math-based Array Pattern
//  What the code does:
// You are given n-1 numbers from the sequence 1 to n with one number missing.

// You calculate the expected sum of numbers from 1 to n 
 
// Then subtract the actual sum of input numbers to find the missing one.

// Similar leetcode question
// https://leetcode.com/problems/missing-number/description/
// https://leetcode.com/problems/first-missing-positive/description/
// https://leetcode.com/problems/set-mismatch/
// https://leetcode.com/problems/find-the-duplicate-number/
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/





int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
