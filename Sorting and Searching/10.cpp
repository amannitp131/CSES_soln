// https://cses.fi/problemset/task/2216
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


// implemented by queue but got tle

// void solve() {
//    int n,rem=0,cnt=0,ans=0;
//    cin>>n;
//    queue<int> q;
//    for(int i=0;i<n;i++){
//     int a;
//     cin>>a;
//     q.push(a);
//    }
//    int k=1;
//    while(!q.empty()){
//     if(q.front()==k){
//         q.pop();
//         k=k+1;
//         rem++;
//     }else{
//         int temp=q.front();
//         q.pop();
//         q.push(temp);
//         cnt++;
//     }
//     if(cnt+rem==n){
//         ans++;
//         cnt=0;
//     }


//    }
//    cout<<ans<<endl;
   
// }

// now applying greedy

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n), pos(n+1);
    for(int i = 0; i < n; ++i){
        cin >> arr[i];
        pos[arr[i]] = i;
    }

    int rounds = 1;
    for(int i = 1; i < n; ++i){
        if(pos[i+1] < pos[i]){
            rounds++;
        }
    }

    cout << rounds << endl;
}

// To count how many rounds it takes to collect elements in increasing order from a 
//permutation of 1 to n, use the number of inversions in position order when traversing 
//from 1 to n.

// This method is is a standard pattern found in many problems like:
// https://leetcode.com/problems/max-chunks-to-make-sorted-ii/description/
// https://leetcode.com/problems/partition-array-into-disjoint-intervals/description/
// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/
// https://leetcode.com/problems/global-and-local-inversions/description/
// https://leetcode.com/problems/minimum-lines-to-represent-a-line-chart/description/
// https://leetcode.com/problems/number-of-possible-sets-of-closing-branches/description/





int main() {
    fast();
    int t;
    t=1;
    while (t--) {
        solve();
    }
    return 0;
}
