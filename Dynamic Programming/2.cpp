// https://cses.fi/problemset/task/1158
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
   int n,x,ans=0;
   cin>>n>>x;
   vector<int>h(n),s(n);
   for(int i=0;i<n;i++){
    cin>>h[i];
   }
   for(int i=0;i<n;i++){
    cin>>s[i];
   }
   vector<pair<float,int>> vec;
   map<int,int> mp;
   for(int i=0;i<n;i++){
    vec.push_back({1.0f *s[i]/h[i],h[i]});
    mp[h[i]]=s[i];
   }
   sort(vec.begin(), vec.end(),[](pair<float,int> &a,pair<float,int> &b){
      return a.first>b.first;
   });
   for(int i=0;i<vec.size();i++){
    if(vec[i].second<=x){
        ans+=mp[vec[i].second];
        x=x-vec[i].second;
    }
   }
   cout<<ans<<endl;
   
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
