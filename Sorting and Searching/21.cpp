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
    list<int> lst;
    for (int i = 1; i <= n; i++) lst.push_back(i);

    auto it = lst.begin();
    while (!lst.empty()) {
        // Move iterator one step forward (circularly)
        if (it == lst.end()) it = lst.begin();
        it++;
        if (it == lst.end()) it = lst.begin();

        cout << *it << " ";
        it = lst.erase(it);
        if (lst.empty()) break;
    }
    cout << endl;
}

// Circular Removal Simulation
// You're simulating a circular removal of elements:
// Start with 1 to n
// Skip one element, remove the next
// Continue until the list is empty
// Output the order of removals
//  using list and an iterator to manage circular traversal
//   and efficient deletion (O(1) in lists).

// why we use list here
// In list, deleting an element takes constant time O(1)
// In vector, deletion would be O(n) 
// because all elements after the deleted one need to be shifted


// Similar leetcode question
// https://leetcode.com/problems/find-the-winner-of-the-circular-game/description/
// https://leetcode.com/problems/combination-sum-iii/description/
// https://leetcode.com/problems/reorder-list/description/
// https://leetcode.com/problems/insertion-sort-list/description/



int main() {
    fast();
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
