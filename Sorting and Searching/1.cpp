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




int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
