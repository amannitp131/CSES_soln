// https://cses.fi/problemset/task/1643
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
   bool allneg=true;
   vector<int> vec(n);
   for(int i=0;i<n;i++){
    cin>>vec[i];
    if(vec[i]>0){
        allneg=false;
    }
   }
   ll ans=0, sum=0;
   for(int i=0;i<n;i++){
    sum+=vec[i];
    if(sum<0){
        sum=0;
    }
     ans=max(ans,sum);
   }
   sum=0;
   for(int i=n-1;i>=0;i--){
    sum+=vec[i];
    if(sum<0){
        sum=0;
    }
     ans=max(ans,sum);
   }
  if(allneg==true){
    cout<<*max_element(vec.begin(),vec.end());
  }else{
    cout<<ans<<endl;
  }
   
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
