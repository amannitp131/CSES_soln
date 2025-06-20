// https://cses.fi/problemset/task/1629
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
   int n,ans=0;
   cin>>n;
   vector<pair<int,int>> vec;
   for(int i=0;i<n;i++){
    int a,b;
    cin>>a>>b;
    vec.push_back({a,b});
   }
   sort(vec.begin(),vec.end());
   for(int i=0;i<vec.size();i++){
    int start=vec[i].first;
    int end =vec[i].second;
    int cnt=0;
    for(int j=i+1;j<vec.size();j++){
        if(end<=vec[j].first){
            i=j-1;
            break;
        }
        if(start<=vec[j].first && end>=vec[j].second){
            cnt++;
        }
    }
    ans+=max(1,cnt);

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
