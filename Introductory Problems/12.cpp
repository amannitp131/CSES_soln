// https://cses.fi/problemset/task/1092
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
   ll n,last;
   vector<int>vec;
   cin>>n;
   if(n%4==0 || n%4==3){
    ll sum=(n*(n+1))/2;
    sum=sum/2;
    for(int i=n;i>=1;i--){
        vec.push_back(i);
        sum-=i;
        if(sum<i-1){
            if(sum!=0) vec.push_back(sum);
           last=i;
           break;
        }
    }
     cout<<"YES"<<endl;
    cout<<vec.size()<<endl;
    for(auto ele:vec){
        cout<<ele<<" ";
    }
    cout<<endl;
    cout<<n-vec.size()<<endl;
    for(int i=1;i<last;i++){
        if(i!=sum){
            cout<<i<<" ";
        }
    }

   }else{
    cout<<"NO"<<endl;
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
