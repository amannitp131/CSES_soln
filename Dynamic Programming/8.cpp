// https://cses.fi/problemset/task/1145
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

vector<int> temp;
void recr(int n,vector<int>& arr,int idx){
   for(int i=0;i<n;i++){
    temp.push_back(arr[idx]);
    recr(n,arr,idx);
    temp.pop_back();
    recr(n,arr,idx+1);
   }
}

void solve() {
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++){
    cin>>arr[i];
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
