// https://cses.fi/problemset/task/1647
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

void buildtree(int idx,int l,int r,vector<int>& segtree,vector<int>& arr){
    if(l==r){
        segtree[idx]=arr[l];
        return;
    }
    int mid=(l+(r-l))/2;
    buildtree(2*idx+1,l,mid,segtree,arr);
    buildtree(2*idx+2,mid+1,r,segtree,arr);
    segtree[idx]=min(segtree[2*idx+1],segtree[2*idx+2]);

}

int query(int start,int end,int idx,int l,int r,vector<int>& segtree){
   if(start>r || end<l) return INT_MAX;

   else if(start<=l && end>=r) return segtree[idx];

   else{
    int mid=(l+(r-l))/2;
    return min(query(start,end,2*idx+1,l,mid,segtree),query(start,end,2*idx+2,mid+1,r,segtree));

   } 

}

void solve() {
  int n,q;
  cin>>n>>q;
  vector<int> segtree(4*n),arr(n);
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  buildtree(0,0,n-1,segtree,arr);
  for(int i=0;i<q;i++){
    int start,end;
    cin>>start>>end;
    start--;end--;
    cout<<query(start,end,0,0,n-1,segtree)<<endl;
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
