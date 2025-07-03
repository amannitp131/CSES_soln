// https://cses.fi/problemset/task/1636
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

int recr(vector<int>& vec,int n,int sum,int idx){
   if(sum>n) return 0;
   if(sum==n) return 1;


   for(int i=0;i<n;i++){
     int step1 += recr(vec,n,sum+vec[idx],idx);
     int step2 += recr(vec,n,sum+vec[idx],idx+1);
   }

   return (step1+step2);
}

void solve() {
   int n,x;
   cin>>n>>x;
   vector<int> vec(n);
   for(int i=0;i<n;i++){
    cin>>vec[i];
   }
   cout<<recr(vec,n,0,0);
   
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
