// https://cses.fi/problemset/task/1622
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


void recr(string s, set<string>& st,string temp,vector<bool>& used){
    if(temp.length()==s.length()){
        st.insert(temp);
        return;
    }
    for(int i=0;i<s.length();i++){
        if(used[i]==false){
           used[i]=true;
           recr(s,st,temp+s[i],used);
           used[i]=false;
        }
    }
}
void solve() {
    string s;
    cin >> s;
    set<string> st;
    vector<bool> used(s.length(), false);
    recr(s, st, "", used);
    cout << st.size() << endl;
    for (const auto& perm : st) {
        cout << perm << endl;
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
