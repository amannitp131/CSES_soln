// https://cses.fi/problemset/task/1621
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
   set<int> st;
   for(int i=0;i<n;i++){
    cin>>arr[i];
    st.insert(arr[i]);
   }
   cout<<st.size()<<endl;

   
}

// Count Distinct Elements Using a Set
// You're given a sequence of elements (e.g., numbers, strings, characters) and you need to:
// Count how many unique elements exist in that sequence.
// The simplest and most efficient way is to use a set (or unordered_set in C++), because:
// Insertion and lookup are O(1) on average (O(log n) for set in C++).
// Duplicates are automatically handled (ignored).

// Similar leetcode question:
// https://leetcode.com/problems/unique-number-of-occurrences/description/
// https://leetcode.com/problems/contains-duplicate/description/
// https://leetcode.com/problems/single-number/description/
// https://leetcode.com/problems/intersection-of-two-arrays/description/
// https://leetcode.com/problems/longest-consecutive-sequence/description/




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
