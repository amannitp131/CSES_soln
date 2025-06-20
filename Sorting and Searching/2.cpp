// https://cses.fi/problemset/task/1084
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
   int n,m,k,ans=0;
   cin>>n>>m>>k;
   vector<int> people(n),room(m);
   for(int i=0;i<n;i++){
    cin>>people[i];
   }
   sort(people.begin(),people.end());
   for(int i=0;i<m;i++){
    cin>>room[i];
   }
   sort(room.begin(),room.end());
   int i=0,j=0;
   while(i<n && j<m){
    if(abs(people[i]-room[j])<=k){
        i++;j++;ans++;
    }
    else if(people[i]>room[j]){
        j++;
    }else{
        i++;
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
