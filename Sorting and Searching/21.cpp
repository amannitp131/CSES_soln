// https://cses.fi/problemset/task/2162
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
    cin >> n;
    vector<int> vec(n);
    iota(vec.begin(), vec.end(), 1);
    int idx=1,k=1;
    while(!vec.empty()){
        cout<<vec[idx]<<" ";
        vec.erase(vec.begin() + idx);

        if (vec.empty()) break;

        if(idx+k+1>=n){
            k++;
            idx=idx+k-n;
        }else{
            idx=idx+k;
        }
    }  
}




int main() {
    fast();
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
